/*
 * If not stated otherwise in this file or this component's license file the
 * following copyright and licenses apply:
 *
 * Copyright 2018 RDK Management
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
 * @file AampEvent.cpp
 * @brief Implementation of AAMPEventObject and derived class.
 */

#include "AampEvent.h"
#include "AampDefine.h"
#include "vttCue.h"
#include <map>
#include "PlayerSecInterface.h"

/**
 * @brief AAMPEventObject Constructor
 */
AAMPEventObject::AAMPEventObject(AAMPEventType type, std::string sid): mType(type), mSessionID{std::move(sid)}
{

}

/**
 * @brief Get Event Type
 *
 * @return Event Type
 */
AAMPEventType AAMPEventObject::getType() const
{
	return mType;
}

/**
 * @brief MediaErrorEvent Constructor
 */
MediaErrorEvent::MediaErrorEvent(AAMPTuneFailure failure, int code, const std::string &desc, bool shouldRetry, int classCode, int reason, int businessStatus, const std::string &responseData, std::string sid):
		AAMPEventObject(AAMP_EVENT_TUNE_FAILED, std::move(sid)), mFailure(failure), mCode(code),
		mDescription(desc), mShouldRetry(shouldRetry), mSecManagerClass(classCode), mSecManagerReasonCode(reason), mBusinessStatus(businessStatus), mResponseData(responseData)
{

}

/**
 * @brief Get Failure Type
 *
 * @return Tune failure type
 */
AAMPTuneFailure MediaErrorEvent::getFailure() const
{
	return mFailure;
}

/**
 * @brief Get Error Code
 *
 * @return Tune error code
 */
int MediaErrorEvent::getCode() const
{
	return mCode;
}

/**
 * @brief Get Description
 *
 * @return Error description
 */
const std::string &MediaErrorEvent::getDescription() const
{
	return mDescription;
}

/**
 * @brief Get ResponseData
 *
 * @return Error ResponseData
 */
const std::string &MediaErrorEvent::getResponseData() const
{
	return mResponseData;
}

/**
 * @brief Retry or not
 *
 * @return Retry or don't retry
 */
bool MediaErrorEvent::shouldRetry() const
{
	return mShouldRetry;
}

/**
 * @fn getClass
 */
int32_t MediaErrorEvent::getClass() const
{
	return mSecManagerClass;
}

/**
 * @fn getReason
 */
int32_t MediaErrorEvent::getReason() const
{
	return mSecManagerReasonCode;
}
/**
 * @fn getBusinessStatus
 */
int32_t MediaErrorEvent::getBusinessStatus() const
{
	return mBusinessStatus;
}

/**
 * @brief SpeedChangedEvent Constructor
 */
SpeedChangedEvent::SpeedChangedEvent(float rate, std::string sid):
		AAMPEventObject(AAMP_EVENT_SPEED_CHANGED, std::move(sid)), mRate(rate)
{

}

/**
 * @brief Get Rate
 *
 * @return New speed
 */
float SpeedChangedEvent::getRate() const
{
	return mRate;
}

/**
 * @brief ProgressEvent Constructor

 *
 */
ProgressEvent::ProgressEvent(double duration, double position, double start, double end, float speed, long long pts, double videoBufferedDuration, double audioBufferedDuration, std::string seiTimecode, double liveLatency, long profileBandwidth, long networkBandwidth, double currentPlayRate, 
	std::string sid):
		AAMPEventObject(AAMP_EVENT_PROGRESS, std::move(sid)), mDuration(duration),
		mPosition(position), mStart(start),
		mEnd(end), mSpeed(speed), mPTS(pts),
		mVideoBufferedDurationMs(videoBufferedDuration),
		mAudioBufferedDurationMs(audioBufferedDuration),
		mSEITimecode(seiTimecode),
		mLiveLatency(liveLatency),
		mProfileBandwidth(profileBandwidth),
		mNetworkBandwidth(networkBandwidth),
		mCurrentPlayRate(currentPlayRate)
{

}

/**
 * @brief Get Duration of Asset
 *
 * @return Asset duration in MS
 */
double ProgressEvent::getDuration() const
{
	return mDuration;
}

/**
 * @brief Get Current Position
 *
 * @return Current position in MS
 */
double ProgressEvent::getPosition() const
{
	return mPosition;
}

/**
 * @brief Get Start Position
 *
 * @return Start position in MS
 */
double ProgressEvent::getStart() const
{
	return mStart;
}

/**
 * @brief Get End Position
 *
 * @return End position in MS
 */
double ProgressEvent::getEnd() const
{
	return mEnd;
}

/**
 * @brief Get Speed
 *
 * @return Current speed
 */
float ProgressEvent::getSpeed() const
{
	return mSpeed;
}

/**
 * @brief Get Video PTS
 *
 * @return Video PTS
 */
long long ProgressEvent::getPTS() const
{
	return mPTS;
}

/**
 * @brief Get Video Buffered Duration in milliseconds
 *
 * @return Video Buffered Duration
 */
double ProgressEvent::getVideoBufferedDuration() const
{
	return mVideoBufferedDurationMs;
}

