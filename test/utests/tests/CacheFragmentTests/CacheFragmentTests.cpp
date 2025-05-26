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

#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "MediaStreamContext.h"
#include "fragmentcollector_mpd.h"
#include "AampMemoryUtils.h"
#include "AampCacheHandler.h"
#include "../priv_aamp.h"
#include "isobmff/isobmffbuffer.h"
#include "AampConfig.h"
#include "AampTSBSessionManager.h"
#include "MockAampConfig.h"
#include "StreamAbstractionAAMP.h"
#include "MockPrivateInstanceAAMP.h"
#include "MockStreamAbstractionAAMP_MPD.h"
#include "MockTSBSessionManager.h"

using ::testing::_;
using ::testing::NiceMock;;
using ::testing::Return;
using ::testing::StrictMock;
using ::testing::SetArgReferee;
using ::testing::AtLeast;

AampConfig *gpGlobalConfig{nullptr};
struct TestParams
{
	bool lowlatencyMode;               // true for low-latency mode, false for standard mode
	bool chunkMode;                    // true for chunk mode, false for standard mode
	bool aampTsb;                      // true if AAMP TSB is enabled, false otherwise
	bool eos;                          // true if simulating EOS, false otherwise
	bool pipelinePaused;               // true if pipeline is paused, false otherwise
	bool initFragment;                 // true if init fragment, false if media fragment
	int expectedFragmentChunksCached;  // expected number of fragments added to chunk cache
	int expectedFragmentCached;        // expected number of fragments added to regular cache
};

// Test cases
TestParams testCases[] =
{
	{true, true, false, false, false, false, 0, 0},    // Low-latency, chunk mode, AAMP TSB disabled, non-EOS, pipeline playing, media fragment
	{true, true, false, false, false, true, 1, 0},     // Low-latency, chunk mode, AAMP TSB disabled, non-EOS, pipeline playing, init fragment
	{true, false, false, false, false, true, 0, 1},    // Low-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline playing, init fragment
	{true, false, false, false, false, false, 0, 1},   // Low-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline playing, media fragment
	{false, false, false, false, false, true, 0, 1},   // Standard-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline playing, init fragment
	{false, false, false, false, false, false, 0, 1},  // Standard-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline playing, media fragment

	// Test with AAMP TSB enabled, chunk cache is used for non-chunked fragments
	{true, true, true, false, false, false, 0, 0},     // Low-latency, chunk mode, AAMP TSB, non-EOS, pipeline playing, media fragment
	{true, true, true, false, false, true, 1, 0},      // Low-latency, chunk mode, AAMP TSB, non-EOS, pipeline playing, init fragment
	{true, false, true, false, false, true, 1, 0},     // Low-latency, standard mode, AAMP TSB, non-EOS, pipeline playing, init fragment
	{true, false, true, false, false, false, 1, 0},    // Low-latency, standard mode, AAMP TSB, non-EOS, pipeline playing, media fragment
	{false, false, true, false, false, true, 1, 0},    // Standard-latency, standard mode, AAMP TSB, non-EOS, pipeline playing, init fragment
	{false, false, true, false, false, false, 1, 0},   // Standard-latency, standard mode, AAMP TSB, non-EOS, pipeline playing, media fragment

	// Test EOS with AAMP TSB enabled
	{true, true, true, true, false, false, 1, 0},      // Low-latency, chunk mode, AAMP TSB, EOS, pipeline playing, media fragment
	{true, true, true, true, false, true, 1, 0},       // Low-latency, chunk mode, AAMP TSB, EOS, pipeline playing, init fragment
	{true, false, true, true, false, true, 1, 0},      // Low-latency, standard mode, AAMP TSB, EOS, pipeline playing, init fragment
	{true, false, true, true, false, false, 1, 0},     // Low-latency, standard mode, AAMP TSB, EOS, pipeline playing, media fragment
	{false, false, true, true, false, true, 1, 0},     // Standard-latency, standard mode, AAMP TSB, EOS, pipeline playing, init fragment
	{false, false, true, true, false, false, 1, 0},    // Standard-latency, standard mode, AAMP TSB, EOS, pipeline playing, media fragment

	// Test with pipeline paused
	{true, true, false, false, true, false, 0, 0},    // Low-latency, chunk mode, AAMP TSB disabled, non-EOS, pipeline paused, media fragment
	{true, true, false, false, true, true, 1, 0},     // Low-latency, chunk mode, AAMP TSB disabled, non-EOS, pipeline paused, init fragment
	{true, false, false, false, true, true, 0, 1},    // Low-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline paused, init fragment
	{true, false, false, false, true, false, 0, 1},   // Low-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline paused, media fragment
	{false, false, false, false, true, true, 0, 1},   // Standard-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline paused, init fragment
	{false, false, false, false, true, false, 0, 1},  // Standard-latency, standard mode, AAMP TSB disabled, non-EOS, pipeline paused, media fragment

	// Test with AAMP TSB enabled and pipeline paused
	{true, true, true, false, true, false, 0, 0},     // Low-latency, chunk mode, AAMP TSB, non-EOS, pipeline paused, media fragment
	{true, true, true, false, true, true, 0, 0},      // Low-latency, chunk mode, AAMP TSB, non-EOS, pipeline paused, init fragment
	{true, false, true, false, true, true, 0, 0},     // Low-latency, standard mode, AAMP TSB, non-EOS, pipeline paused, init fragment
	{true, false, true, false, true, false, 0, 0},    // Low-latency, standard mode, AAMP TSB, non-EOS, pipeline paused, media fragment
	{false, false, true, false, true, true, 0, 0},    // Standard-latency, standard mode, AAMP TSB, non-EOS, pipeline paused, init fragment
	{false, false, true, false, true, false, 0, 0},   // Standard-latency, standard mode, AAMP TSB, non-EOS, pipeline paused, media fragment
};


