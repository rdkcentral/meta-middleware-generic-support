/*
 * If not stated otherwise in this file or this component's license file the
 * following copyright and licenses apply:
 *
 * Copyright 2024 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file AampTsbReader.cpp
 * @brief AampTsbReader for AAMP
 */

#include "AampTsbReader.h"
#include "AampConfig.h"
#include "StreamAbstractionAAMP.h"
#include <iostream>

/**
 * @fn AampTsbReader Constructor
 *
 * @return None
 */
AampTsbReader::AampTsbReader(PrivateInstanceAAMP *aamp, std::shared_ptr<AampTsbDataManager> dataMgr, AampMediaType mediaType, std::string sessionId)
	: mAamp(aamp), mDataMgr(std::move(dataMgr)), mMediaType(mediaType), mInitialized_(false), mStartPosition(0.0),
	  mUpcomingFragmentPosition(0.0), mCurrentRate(AAMP_NORMAL_PLAY_RATE), mTsbSessionId(std::move(sessionId)), mEosReached(false), mTrackEnabled(false),
	  mFirstPTS(0.0), mFirstPTSOffset(0.0), mCurrentBandwidth(0.0), mNewInitWaiting(false), mActiveTuneType(eTUNETYPE_NEW_NORMAL),
	  mEosCVWait(), mEosMutex(), mIsEndFragmentInjected(false), mIsNextFragmentDisc(false), mIsPeriodBoundary(false),
	  mCurrentFragment(), mLastInitFragmentData()
{
	AAMPLOG_INFO("[%s] Constructor - mCurrentRate initialized to: %f", GetMediaTypeName(mMediaType), mCurrentRate);
}

/**
 * @fn AampTsbReader Destructor
 *
 * @return None
 */
AampTsbReader::~AampTsbReader()
{
	AAMPLOG_INFO("[%s] Destructor", GetMediaTypeName(mMediaType));
	Term();
}

/**
 * @fn AampTsbReader Init function
 *
 * @param[in,out] startPosSec - Start absolute position, seconds since 1970; in: requested, out: selected
 * @param[in] rate - Playback rate
 * @param[in] tuneType - Type of tune
 * @param[in] other - Optional other TSB reader
 *
 * @return AAMPStatusType
 */