/**
 * @brief Get Audio Buffered Duration in milliseconds
 *
 * @return Audio Buffered Duration
 */
double ProgressEvent::getAudioBufferedDuration() const
{
	return mAudioBufferedDurationMs;
}

/**
 * @brief Get SEI Time Code information
 *
 * @return SEI Time Code
 */
const char* ProgressEvent::getSEITimeCode() const
{
	return mSEITimecode.c_str();
}

/**
 * @brief Get Live Latency
 *
 * @return Live latency
 */
double ProgressEvent::getLiveLatency() const
{
	return mLiveLatency;
}

/**
 * @brief Get Profile Bandwidth
 *
 * @return Profile Bandwidth
 */
long ProgressEvent::getProfileBandwidth() const
{
	return mProfileBandwidth;
}

/**
 * @brief Get Network Bandwidth 
 *
 * @return Network Bandwidth
 */
long ProgressEvent::getNetworkBandwidth() const
{
	return mNetworkBandwidth;
}

/**
 * @brief Get CurrentPlayRate  
 *
 * @return CurrentPlayRate
 */
double ProgressEvent::getCurrentPlayRate() const
{
	return mCurrentPlayRate;
}


/**
 * @brief CCHandleEvent Constructor
 *
 * @param[in] handle - Handle to close caption
 */
CCHandleEvent::CCHandleEvent(unsigned long handle, std::string sid):
		AAMPEventObject(AAMP_EVENT_CC_HANDLE_RECEIVED, std::move(sid)), mHandle(handle)
{

}

/**
 * @brief Get Closed Caption Handle
 *
 * @return Handle to the closed caption
 */
unsigned long CCHandleEvent::getCCHandle() const
{
	return mHandle;
}

/**
 * @brief MediaMetadataEvent Constructor
 */
MediaMetadataEvent::MediaMetadataEvent(long duration, int width, int height, bool hasDrm, bool isLive, const std::string &DrmType, double programStartTime, int tsbDepthMs, std::string sid,const std::string &url):
		AAMPEventObject(AAMP_EVENT_MEDIA_METADATA, std::move(sid)), mDuration(duration),
		mLanguages(), mBitrates(), mWidth(width), mHeight(height),
		mHasDrm(hasDrm), mSupportedSpeeds(), mIsLive(isLive), mDrmType(DrmType), mProgramStartTime(programStartTime),
		mPCRating(),mSsi(-1),mFrameRate(0),mVideoScanType(eVIDEOSCAN_UNKNOWN),mAspectRatioWidth(0),mAspectRatioHeight(0),
		mVideoCodec(),mHdrType(),mAudioBitrates(),mAudioCodec(),mAudioMixType(),isAtmos(false),mMediaFormatName(), mTsbDepthMs(tsbDepthMs), mUrl(url)
{

}

/**
 * @brief Get Duration
 *
 * @return Asset duration
 */
long MediaMetadataEvent::getDuration() const
{
	return mDuration;
}

/**
 * @brief Get Program/Availability Start Time.
 *
 * @return Program/Availability Start Time.
 */
double MediaMetadataEvent::getProgramStartTime() const
{
	return mProgramStartTime;
}

/**
 * @brief Get TsbDepth
 *
 * @return TsbDepthMs
 */
int MediaMetadataEvent::getTsbDepth() const
{
	return mTsbDepthMs;
}

/**
 * @brief Add a supported language
 */
void MediaMetadataEvent::addLanguage(const std::string &lang)
{
	return mLanguages.push_back(lang);
}

/**
 * @brief Get Languages
 *
 * @return Vector of supported languages
 */
const std::vector<std::string> &MediaMetadataEvent::getLanguages() const
{
	return mLanguages;
}

/**
 * @brief Get Language Count
 *
 * @return Supported language count
 */
int MediaMetadataEvent::getLanguagesCount() const
{
	return (int)mLanguages.size();
}

/**
 * @brief Add a supported bitrate
 */
void MediaMetadataEvent::addBitrate(BitsPerSecond bitrate)
{
	return mBitrates.push_back(bitrate);
}

/**
 * @brief Get Bitrates
 *
 * @return Vector of supported bitrates
 */
const std::vector<BitsPerSecond> &MediaMetadataEvent::getBitrates() const
{
	return mBitrates;
}

/**
 * @brief Get Bitrate Count
 *
 * @return Supported bitrate count
 */
int MediaMetadataEvent::getBitratesCount() const
{
	return (int)mBitrates.size();
}

/**
 * @brief Get Width
 *
 * @return Video width
 */
int MediaMetadataEvent::getWidth() const
{
	return mWidth;
}

/**
 * @brief Get Height
 *
 * @return Video height
 */
int MediaMetadataEvent::getHeight() const
{
	return mHeight;
}

/**
 * @brief Supports DRM or not
 *
 * @return DRM enablement status
 */
bool MediaMetadataEvent::hasDrm() const
{
	return mHasDrm;
}

/**
 * @brief Add a supported speed
 */
void MediaMetadataEvent::addSupportedSpeed(float speed)
{
	return mSupportedSpeeds.push_back(speed);
}

/**
 * @brief Get Supported Speeds
 *
 * @return Vector of supported speeds
 */