class MediaStreamContextTest : public ::testing::TestWithParam<TestParams> 
{
	public:
		PrivateInstanceAAMP *mPrivateInstanceAAMP;
		StreamAbstractionAAMP_MPD *mStreamAbstractionAAMP_MPD;
		MediaStreamContext *mMediaStreamContext;
		AampTSBSessionManager *mTsbSessionManager;
		IPeriod *mPeriod;
		std::shared_ptr<AampTsbReader> mTsbReader;

	protected:
		using BoolConfigSettings = std::map<AAMPConfigSettingBool, bool>;
		using IntConfigSettings = std::map<AAMPConfigSettingInt, int>;

		/** @brief Boolean AAMP configuration settings. */
		const BoolConfigSettings mDefaultBoolConfigSettings =
		{
			{eAAMPConfig_EnableMediaProcessor, true},
			{eAAMPConfig_EnableCMCD, false},
			{eAAMPConfig_BulkTimedMetaReport, false},
			{eAAMPConfig_BulkTimedMetaReportLive, false},
			{eAAMPConfig_EnableSCTE35PresentationTime, false},
			{eAAMPConfig_EnableClientDai, false},
			{eAAMPConfig_MatchBaseUrl, false},
			{eAAMPConfig_UseAbsoluteTimeline, false},
			{eAAMPConfig_DisableAC4, true},
			{eAAMPConfig_LimitResolution, false},
			{eAAMPConfig_Disable4K, false},
			{eAAMPConfig_PersistHighNetworkBandwidth, false},
			{eAAMPConfig_PersistLowNetworkBandwidth, false},
			{eAAMPConfig_MidFragmentSeek, false},
			{eAAMPConfig_PropagateURIParam, true},
			{eAAMPConfig_DashParallelFragDownload, false},
			{eAAMPConfig_DisableATMOS, false},
			{eAAMPConfig_DisableEC3, false},
			{eAAMPConfig_DisableAC3, false},
			{eAAMPConfig_EnableLowLatencyDash, false},
			{eAAMPConfig_EnableIgnoreEosSmallFragment, false},
			{eAAMPConfig_EnablePTSReStamp, false},
			{eAAMPConfig_LocalTSBEnabled, false},
			{eAAMPConfig_EnableIFrameTrackExtract, false}
		};

		BoolConfigSettings mBoolConfigSettings;

		/** @brief Integer AAMP configuration settings. */
		const IntConfigSettings mDefaultIntConfigSettings =
		{
			{eAAMPConfig_ABRCacheLength, DEFAULT_ABR_CACHE_LENGTH},
			{eAAMPConfig_MaxABRNWBufferRampUp, AAMP_HIGH_BUFFER_BEFORE_RAMPUP},
			{eAAMPConfig_MinABRNWBufferRampDown, AAMP_LOW_BUFFER_BEFORE_RAMPDOWN},
			{eAAMPConfig_ABRNWConsistency, DEFAULT_ABR_NW_CONSISTENCY_CNT},
			{eAAMPConfig_RampDownLimit, -1},
			{eAAMPConfig_MaxFragmentCached, DEFAULT_CACHED_FRAGMENTS_PER_TRACK},
			{eAAMPConfig_PrePlayBufferCount, DEFAULT_PREBUFFER_COUNT},
			{eAAMPConfig_VODTrickPlayFPS, TRICKPLAY_VOD_PLAYBACK_FPS},
			{eAAMPConfig_ABRBufferCounter,DEFAULT_ABR_BUFFER_COUNTER},
			{eAAMPConfig_MaxFragmentChunkCached,DEFAULT_CACHED_FRAGMENT_CHUNKS_PER_TRACK}
		};