AAMPStatusType AampTsbReader::Init(double &startPosSec, float rate, TuneType tuneType, std::shared_ptr<AampTsbReader> other)
{
	AAMPLOG_INFO("[%s] Init called with rate: %f, startPosSec: %f", GetMediaTypeName(mMediaType), rate, startPosSec);
	AAMPStatusType ret = eAAMPSTATUS_OK;
	if (!mInitialized_)
	{
		// Always set the rate first, regardless of success/failure paths
		mCurrentRate = rate;
		AAMPLOG_INFO("[%s] Setting mCurrentRate to: %f at start of Init", GetMediaTypeName(mMediaType), mCurrentRate);
		
		if (startPosSec >= 0.0)
		{
			if (mDataMgr)
			{
				TsbFragmentDataPtr firstFragment = mDataMgr->GetFirstFragment();
				TsbFragmentDataPtr lastFragment = mDataMgr->GetLastFragment();
				double requestedPosition = 0.0;

				mActiveTuneType = tuneType;
				if (!(firstFragment && lastFragment))
				{
					// No fragments available
					AAMPLOG_WARN("[%s] TSB is empty - mCurrentRate already set to: %f", GetMediaTypeName(mMediaType), mCurrentRate);
					mTrackEnabled = false;
				}
				else
				{
					if (lastFragment->GetAbsolutePosition() < startPosSec)
					{
						// Handle seek out of range
						AAMPLOG_WARN("[%s] Seeking to the TSB End: %lfs (Requested:%lfs), Range:(%lfs-%lfs) tunetype:%d", GetMediaTypeName(mMediaType), lastFragment->GetAbsolutePosition().inSeconds(), startPosSec, firstFragment->GetAbsolutePosition().inSeconds(), lastFragment->GetAbsolutePosition().inSeconds(), mActiveTuneType);
						requestedPosition = lastFragment->GetAbsolutePosition().inSeconds();
					}
					else
					{
						// Adjust the position according to the stored values.
						requestedPosition = startPosSec;
					}
					TsbFragmentDataPtr firstFragmentToFetch = mDataMgr->GetNearestFragment(requestedPosition);
					if (eMEDIATYPE_VIDEO != mMediaType)
					{
						if (other)
						{
							// TODO : Jump to set of video selected period fragments first and then iterate
							double vPTS = other->GetFirstPTS();
							while (firstFragmentToFetch && firstFragmentToFetch->GetPTS() > vPTS)
							{
								if (!firstFragmentToFetch->prev)
								{
									break; // Break if no previous fragment exists
								}
								if (firstFragmentToFetch->GetPeriodId() != firstFragmentToFetch->prev->GetPeriodId())
								{
									break; // Break if at period boundary
								}
								firstFragmentToFetch = firstFragmentToFetch->prev;
							}
						}
					}
					if (firstFragmentToFetch)
					{
						mStartPosition = firstFragmentToFetch->GetAbsolutePosition();
						// Assign upcoming position as start position
						mUpcomingFragmentPosition = mStartPosition;
						mCurrentFragment = firstFragmentToFetch;
						// mCurrentRate already set at beginning of Init
						AAMPLOG_INFO("[%s] mCurrentRate confirmed as: %f in successful Init", GetMediaTypeName(mMediaType), mCurrentRate);
						if (rate != AAMP_NORMAL_PLAY_RATE && eMEDIATYPE_VIDEO != mMediaType)
						{
							// Disable all other tracks except video for trickplay
							mTrackEnabled = false;
						}
						else
						{
							mTrackEnabled = true;
						}
						// Save First PTS

						mFirstPTS = firstFragmentToFetch->GetPTS();
						mFirstPTSOffset = firstFragmentToFetch->GetPTSOffset();
						AAMPLOG_INFO("[%s] startPosition:%lfs rate:%f pts:%lfs ptsOffset:%lfs firstFragmentRange:(%lfs-%lfs)", 
							GetMediaTypeName(mMediaType), mStartPosition.inSeconds(), mCurrentRate, mFirstPTS.inSeconds(), mFirstPTSOffset.inSeconds(),
							firstFragment->GetAbsolutePosition().inSeconds(), lastFragment->GetAbsolutePosition().inSeconds());

						mInitialized_ = true;
						startPosSec = firstFragmentToFetch->GetAbsolutePosition().inSeconds();
					}
					else
					{
						AAMPLOG_ERR("[%s] FirstFragmentToFetch is null", GetMediaTypeName(mMediaType));
						// TODO : Commented this one because of TrackEnabled() dependency
						//			This should be done in a same way as StreamSelection does
						//			Otherwise we will get init failure from disabled tracks
						// ret = eAAMPSTATUS_SEEK_RANGE_ERROR;
					}
				}
			}
			else
			{
				AAMPLOG_INFO("No data manager found for mediatype[%s]", GetMediaTypeName(mMediaType));
				ret = eAAMPSTATUS_INVALID_PLAYLIST_ERROR;
			}
		}
		else
		{
			AAMPLOG_ERR("[%s] Negative position requested %fs", GetMediaTypeName(mMediaType), startPosSec);
			ret = eAAMPSTATUS_SEEK_RANGE_ERROR;
			mInitialized_ = false;
		}
	}
	return ret;
}

/**
 * @fn FindNext - function to find the next fragment from TSB
 *
 * @param[in] offset - Offset from last read fragment
 *
 * @return TsbFragmentDataPtr Pointer to the next fragment, or empty if none available.
 *
 * @brief Finds and returns the next available TSB fragment for playback.
 *
 * This method checks if the reader is initialized and attempts to locate the next fragment
 * based on the current fragment and playback direction. If this is the first download,
 * it returns the current fragment. For forward playback, it calculates the next position
 * and retrieves the nearest fragment. For reverse playback, it uses the previous fragment
 * in the linked list. If no fragment is found, it marks end-of-stream.
 *
 */
TsbFragmentDataPtr AampTsbReader::FindNext()
{
	TsbFragmentDataPtr ret{};

	if (!mInitialized_)
	{
		AAMPLOG_ERR("TsbReader[%s] not initialized", GetMediaTypeName(mMediaType));
	}
	else
	{
		if (IsFirstDownload())
		{
			ret = mCurrentFragment;
		}
		else if (mCurrentFragment)
		{
			if (mCurrentRate < 0.0) // reverse playback
			{
				// For reverse playback, get the previous fragment in the linked list
				ret = mCurrentFragment->prev;
			}
			else // forward or normal playback
			{
				// For forward playback, get the next fragment in the linked list
				ret = mCurrentFragment->next;

			}
		}

	   if (!ret)
	   {
		   AAMPLOG_INFO("[%s] No next fragment available, mCurrentRate %f", GetMediaTypeName(mMediaType), mCurrentRate);

		   if (mCurrentRate < AAMP_NORMAL_PLAY_RATE)
		   {
				mEosReached = true;
		   }
	   }
	}

	if (ret)
	{
		AAMPLOG_INFO("[%s] Returning fragment: absPos %lfs pts %lfs period %s timeScale %u ptsOffset %fs url %s",
			GetMediaTypeName(mMediaType), ret->GetAbsolutePosition().inSeconds(), ret->GetPTS().inSeconds(), ret->GetPeriodId().c_str(), ret->GetTimeScale(), ret->GetPTSOffset().inSeconds(), ret->GetUrl().c_str());
	}

	return ret;
}