const std::vector<float> &MediaMetadataEvent::getSupportedSpeeds() const
{
	return mSupportedSpeeds;
}

/**
 * @brief Get Supported Speed count
 *
 * @return Supported speeds count
 */
int MediaMetadataEvent::getSupportedSpeedCount() const
{
	return (int)mSupportedSpeeds.size();
}

/**
 * @brief Check for Live content or VOD
 *
 * @return isLive
 */

bool MediaMetadataEvent::isLive() const
{
	return mIsLive;
}

/**
 * @brief Get Current DRM Type
 *
 * @return Current DRM
 */
const std::string &MediaMetadataEvent::getDrmType() const
{
	return mDrmType;
}

/**
 * @brief Get Effective Url
 *
 * @return Url
 */
const std::string &MediaMetadataEvent::getUrl() const
{
	return mUrl;
}

/**
 * @brief Sets additional metadata for video
 */
void MediaMetadataEvent::SetVideoMetaData(float frameRate,VideoScanType videoScanType,int aspectRatioWidth,int  aspectRatioHeight, const std::string &  videoCodec, const std::string  & strHdrType, const std::string & strPCRating, int ssi)
{
	this->mFrameRate = frameRate;
	this->mVideoScanType = videoScanType;
	this->mAspectRatioWidth = aspectRatioWidth;
	this->mAspectRatioHeight = aspectRatioHeight;
	this->mVideoCodec = videoCodec;
	this->mHdrType = strHdrType;
	this->mSsi = ssi;
	this->mPCRating = strPCRating;
	return;
}

/**
 * @brief Get Bitrates
 *
 * @return Vector of supported bitrates
 */
void MediaMetadataEvent::SetAudioMetaData(const std::string &audioCodec,const std::string &mixType,bool  isAtmos  )
{
	mAudioCodec = audioCodec;
	mAudioMixType = mixType;
	isAtmos = isAtmos;
	return;
}

/**
 * @brief BitrateChangeEvent Constructor
 */
BitrateChangeEvent::BitrateChangeEvent(int time, BitsPerSecond bitrate, const std::string &desc, int width, int height, double frameRate, double position, bool cappedProfile, int displayWidth, int displayHeight, VideoScanType videoScanType, int aspectRatioWidth, int aspectRatioHeight, std::string sid):
		AAMPEventObject(AAMP_EVENT_BITRATE_CHANGED, std::move(sid)), mTime(time),
		mBitrate(bitrate), mDescription(desc), mWidth(width),
		mHeight(height), mFrameRate(frameRate), mPosition(position), mCappedProfile(cappedProfile), mDisplayWidth(displayWidth), mDisplayHeight(displayHeight), mVideoScanType(videoScanType), mAspectRatioWidth(aspectRatioWidth), mAspectRatioHeight(aspectRatioHeight)
{

}

/**
 * @brief Get Time
 *
 * @return Playback time
 */
int BitrateChangeEvent::getTime() const
{
	return mTime;
}

/**
 * @brief Get Bitrate
 *
 * @return Current bitrate
 */
BitsPerSecond BitrateChangeEvent::getBitrate() const
{
	return mBitrate;
}

/**
 * @brief Get Description
 *
 * @return Reason of bitrate change
 */
const std::string &BitrateChangeEvent::getDescription() const
{
	return mDescription;
}

/**
 * @brief Get Width
 *
 * @return Video width
 */
int BitrateChangeEvent::getWidth() const
{
	return mWidth;
}

/**
 * @brief Get Height
 *
 * @return Video height
 */
int BitrateChangeEvent::getHeight() const
{
	return mHeight;
}

/**
 * @brief Get Frame Rate
 *
 * @return Frame Rate
 */
double BitrateChangeEvent::getFrameRate() const
{
	return mFrameRate;
}

/**
 * @brief Get Position
 *
 * @return Position
 */
double BitrateChangeEvent::getPosition() const
{
	return mPosition;
}

/**
 * @brief Get Capped Profile status
 *
 * @return profile filtering restricted status
 */
bool BitrateChangeEvent::getCappedProfileStatus() const
{
        return mCappedProfile;
}

/**
 * @brief Get display width
 *
 * @return output display tv width
 */
int BitrateChangeEvent::getDisplayWidth() const
{
        return mDisplayWidth;
}

/**
 * @brief Get output tv display Height
 *
 * @return output display tv height
 */
int BitrateChangeEvent::getDisplayHeight() const
{
        return mDisplayHeight;
}

/**
 * @brief Get Video Scan Type
 *
 * @return output video scan type
 */
VideoScanType BitrateChangeEvent::getScanType() const
{
        return mVideoScanType;
}

/**
 * @brief Get Aspect Ratio Width
 *
 * @return output aspect ratio width
 */
int BitrateChangeEvent::getAspectRatioWidth() const
{
        return mAspectRatioWidth;
}

/**
 * @brief Get Aspect Ratio Height
 *
 * @return output Aspect Ratio Height
 */
int BitrateChangeEvent::getAspectRatioHeight() const
{
        return mAspectRatioHeight;
}

/**
 * @brief TimedMetadataEvent Constructor
 */