		IntConfigSettings mIntConfigSettings;
		void SetUp() override
		{
			mPeriod = nullptr;
			if (gpGlobalConfig == nullptr)
			{
				gpGlobalConfig = new AampConfig();
			}
			g_mockAampConfig = new MockAampConfig();
			mBoolConfigSettings = mDefaultBoolConfigSettings;
			mIntConfigSettings = mDefaultIntConfigSettings;
			for (const auto & b : mBoolConfigSettings)
			{
				EXPECT_CALL(*g_mockAampConfig, IsConfigSet(b.first))
					.Times(testing::AnyNumber())
					.WillRepeatedly(Return(b.second));
			}

			for (const auto & i : mIntConfigSettings)
			{
				EXPECT_CALL(*g_mockAampConfig, GetConfigValue(i.first))
					.Times(testing::AnyNumber())
					.WillRepeatedly(Return(i.second));
			}
			mPrivateInstanceAAMP = new PrivateInstanceAAMP(gpGlobalConfig);
			mStreamAbstractionAAMP_MPD = new StreamAbstractionAAMP_MPD(mPrivateInstanceAAMP, 123.45, 1);
			mTsbSessionManager = new AampTSBSessionManager(mPrivateInstanceAAMP);
			g_mockPrivateInstanceAAMP = new NiceMock<MockPrivateInstanceAAMP>();
			g_mockStreamAbstractionAAMP_MPD = new NiceMock<MockStreamAbstractionAAMP_MPD>(mPrivateInstanceAAMP, 0, 0);
			g_mockTSBSessionManager = new NiceMock<MockTSBSessionManager>(mPrivateInstanceAAMP);
			mTsbReader = std::make_shared<AampTsbReader>(mPrivateInstanceAAMP, nullptr, eMEDIATYPE_VIDEO, "sessionId");
		}

		void TearDown() override
		{
			delete g_mockTSBSessionManager;
			g_mockTSBSessionManager = nullptr;

			delete g_mockStreamAbstractionAAMP_MPD;
			g_mockStreamAbstractionAAMP_MPD = nullptr;

			if (mPeriod)
			{
				delete mPeriod;
				mPeriod = nullptr;
			}

			delete g_mockPrivateInstanceAAMP;
			g_mockPrivateInstanceAAMP = nullptr;

			delete mTsbSessionManager;
			mTsbSessionManager  =  nullptr;

			delete mMediaStreamContext;
			mMediaStreamContext = nullptr;

			delete mStreamAbstractionAAMP_MPD;
			mStreamAbstractionAAMP_MPD = nullptr;

			delete mPrivateInstanceAAMP;
			mPrivateInstanceAAMP = nullptr;

			delete g_mockAampConfig;
			g_mockAampConfig = nullptr;
		}

		// Create a set a dummy period due to the following parameter passed to EnqueueWrite(): context->GetPeriod()->GetId()
		void CreateAndSetDummyPeriod()
		{
			class DummyPeriod : public IPeriod
			{
			public:
				DummyPeriod() = default;
				virtual ~DummyPeriod() = default;

				// Implement all pure virtuals from IPeriod
				const std::string& GetId() const override { return mId; }
				const std::vector<IAdaptationSet*>& GetAdaptationSets() const override { return mAdaptationSets; }
				const std::string& GetStart() const override { return mStart; }
				const std::string& GetDuration() const override { return mDuration; }
				bool GetBitstreamSwitching() const override { return mBitstreamSwitching; }
				const std::vector<IBaseUrl *>& GetBaseURLs() const override { static std::vector<IBaseUrl *> vec; return vec; }
				ISegmentBase* GetSegmentBase() const override { return nullptr; }
				ISegmentList* GetSegmentList() const override { return nullptr; }
				ISegmentTemplate* GetSegmentTemplate() const override { return nullptr; }
				const std::vector<ISubset *>& GetSubsets() const override { static std::vector<ISubset *> vec; return vec; }
				const std::vector<IEventStream *>& GetEventStreams() const override { static std::vector<IEventStream *> vec; return vec; }
				const std::string& GetXlinkHref() const override { static std::string val; return val; }
				const std::vector<dash::xml::INode*> GetAdditionalSubNodes() const override { static std::vector<dash::xml::INode*> vec; return vec; }
				const std::string& GetXlinkActuate() const override { static std::string val; return val; }

				const std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> GetRawAttributes() const override
				{
					static std::map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> rawAttributes;
                    return rawAttributes;
                }

			private:
				std::string mId {"dummyPeriodId"};
				std::vector<IAdaptationSet*> mAdaptationSets;
				std::string mStart{"0.0"};
				std::string mDuration{"0.0"};
				bool mBitstreamSwitching{false};
			};
			mPeriod = new DummyPeriod();
		}