/**
 * @fn ReadNext - function to update the last read file from TSB
 *
 * @param[in] nextFragmentData - Next fragment data obtained previously from FindNext
 */
void AampTsbReader::ReadNext(TsbFragmentDataPtr nextFragmentData)
{
	if (nextFragmentData)
	{
		// Update current fragment pointer
		mCurrentFragment = nextFragmentData;
		
		if (mCurrentRate > AAMP_NORMAL_PLAY_RATE)
		{
			mEosReached = nextFragmentData->GetAbsolutePosition().inSeconds() >= mAamp->mTrickModePositionEOS;
		}
		else if (mCurrentRate < 0.0)
		{
			mEosReached = !nextFragmentData->prev;
		}
		else
		{
			mEosReached = !nextFragmentData->next;
		}

		// For forward iteration, examine the discontinuity marker in the next fragment.
		// For reverse iteration, inspect the discontinuity marker in the current fragment,
		// indicating that the upcoming iteration will transition to a different period.
		if (mCurrentRate >= 0.0)
		{
			mIsNextFragmentDisc = nextFragmentData->IsDiscontinuous();
		}
		else
		{
			mIsNextFragmentDisc = (nextFragmentData->next && nextFragmentData->next->IsDiscontinuous());
		}

		if (!IsFirstDownload())
		{
			CheckPeriodBoundary(nextFragmentData);
		}
		if (mCurrentFragment && mCurrentFragment->GetInitFragData())
		{
			mLastInitFragmentData = mCurrentFragment->GetInitFragData();
		}

		if (mCurrentRate >= 0.0)
		{ // read in forward direction
			mUpcomingFragmentPosition = (nextFragmentData->next) ?
				nextFragmentData->next->GetAbsolutePosition() :
				(nextFragmentData->GetAbsolutePosition() + nextFragmentData->GetDuration());
		}
		else
		{ // read in reverse direction
			// When nextFragmentData->prev becomes nullptr, eos will be set, and no more reads will happen for this rate as we reached the very first fragment in tsb and segments never gets added to the beginning of tsb.
			mUpcomingFragmentPosition = (nextFragmentData->prev) ?
				nextFragmentData->prev->GetAbsolutePosition() :
				nextFragmentData->GetAbsolutePosition();
		}

		AAMPLOG_INFO("[%s] Fragment: absPos %lfs next %lfs eos %d initWaiting %d mIsNextFragmentDisc %d mIsPeriodBoundary %d mTrickModePositionEOS %lfs rate %f",
			GetMediaTypeName(mMediaType), nextFragmentData->GetAbsolutePosition().inSeconds(), mUpcomingFragmentPosition.inSeconds(), mEosReached, mNewInitWaiting, mIsNextFragmentDisc,
			mIsPeriodBoundary, mAamp->mTrickModePositionEOS, mCurrentRate);
	}
	else
	{
		// Handle null fragment case - this indicates we've reached the end of available data
		AAMPLOG_INFO("[%s] Null fragment read, setting EOS.", GetMediaTypeName(mMediaType));
		mEosReached = true;
	}
}

/**
 * @fn CheckPeriodBoundary
 * @brief Checks if the current fragment represents a new period and if there's a PTS discontinuity.
 *
 * This function is called when a new fragment is read. It compares the period ID of the
 * current fragment with the last known period ID to detect a boundary. If a boundary is
 * detected during normal playback, it also checks for a Presentation Timestamp (PTS)
 * discontinuity between the previous and current fragments. A discontinuity in PTS
 * can occur at period boundaries, and this function updates the reader's state,
 * such as mFirstPTS, to handle the new timeline.
 *
 * @param[in] currFragment A shared pointer to the current fragment being processed.
 */