TimedMetadataEvent::TimedMetadataEvent(const std::string &name, const std::string &id, double time, double duration, const std::string &content, std::string sid):
		AAMPEventObject(AAMP_EVENT_TIMED_METADATA, std::move(sid)), mName(name), mId(id),
		mTime(time), mDuration(duration), mContent(content)
{

}

/**
 * @brief Get Timed Metadata Name
 *
 * @return TimedMetadata name string
 */
const std::string &TimedMetadataEvent::getName() const
{
	return mName;
}

/**
 * @brief Get Timed Metadata Id
 *
 * @return TimedMetadata id string
 */
const std::string &TimedMetadataEvent::getId() const
{
	return mId;
}

/**
 * @brief Get Time
 *
 * @return Time of the Timed Metadata
 */
double TimedMetadataEvent::getTime() const
{
	return mTime;
}

/**
 * @brief Get Duration
 *
 * @return Duration (in MS) of the TimedMetadata
 */
double TimedMetadataEvent::getDuration() const
{
	return mDuration;
}

/**
 * @brief Get Content
 *
 * @return Content field of the TimedMetadata
 */
const std::string &TimedMetadataEvent::getContent() const
{
	return mContent;
}

/**
 * @brief BulkTimedMetadataEvent Constructor
 */
BulkTimedMetadataEvent::BulkTimedMetadataEvent(const std::string &content, std::string sid):
		AAMPEventObject(AAMP_EVENT_BULK_TIMED_METADATA, std::move(sid)), mContent(content)
{

}

/**
 * @brief Get metadata content
 *
 * @return metadata content
 */
const std::string &BulkTimedMetadataEvent::getContent() const
{
	return mContent;
}

/**
 * @brief StateChangedEvent Constructor
 */
StateChangedEvent::StateChangedEvent(AAMPPlayerState state, std::string sid):
		AAMPEventObject(AAMP_EVENT_STATE_CHANGED, std::move(sid)), mState(state)
{

}

/**
 * @brief Get Current Player State
 *
 * @return Player state
 */
AAMPPlayerState StateChangedEvent::getState() const
{
	return mState;
}

/**
 * @brief SupportedSpeedsChangedEvent Constructor
 */
SupportedSpeedsChangedEvent::SupportedSpeedsChangedEvent(std::string sid):
		AAMPEventObject(AAMP_EVENT_SPEEDS_CHANGED, std::move(sid)), mSupportedSpeeds()
{

}

/**
 * @brief Add a Supported Speed
 */
void SupportedSpeedsChangedEvent::addSupportedSpeed(float speed)
{
	return mSupportedSpeeds.push_back(speed);
}

/**
 * @brief Get Supported Speeds
 *
 * @return Vector of supported speeds
 */
const std::vector<float> &SupportedSpeedsChangedEvent::getSupportedSpeeds() const
{
	return mSupportedSpeeds;
}

/**
 * @brief Get Supported Speeds Count
 *
 * @return Supported speeds count
 */
int SupportedSpeedsChangedEvent::getSupportedSpeedCount() const
{
	return (int)mSupportedSpeeds.size();
}

/**
 * @brief SeekedEvent Constructor
 */
SeekedEvent::SeekedEvent(double positionMS, std::string sid):
		AAMPEventObject(AAMP_EVENT_SEEKED, std::move(sid)), mPosition(positionMS)
{

}

/**
 * @brief Get position
 *
 * @return Seeked position
 */
double SeekedEvent::getPosition() const
{
	return mPosition;
}

/**
 * @brief TuneProfilingEvent Constructor
 */
TuneProfilingEvent::TuneProfilingEvent(std::string &profilingData, std::string sid):
		AAMPEventObject(AAMP_EVENT_TUNE_PROFILING, std::move(sid)), mProfilingData(profilingData)
{

}

/**
 * @brief Get Tune profiling data
 *
 * @return Tune profiling data
 */
const std::string &TuneProfilingEvent::getProfilingData() const
{
	return mProfilingData;
}

/**
 * @brief BufferingChangedEvent Constructor
 */
BufferingChangedEvent::BufferingChangedEvent(bool buffering, std::string sid):
		AAMPEventObject(AAMP_EVENT_BUFFERING_CHANGED, std::move(sid)), mBuffering(buffering)
{

}

/**
 * @brief Get Buffering Status
 *
 * @return Buffering status (true/false)
 */
bool BufferingChangedEvent::buffering() const
{
	return mBuffering;
}

/**
 * @brief DrmMetaDataEvent Constructor
 */
DrmMetaDataEvent::DrmMetaDataEvent(AAMPTuneFailure failure, const std::string &accessStatus, int statusValue, int responseCode, bool secclientErr, std::string sid):
	AAMPEventObject(AAMP_EVENT_DRM_METADATA, std::move(sid)), mFailure(failure), mAccessStatus(accessStatus),
	mAccessStatusValue(statusValue), mResponseCode(responseCode), mSecclientError(secclientErr), mSecManagerReasonCode(-1), mSecManagerClass(-1),
	mBusinessStatus(-1), mHeaderResponses(),mResponseData(),mNetworkMetrics(), mBodyResponses()
{
	
}