		void Initialize(bool lowlatencyMode, bool chunkMode, bool aampTsb, bool eos, bool pipelinePaused)
		{
			unsigned char data[] = {0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA};
			AampLLDashServiceData llDashData;
			llDashData.availabilityTimeOffset = 1.2;
			llDashData.lowLatencyMode = lowlatencyMode;
			mPrivateInstanceAAMP->rate = AAMP_NORMAL_PLAY_RATE;
			mPrivateInstanceAAMP->SetLLDashServiceData(llDashData);
			mPrivateInstanceAAMP->SetLocalAAMPTsb(aampTsb);
			mPrivateInstanceAAMP->pipeline_paused = pipelinePaused;
			mMediaStreamContext = new MediaStreamContext(eTRACK_VIDEO, mStreamAbstractionAAMP_MPD, mPrivateInstanceAAMP, "SAMPLETEXT");
			mMediaStreamContext->mTempFragment->AppendBytes(data, 12);
			// The tests simulating EOS inject from the TSB, the rest of the tests inject from live
			mMediaStreamContext->SetLocalTSBInjection(eos);
			mPrivateInstanceAAMP->SetLLDashChunkMode(chunkMode);
			AampTSBSessionManager *tsbSessionManager = nullptr;
			if (aampTsb)
			{
				tsbSessionManager = mTsbSessionManager;
				CreateAndSetDummyPeriod();
				EXPECT_CALL(*g_mockStreamAbstractionAAMP_MPD, GetPeriod()).WillOnce(Return(mPeriod));
			}
			if (eos)
			{
				mStreamAbstractionAAMP_MPD->mTuneType = eTUNETYPE_SEEKTOLIVE;
				EXPECT_CALL(*g_mockTSBSessionManager, GetTsbReader(_)).WillRepeatedly(Return(mTsbReader));
				mTsbReader->mEosReached = true;
			}
			EXPECT_CALL(*g_mockPrivateInstanceAAMP, GetTSBSessionManager()).WillOnce(Return(tsbSessionManager));
			EXPECT_CALL(*g_mockPrivateInstanceAAMP, GetFile(_, _, _, _, _, _, _, _, _, _, _, _, _, _)).WillOnce(Return(true));
		}
};

/**
 * @brief Tests the fragment caching behavior of MediaStreamContext.
 * This test verifies that the expected number of fragment chunks are cached and TotalFragmentFetched
 * based on the provided test parameters.
 */
TEST_P(MediaStreamContextTest, CacheFragment)
{
	TestParams testParam = GetParam();
	AAMPLOG_INFO("Test with lowlatencyMode: %d, chunkMode: %d, AAMP TSB: %d, eos: %d, pipelinePaused: %d, initFragment: %d, expectedFragmentChunksCached: %d, expectedFragmentCached: %d",
		testParam.lowlatencyMode,
		testParam.chunkMode,
		testParam.aampTsb,
		testParam.eos,
		testParam.pipelinePaused,
		testParam.initFragment,
		testParam.expectedFragmentChunksCached,
		testParam.expectedFragmentCached);
	Initialize(testParam.lowlatencyMode, testParam.chunkMode, testParam.aampTsb, testParam.eos, testParam.pipelinePaused);

	bool retResult = mMediaStreamContext->CacheFragment("remoteUrl", 0, 10, 0, NULL, testParam.initFragment, false, false, 0, 0, false);

	if (testParam.eos)
	{
		// Check that  TSB injection flag is cleared after EoS
		EXPECT_EQ(mMediaStreamContext->IsLocalTSBInjection(), false);
	}
	// Check expected results for fragment chunks cached and fragments cached
	EXPECT_EQ(mMediaStreamContext->numberOfFragmentChunksCached, testParam.expectedFragmentChunksCached);
	EXPECT_EQ(mMediaStreamContext->numberOfFragmentsCached, testParam.expectedFragmentCached);
}

INSTANTIATE_TEST_SUITE_P(
		MediaStreamContextTestSuite,
		MediaStreamContextTest,
		::testing::ValuesIn(testCases)
		);