void AampTsbReader::CheckPeriodBoundary(TsbFragmentDataPtr currFragment)
{
	mIsPeriodBoundary = false;
	// Ensure all necessary fragment data is available before proceeding.
	if (!currFragment || !currFragment->GetInitFragData() || !mLastInitFragmentData)
	{
		return;
	}

	// A period boundary is detected if the period ID of the current fragment's
	// initialization data differs from the last processed one.
	if (mLastInitFragmentData->GetPeriodId() != currFragment->GetInitFragData()->GetPeriodId())
	{
		mIsPeriodBoundary = true;
	}

	// Check for PTS discontinuity only when crossing a period boundary during normal playback.
	// Trick-play modes (fast-forward, rewind) handle PTS differently and are excluded.
	if (mIsPeriodBoundary && (AAMP_NORMAL_PLAY_RATE == mCurrentRate))
	{
		// Get the fragment immediately preceding the current one to check for continuity.
		TsbFragmentDataPtr adjFragment = currFragment->prev;
		if (adjFragment)
		{
			// Calculate the expected PTS of the current fragment by adding the
			// duration of the previous fragment to its PTS.
			AampTime nextPTSCal = adjFragment->GetPTS() + adjFragment->GetDuration();

			// If the calculated next PTS does not match the actual PTS of the current fragment,
			// a discontinuity is detected.
			if (nextPTSCal != currFragment->GetPTS())
			{
				// When a discontinuity is found, reset the reference PTS and its offset
				// to the values from the new period's first fragment. This ensures
				// subsequent fragments are processed relative to the new timeline.
				mFirstPTS = currFragment->GetPTS();
				mFirstPTSOffset = currFragment->GetPTSOffset();
				AAMPLOG_INFO("Discontinuity detected at PTS position %lf pts offset %lf", mFirstPTS.inSeconds(), mFirstPTSOffset.inSeconds());
			}
		}
	}
}

/**
 * @fn Term  - function to clear TsbReader states
 */
void AampTsbReader::Term()
{
	mStartPosition = 0.0;
	mUpcomingFragmentPosition = 0.0;
	mCurrentRate = AAMP_NORMAL_PLAY_RATE;
	mInitialized_ = false;
	mEosReached = false;
	mTrackEnabled = false;
	mFirstPTS = 0.0;
	mFirstPTSOffset = 0.0;
	mCurrentBandwidth = 0.0;
	mActiveTuneType = eTUNETYPE_NEW_NORMAL;
	mIsPeriodBoundary = false;
	mIsEndFragmentInjected.store(false);
	mLastInitFragmentData.reset();
	mCurrentFragment.reset();
	AAMPLOG_INFO("mediaType : %s", GetMediaTypeName(mMediaType));
}

/**
 * @brief CheckForWaitIfReaderDone  - fn to wait for reader to inject end fragment
 */
void AampTsbReader::CheckForWaitIfReaderDone()
{
	std::unique_lock<std::mutex> lock(mEosMutex);
	if (!IsEndFragmentInjected())
	{
		AAMPLOG_INFO("[%s] Waiting for last fragment injection update", GetMediaTypeName(mMediaType));
		mEosCVWait.wait(lock, [this]
						{ return IsEndFragmentInjected(); });
	}
	AAMPLOG_INFO("[%s] Exiting", GetMediaTypeName(mMediaType));
}

/**
 * @brief AbortCheckForWaitIfReaderDone - fn to set the reader end fragment injected
 */
void AampTsbReader::AbortCheckForWaitIfReaderDone()
{
	std::unique_lock<std::mutex> lock(mEosMutex);
	if (!IsEndFragmentInjected())
	{
		SetEndFragmentInjected();
		mEosCVWait.notify_one();
	}
}

/**
 * @fn IsFirstDownload
 * @return True if first download
 */
bool AampTsbReader::IsFirstDownload()
{
	return (mStartPosition == mUpcomingFragmentPosition);
}

/**
 * @fn GetPlaybackRate
 * @return Playback rate
 */
float AampTsbReader::GetPlaybackRate()
{
	return mCurrentRate;
}

/**
 * @fn GetFirstPTS
 *
 * @return double - First PTS
 */
double AampTsbReader::GetFirstPTS()
{
	return mFirstPTS.inSeconds();
}

/**
 * @fn GetFirstPTSOffset
 *
 * @return AampTime - First PTS Offset
 */
AampTime AampTsbReader::GetFirstPTSOffset()
{
	return mFirstPTSOffset;
}

/**
 * @fn GetStartPosition
 *
 * @return AampTime - Start position
 */
AampTime AampTsbReader::GetStartPosition()
{
	return mStartPosition;
}