/**
 * @brief Get Failure type
 *
 * @return Tune failure type
 */
AAMPTuneFailure DrmMetaDataEvent::getFailure() const
{
	return mFailure;
}

/**
 * @brief Set Failure type
 */
void DrmMetaDataEvent::setFailure(AAMPTuneFailure failure)
{
	mFailure = failure;
}

/**
 * @brief Get Access Status
 *
 * @return Access status string
 */
const std::string &DrmMetaDataEvent::getAccessStatus() const
{
	return mAccessStatus;
}

/**
 * @brief Set Access Status
 */
void DrmMetaDataEvent::setAccessStatus(const std::string &status)
{
	mAccessStatus = status;
}

/**
 * @brief Get Response Data
 *
 * @return Response Data string
 */
const std::string &DrmMetaDataEvent::getResponseData() const
{
	return mResponseData;
}

/**
 * @brief Set Response Data
 */
void DrmMetaDataEvent::setResponseData(const std::string &data)
{
	mResponseData = data;
}

/**
 * @brief Get Access Status
 *
 * @return Access status value
 */
int DrmMetaDataEvent::getAccessStatusValue() const
{
	return mAccessStatusValue;
}

/**
 * @brief Set Access Status Value
 */
void DrmMetaDataEvent::setAccessStatusValue(int value)
{
	mAccessStatusValue = value;
}

/**
 * @brief Get Response Code
 *
 * @return Response code
 */
int DrmMetaDataEvent::getResponseCode() const
{
	return mResponseCode;
}

/**
 * @brief Get Response Code
 *
 * @return Response code
 */
int32_t DrmMetaDataEvent::getSecManagerReasonCode() const
{
	return mSecManagerReasonCode;
}

/**
 * @brief Get Response Code
 *
 * @return Response code
 */
int32_t DrmMetaDataEvent::getSecManagerClassCode() const
{
	return mSecManagerClass;
}

/**
 * @brief Get Response Code
 *
 * @return Response code
 */
int32_t DrmMetaDataEvent::getBusinessStatus() const
{
	return mBusinessStatus;
}

/**
 * @brief Set Response Code
 */
void DrmMetaDataEvent::setResponseCode(int code)
{
	mResponseCode = code;
}

/**
 * @brief Get Network Metric Data
 *
 * @return Network Metric Data string
 */
const std::string &DrmMetaDataEvent::getNetworkMetricData() const
{
	return mNetworkMetrics;
}

/**
 * @brief Set Network Metric Data
 */
void DrmMetaDataEvent::setNetworkMetricData(const std::string &data)
{
	mNetworkMetrics = data;
}

/**
 * @brief Set Secmanager response code
 */
void DrmMetaDataEvent::setSecManagerReasonCode(int32_t code)
{
	mSecManagerReasonCode = code;
}

/**
 * @brief Convert the secclient DRM error code into secmanager error code to have a unified verbose error reported
 */
void DrmMetaDataEvent::ConvertToVerboseErrorCode(int32_t httpCode, int32_t httpExtStatusCode )
{
	mSecManagerClass = CONTENT_SECURITY_MANAGER_CLASS_RESULT_DRM_FAIL;
	mSecManagerReasonCode = CONTENT_SECURITY_MANAGER_REASON_DRM_GENERAL_FAILURE;
	//look for the correct code from the lookup
	if (getAsVerboseErrorCode(httpCode, mSecManagerClass, mSecManagerReasonCode)) 
	{
		if(412 == httpCode && 401 == httpExtStatusCode) 
		{
			mSecManagerReasonCode = CONTENT_SECURITY_MANAGER_REASON_DRM_ACCESS_TOKEN_EXPIRED;
		}
		if (mSecManagerClass == CONTENT_SECURITY_MANAGER_CLASS_RESULT_SECCLIENT_FAIL) {
			mSecManagerReasonCode = httpCode;
		}
		mBusinessStatus = httpExtStatusCode;
	}
}

/**
 * @brief Set the secmanager DRM error responses
 */
void DrmMetaDataEvent::SetVerboseErrorCode(int32_t statusCode,  int32_t reasonCode, int32_t businessStatus )
{
	mSecManagerClass = statusCode;
	mSecManagerReasonCode = reasonCode;
	mBusinessStatus = businessStatus;
}

/**
 * @brief Get secclient error status
 *
 * @return secclient error (true/false)
 */
bool DrmMetaDataEvent::getSecclientError() const
{
	return mSecclientError;
}

/**
 * @brief Set secclient error status
 */
void DrmMetaDataEvent::setSecclientError(bool secClientError)
{
	mSecclientError = secClientError;
}

/**
 * @brief Get header responses
 *
 * @return header response vector
 */
const std::vector<std::string> &DrmMetaDataEvent::getHeaderResponses() const
{
	return mHeaderResponses;
}

/**
 * @brief Set Header response from license request
 *
 * @param[in] vector of header response
 * @return void
 */
void DrmMetaDataEvent::setHeaderResponses(const std::vector<std::string> &responses)
{
	mHeaderResponses = responses;
}

/**
 * @brief Get Body response
 */
const std::string &DrmMetaDataEvent::getBodyResponse() const
{
	return mBodyResponses;
}

/**
 * @brief Set body response from license request
 */
void DrmMetaDataEvent::setBodyResponse(const std::string &responses)
{
	mBodyResponses = responses;
}

/**
 * @brief AnomalyReportEvent Constructor
 */
AnomalyReportEvent::AnomalyReportEvent(int severity, const std::string &msg, std::string sid):
		AAMPEventObject(AAMP_EVENT_REPORT_ANOMALY, std::move(sid)), mSeverity(severity), mMsg(msg)
{

}

/**
 * @brief Get Severity
 *
 * @return Severity value
 */
int AnomalyReportEvent::getSeverity() const
{
	return mSeverity;
}

/**
 * @brief Get Anomaly Message
 *
 * @return Anomaly message string
 */
const std::string &AnomalyReportEvent::getMessage() const
{
	return mMsg;
}

/**
 * @brief WebVttCueEvent Constructor
 */
WebVttCueEvent::WebVttCueEvent(VTTCue* cueData, std::string sid):
		AAMPEventObject(AAMP_EVENT_WEBVTT_CUE_DATA, std::move(sid)), mCueData(cueData)
{

}

/**
 * @brief Get VTT Cue Data
 *
 * @return Pointer to VTT cue data
 */
VTTCue* WebVttCueEvent::getCueData() const
{
	return mCueData;
}

/**
 * @brief AdResolvedEvent Constructor
 */
AdResolvedEvent::AdResolvedEvent(bool resolveStatus, const std::string &adId, uint64_t startMS, uint64_t durationMs, const std::string &errorCode, const std::string &errorDesc, std::string sid):
		AAMPEventObject(AAMP_EVENT_AD_RESOLVED, std::move(sid)), mResolveStatus(resolveStatus), mAdId(adId),
		mStartMS(startMS), mDurationMs(durationMs), mErrorCode(errorCode), mErrorDescription(errorDesc)
{

}

/**
 * @brief Get Resolve Status
 *
 * @return Ad resolve status
 */
bool AdResolvedEvent::getResolveStatus() const
{
	return mResolveStatus;
}

/**
 * @brief Get Ad Identifier
 *
 * @return Ad's identifier
 */
const std::string &AdResolvedEvent::getAdId() const
{
	return mAdId;
}

/**
 * @brief Get Start Position
 *
 * @return Start position (in MS), relative to Adbreak
 */
uint64_t AdResolvedEvent::getStart() const
{
	return mStartMS;
}

/**
 * @brief Get Duration
 *
 * @return Ad's duration in MS
 */
uint64_t AdResolvedEvent::getDuration() const
{
	return mDurationMs;
}

/**
 * @brief Get ErrorCode
 *
 * @return Error code
 */
const std::string &AdResolvedEvent::getErrorCode() const
{
	return mErrorCode;
}

/**
 * @brief Get Error Description
 *
 * @return Error description
 */
const std::string &AdResolvedEvent::getErrorDescription() const
{
	return mErrorDescription;
}

/**
 * @brief AdReservationEvent Constructor
 */
AdReservationEvent::AdReservationEvent(AAMPEventType evtType, const std::string &breakId, uint64_t position, uint64_t absolutePositionMs, std::string sid):
		AAMPEventObject(evtType, std::move(sid)), mAdBreakId(breakId), mPosition(position), mAbsolutePositionMs(absolutePositionMs)
{

}

/**
 * @brief Get Adbreak Identifier
 *
 * @return Adbreak's id
 */
const std::string &AdReservationEvent::getAdBreakId() const
{
	return mAdBreakId;
}

/**
 * @brief Get Ad's Position
 *
 * @return Ad's position (in channel's PTS)
 */
uint64_t AdReservationEvent::getPosition() const
{
	return mPosition;
}

/**
 * @brief Get Ad's Absolute position
 *
 * @return Ad's absolute position (in MS)
 */
uint64_t AdReservationEvent::getAbsolutePositionMs() const
{
	return mAbsolutePositionMs;
}

/**
 * @brief AdPlacementEvent Constructor
 */
AdPlacementEvent::AdPlacementEvent(AAMPEventType evtType, const std::string &adId, uint32_t position, uint64_t absolutePositionMs, std::string sid, uint32_t offset, uint32_t duration, int errorCode):
		AAMPEventObject(evtType, std::move(sid)), mAdId(adId), mPosition(position), mAbsolutePositionMs(absolutePositionMs),
		mOffset(offset), mDuration(duration), mErrorCode(errorCode)
{

}

/**
 * @brief Get Ad's Identifier
 *
 * @return Ad's id
 */
const std::string &AdPlacementEvent::getAdId() const
{
	return mAdId;
}

/**
 * @brief Get Ad's Position
 *
 * @return Ad's position (in channel's PTS)
 */
uint32_t AdPlacementEvent::getPosition() const
{
	return mPosition;
}

/**
 * @brief Get Ad's Absolute position
 *
 * @return Ad's absolute position (in MS)
 */
uint64_t AdPlacementEvent::getAbsolutePositionMs() const
{
	return mAbsolutePositionMs;
}

/**
 * @brief Get Ad's Offset
 *
 * @return Ad's start offset
 */
uint32_t AdPlacementEvent::getOffset() const
{
	return mOffset;
}

/**
 * @brief Get Ad's Duration
 *
 * @return Ad's duration in MS
 */
uint32_t AdPlacementEvent::getDuration() const
{
	return mDuration;
}

/**
 * @brief Get Error Code
 *
 * @return Error code
 */
int AdPlacementEvent::getErrorCode() const
{
	return mErrorCode;
}

/**
 * @brief MetricsDataEvent Constructor
 */
MetricsDataEvent::MetricsDataEvent(MetricsDataType dataType, const std::string &uuid, const std::string &data, std::string sid):
		AAMPEventObject(AAMP_EVENT_REPORT_METRICS_DATA, std::move(sid)), mMetricsDataType(dataType),
		mMetricUUID(uuid), mMetricsData(data)
{

}

/**
 * @brief Get Metrics Data Type
 *
 * @return Metrics data type
 */
MetricsDataType MetricsDataEvent::getMetricsDataType() const
{
	return mMetricsDataType;
}

/**
 * @brief Get Metric UUID
 *
 * @return Uuid string
 */
const std::string &MetricsDataEvent::getMetricUUID() const
{
	return mMetricUUID;
}

/**
 * @brief Get Metrics Data
 *
 * @return Metrics data string
 */
const std::string &MetricsDataEvent::getMetricsData() const
{
	return mMetricsData;
}

/**
 * @brief ID3MetadataEvent Constructor
 */
ID3MetadataEvent::ID3MetadataEvent(const std::vector<uint8_t> &metadata, const std::string &schIDUri, std::string &id3Value, uint32_t timeScale, uint64_t presentationTime, uint32_t eventDuration, uint32_t id, uint64_t timestampOffset, std::string sid):
		AAMPEventObject(AAMP_EVENT_ID3_METADATA, std::move(sid)), mMetadata(metadata), mId(id), mTimeScale(timeScale), mSchemeIdUri(schIDUri), mValue(id3Value), mEventDuration(eventDuration), mPresentationTime(presentationTime), mTimestampOffset(timestampOffset)
{

}

/**
 * @brief Get ID3 metadata
 *
 * @return ID3 metadata content
 */
const std::vector<uint8_t> &ID3MetadataEvent::getMetadata() const
{
	return mMetadata;
}

/**
 * @brief Get ID3 metadata size
 *
 * @return ID3 metadata size
 */
int ID3MetadataEvent::getMetadataSize() const
{
	return (int)mMetadata.size();
}

/**
 * @brief Get TimeScale value
 *
 * @return TimeScale value
 */
uint32_t ID3MetadataEvent::getTimeScale() const
{
	return mTimeScale;
}

/**
 * @brief Get eventDuration
 *
 * @return eventDuration value
 */
uint32_t ID3MetadataEvent::getEventDuration() const
{
	return mEventDuration;
}

/**
 * @brief Get id
 *
 * @return id value
 */
uint32_t ID3MetadataEvent::getId() const
{
	return mId;
}

/**
 * @brief Get presentationTime
 *
 * @return presentationTime value
 */
uint64_t ID3MetadataEvent::getPresentationTime() const
{
	return mPresentationTime;
}

/**
 * @brief Get timestampOffset
 *
 * @return timestampOffset value
 */
uint64_t ID3MetadataEvent::getTimestampOffset() const
{
        return mTimestampOffset;
}

/**
 * @brief Get schemeIdUri
 *
 * @return schemeIdUri value
 */
const std::string& ID3MetadataEvent::getSchemeIdUri() const
{
	return mSchemeIdUri;
}

/**
 * @brief Get value
 *
 * @return schemeIdUri value
 */
const std::string& ID3MetadataEvent::getValue() const
{
	return mValue;
}

/**
 * @brief DrmMessageEvent Constructor
 */
DrmMessageEvent::DrmMessageEvent(const std::string &msg, std::string sid):
		AAMPEventObject(AAMP_EVENT_DRM_MESSAGE, std::move(sid)), mMessage(msg)
{

}

/**
 * @brief Get DRM Message
 *
 * @return DRM message
 */
const std::string &DrmMessageEvent::getMessage() const
{
	return mMessage;
}

/**
 * @brief ContentGapEvent Constructor
 */
ContentGapEvent::ContentGapEvent(double time, double duration, std::string sid):
		AAMPEventObject(AAMP_EVENT_CONTENT_GAP, std::move(sid))
		, mTime(time), mDuration(duration)
{

}

/**
 * @brief Get Time
 *
 * @return Time of the ContentGap
 */
double ContentGapEvent::getTime() const
{
	return mTime;
}

/**
 * @brief Get Duration
 *
 * @return Duration (in MS) of the ContentGap
 */
double ContentGapEvent::getDuration() const
{
	return mDuration;
}

/**
 * @brief HTTPResponseHeaderEvent Constructor
 */
HTTPResponseHeaderEvent::HTTPResponseHeaderEvent(const std::string &header, const std::string &response, std::string sid):
		AAMPEventObject(AAMP_EVENT_HTTP_RESPONSE_HEADER, std::move(sid))
		, mHeaderName(header), mHeaderResponse(response)
{

}

/**
 * @brief Get HTTP Response Header Name
 *
 * @return HTTP Response Header name string
 */
const std::string &HTTPResponseHeaderEvent::getHeader() const
{
	return mHeaderName;
}

/**
 * @brief Get HTTP Response Header response
 *
 * @return HTTP Response Header response string
 */
const std::string &HTTPResponseHeaderEvent::getResponse() const
{
	return mHeaderResponse;
}

/*
 * @brief ContentProtectionDataEvent Constructor
 *
 * @param[in] keyID - Current Session KeyID
 * @param[in] streamType        - Current StreamType
 */
ContentProtectionDataEvent::ContentProtectionDataEvent(const std::vector<uint8_t> &keyID, const std::string &streamType, std::string sid):
	AAMPEventObject(AAMP_EVENT_CONTENT_PROTECTION_DATA_UPDATE, std::move(sid))
	, mKeyID(keyID), mStreamType(streamType)
{

}

/**
 * @brief Get Session KeyID
 *
 * @return keyID
 */
const std::vector<uint8_t> &ContentProtectionDataEvent::getKeyID() const
{
	return mKeyID;
}

/**
 * @brief Get StreamType
 *
 * @return streamType
 */
const std::string &ContentProtectionDataEvent::getStreamType() const
{
	return mStreamType;
}

/*
 * @brief ManifestRefreshEvent Constructor
 */
ManifestRefreshEvent::ManifestRefreshEvent(uint32_t manifestDuration,int noOfPeriods, uint32_t manifestPublishedTime, const std::string &manifestType, std::string sid):
	AAMPEventObject(AAMP_EVENT_MANIFEST_REFRESH_NOTIFY, std::move(sid))
	, mManifestDuration(manifestDuration), mNoOfPeriods(noOfPeriods), mManifestPublishedTime(manifestPublishedTime), mManifestType(manifestType)
{

}

/**
 * @brief Get ManifestFile Duration for Linear DASH
 *
 * @return ManifestFile Duration
 */
uint32_t ManifestRefreshEvent::getManifestDuration() const
{
   return mManifestDuration;
}

/**
 * @brief Get ManifestFile type for Linear DASH
 *
 * @return ManifestFile type
 */
const std::string& ManifestRefreshEvent::getManifestType() const
{
   return mManifestType;
}

/**
 * @brief Get No of Periods for Linear DASH
 *
 * @return NoOfPeriods
 */
uint32_t ManifestRefreshEvent::getNoOfPeriods() const
{
   return mNoOfPeriods;
}

/**
 * @brief Get ManifestPublishedTime for Linear DASH
 *
 * @return ManifestFile PublishedTime
 */
uint32_t ManifestRefreshEvent::getManifestPublishedTime() const
{
   return mManifestPublishedTime;
}

/**
 * @brief TuneTimeMetricsEvent Constructor
 */
TuneTimeMetricsEvent::TuneTimeMetricsEvent(const std::string &timeMetricData, std::string sid):
		AAMPEventObject(AAMP_EVENT_TUNE_TIME_METRICS, std::move(sid)), mTuneMetricsData(timeMetricData)
{

}

/**
 * @brief Get TuneTime data
 *
 * @return TimeMetric Data
 */
const std::string &TuneTimeMetricsEvent::getTuneMetricsData() const
{
	return mTuneMetricsData;
}

/**
 * @fn MonitorAVStatusEvent Constructor
 */
MonitorAVStatusEvent::MonitorAVStatusEvent(const std::string &state, int64_t videoPosMs, int64_t audioPosMs, uint64_t timeInStateMs, std::string sid, uint64_t droppedFrames):
		AAMPEventObject(AAMP_EVENT_MONITORAV_STATUS, std::move(sid)), mMonitorAVStatus(state), mVideoPositionMS(videoPosMs),
		mAudioPositionMS(audioPosMs), mTimeInStateMS(timeInStateMs), mDroppedFrames(droppedFrames)
{

}

/**
 * @brief getMonitorAVStatus
 *
 * @return MonitorAVStatus
 */
const std::string &MonitorAVStatusEvent::getMonitorAVStatus() const
{
	return mMonitorAVStatus;
}

/**
 * @brief getVideoPositionMS
 *
 * @return Video Position in MS
 */
int64_t MonitorAVStatusEvent::getVideoPositionMS() const
{
	return mVideoPositionMS;
}

/**
 * @brief getAudioPositionMS
 *
 * @return Audio Position in MS
 */
int64_t MonitorAVStatusEvent::getAudioPositionMS() const
{
	return mAudioPositionMS;
}

/**
 * @brief getTimeInStateMS
 *
 * @return Time in the current state in MS
 */
uint64_t MonitorAVStatusEvent::getTimeInStateMS() const
{
	return mTimeInStateMS;
}

/**
 * @brief getDroppedFrames
 *
 * @return Dropped Frames Count
 */
uint64_t MonitorAVStatusEvent::getDroppedFrames() const
{
	return mDroppedFrames;
}
