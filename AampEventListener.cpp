/*
 * If not stated otherwise in this file or this component's license file the
 * following copyright and licenses apply:
 *
 * Copyright 2020 RDK Management
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
 * @file AampEventListener.cpp
 * @brief Impl for AAMP Event listener classes.
 */

#include "AampEventListener.h"
#include <string.h>

/**
 * @brief API to convert AAMPEventPtr object to legacy AAMPEvent object.
 *
 * @param[in] e - AAMPEventPtr object
 * @param[out] event - AAMPEvent object to which values have to be populated
 */
static void GenerateLegacyAAMPEvent(const AAMPEventPtr &e, AAMPEvent &event)
{
	AAMPEventType type = e->getType();
	event.type = type;
	switch (type)
	{
		case AAMP_EVENT_TUNE_FAILED:
		{
			MediaErrorEventPtr ev = std::dynamic_pointer_cast<MediaErrorEvent>(e);
			event.data.mediaError.failure = ev->getFailure();
			event.data.mediaError.code = ev->getCode();
			event.data.mediaError.description = ev->getDescription().c_str();
			event.data.mediaError.shouldRetry = ev->shouldRetry();
			if(-1 != ev->getClass()) //Only send the verbose logging for DRM failure due to secclient/secmanager
			{
				event.data.mediaError.classCode = ev->getClass();
				event.data.mediaError.reasonCode = ev->getReason();
				event.data.mediaError.shouldRetry = ev->getBusinessStatus();
			}
			break;
		}
		case AAMP_EVENT_SPEED_CHANGED:
		{
			SpeedChangedEventPtr ev = std::dynamic_pointer_cast<SpeedChangedEvent>(e);
			event.data.speedChanged.rate = ev->getRate();
			break;
		}
		case AAMP_EVENT_PROGRESS:
		{
			ProgressEventPtr ev = std::dynamic_pointer_cast<ProgressEvent>(e);
			event.data.progress.durationMilliseconds = ev->getDuration();
			event.data.progress.positionMilliseconds = ev->getPosition();
			event.data.progress.playbackSpeed = ev->getSpeed();
			event.data.progress.startMilliseconds = ev->getStart();
			event.data.progress.endMilliseconds = ev->getEnd();
			event.data.progress.videoPTS = ev->getPTS();
			event.data.progress.videoBufferedMilliseconds = ev->getVideoBufferedDuration();
			event.data.progress.audioBufferedMilliseconds = ev->getAudioBufferedDuration();
			event.data.progress.timecode = ev->getSEITimeCode();
			event.data.progress.liveLatency = ev->getLiveLatency();
			event.data.progress.profileBandwidth = ev->getProfileBandwidth();
			event.data.progress.networkBandwidth = ev->getNetworkBandwidth();
			event.data.progress.currentPlayRate = ev->getCurrentPlayRate();
			
			// TBR! for backwards compatibility with rdk/components/generic/rdkmediaplayer/aamp/aampplayer.cpp
			event.data.progress.durationMiliseconds = event.data.progress.durationMilliseconds;
			event.data.progress.positionMiliseconds = event.data.progress.positionMilliseconds;
			event.data.progress.startMiliseconds = event.data.progress.startMilliseconds;
			event.data.progress.endMiliseconds = event.data.progress.endMilliseconds;
			event.data.progress.videoBufferedMiliseconds = event.data.progress.videoBufferedMilliseconds; // and AS
            break;
		}
		case AAMP_EVENT_CC_HANDLE_RECEIVED:
		{
			CCHandleEventPtr ev = std::dynamic_pointer_cast<CCHandleEvent>(e);
			event.data.ccHandle.handle = ev->getCCHandle();
			break;
		}
		case AAMP_EVENT_MEDIA_METADATA:
		{
			MediaMetadataEventPtr ev = std::dynamic_pointer_cast<MediaMetadataEvent>(e);
			event.data.metadata.durationMilliseconds = ev->getDuration();
			event.data.metadata.languageCount = ev->getLanguagesCount();
			event.data.metadata.bitrateCount = ev->getBitratesCount();
			event.data.metadata.supportedSpeedCount = ev->getSupportedSpeedCount();
			event.data.metadata.width = ev->getWidth();
			event.data.metadata.height = ev->getHeight();
			event.data.metadata.hasDrm = ev->hasDrm();
			event.data.metadata.programStartTime = ev->getProgramStartTime();
			event.data.metadata.tsbDepthMs = ev->getTsbDepth();

			std::vector<std::string> languages = ev->getLanguages();
			for (int i = 0; i < event.data.metadata.languageCount && i < MAX_LANGUAGE_COUNT; i++)
			{
				memset(event.data.metadata.languages[i], '\0', MAX_LANGUAGE_TAG_LENGTH);
				strncpy(event.data.metadata.languages[i], languages[i].c_str(), MAX_LANGUAGE_TAG_LENGTH - 1);
			}
			std::vector<BitsPerSecond> bitrates = ev->getBitrates();
			for(int i = 0; i < event.data.metadata.bitrateCount && i < MAX_BITRATE_COUNT; i++)
			{
				event.data.metadata.bitrates[i] = bitrates[i];
			}
			std::vector<float> speeds = ev->getSupportedSpeeds();
			for(int i = 0; i < event.data.metadata.supportedSpeedCount && i < MAX_SUPPORTED_SPEED_COUNT; i++)
			{
				event.data.metadata.supportedSpeeds[i] = speeds[i];
			}
			
			// TBR! for backwards compatibility with rdk/components/generic/rdkmediaplayer/aamp/aampplayer.cpp
			event.data.metadata.durationMiliseconds = event.data.metadata.durationMilliseconds;
			break;
		}
		case AAMP_EVENT_BITRATE_CHANGED:
		{
			BitrateChangeEventPtr ev = std::dynamic_pointer_cast<BitrateChangeEvent>(e);
			event.data.bitrateChanged.time = ev->getTime();
			event.data.bitrateChanged.bitrate= ev->getBitrate();
			event.data.bitrateChanged.description = ev->getDescription().c_str();
			event.data.bitrateChanged.width = ev->getWidth();
			event.data.bitrateChanged.height = ev->getHeight();
			event.data.bitrateChanged.framerate = ev->getFrameRate();
			event.data.bitrateChanged.position = ev->getPosition();
			event.data.bitrateChanged.cappedProfile = ev->getCappedProfileStatus();
			event.data.bitrateChanged.displayWidth = ev->getDisplayWidth();
			event.data.bitrateChanged.displayHeight = ev->getDisplayHeight();
			event.data.bitrateChanged.videoScanType = ev->getScanType();
			event.data.bitrateChanged.aspectRatioWidth = ev->getAspectRatioWidth();
			event.data.bitrateChanged.aspectRatioHeight = ev->getAspectRatioHeight();
			break;
		}
		case AAMP_EVENT_TIMED_METADATA:
		{
			TimedMetadataEventPtr ev = std::dynamic_pointer_cast<TimedMetadataEvent>(e);
			event.data.timedMetadata.szName = ev->getName().c_str();
			event.data.timedMetadata.id = ev->getId().c_str();
			event.data.timedMetadata.timeMilliseconds = ev->getTime();
			event.data.timedMetadata.durationMilliSeconds = ev->getDuration();
			event.data.timedMetadata.szContent = ev->getContent().c_str();
			break;
		}
		case AAMP_EVENT_BULK_TIMED_METADATA:
		{
			BulkTimedMetadataEventPtr ev = std::dynamic_pointer_cast<BulkTimedMetadataEvent>(e);
			event.data.bulkTimedMetadata.szMetaContent = ev->getContent().c_str();
			break;
		}
		case AAMP_EVENT_STATE_CHANGED:
		{
			StateChangedEventPtr ev = std::dynamic_pointer_cast<StateChangedEvent>(e);
			event.data.stateChanged.state = ev->getState();
			break;
		}
		case AAMP_EVENT_SPEEDS_CHANGED:
		{
			SupportedSpeedsChangedEventPtr ev = std::dynamic_pointer_cast<SupportedSpeedsChangedEvent>(e);
			event.data.speedsChanged.supportedSpeedCount = ev->getSupportedSpeedCount();
			std::vector<float> speeds = ev->getSupportedSpeeds();
			for(int i = 0; i < event.data.speedsChanged.supportedSpeedCount && i < MAX_SUPPORTED_SPEED_COUNT; i++)
			{
				event.data.speedsChanged.supportedSpeeds[i] = speeds[i];
			}
			break;
		}
		case AAMP_EVENT_SEEKED:
		{
			SeekedEventPtr ev = std::dynamic_pointer_cast<SeekedEvent>(e);
			event.data.seeked.positionMilliseconds = ev->getPosition();
			break;
		}
		case AAMP_EVENT_TUNE_PROFILING:
		{
			TuneProfilingEventPtr ev = std::dynamic_pointer_cast<TuneProfilingEvent>(e);
			event.data.tuneProfile.microData = ev->getProfilingData().c_str();
			break;
		}
		case AAMP_EVENT_BUFFERING_CHANGED:
		{
			BufferingChangedEventPtr ev = std::dynamic_pointer_cast<BufferingChangedEvent>(e);
			event.data.bufferingChanged.buffering = ev->buffering();
			break;
		}
		case AAMP_EVENT_DRM_METADATA:
		{
			DrmMetaDataEventPtr ev = std::dynamic_pointer_cast<DrmMetaDataEvent>(e);
			event.data.dash_drmmetadata.failure = ev->getFailure();
			event.data.dash_drmmetadata.accessStatus = ev->getAccessStatus().c_str();
			event.data.dash_drmmetadata.accessStatus_value = ev->getAccessStatusValue();
			event.data.dash_drmmetadata.responseCode = ev->getResponseCode();
			event.data.dash_drmmetadata.isSecClientError = ev->getSecclientError();
			break;
		}
		case AAMP_EVENT_REPORT_ANOMALY:
		{
			AnomalyReportEventPtr ev = std::dynamic_pointer_cast<AnomalyReportEvent>(e);
			event.data.anomalyReport.severity = ev->getSeverity();
			event.data.anomalyReport.msg = ev->getMessage().c_str();
			break;
		}
		case AAMP_EVENT_WEBVTT_CUE_DATA:
		{
			WebVttCueEventPtr ev = std::dynamic_pointer_cast<WebVttCueEvent>(e);
			event.data.cue.cueData = ev->getCueData();
			break;
		}
		case AAMP_EVENT_AD_RESOLVED:
		{
			AdResolvedEventPtr ev = std::dynamic_pointer_cast<AdResolvedEvent>(e);
			event.data.adResolved.resolveStatus = ev->getResolveStatus();
			event.data.adResolved.adId = ev->getAdId().c_str();
			event.data.adResolved.startMS = ev->getStart();
			event.data.adResolved.durationMs = ev->getDuration();
			event.data.adResolved.errorCode = ev->getErrorCode().c_str();
			event.data.adResolved.errorDescription = ev->getErrorDescription().c_str();
			break;
		}
		case AAMP_EVENT_AD_RESERVATION_START:
		case AAMP_EVENT_AD_RESERVATION_END:
		{
			AdReservationEventPtr ev = std::dynamic_pointer_cast<AdReservationEvent>(e);
			event.data.adReservation.adBreakId = ev->getAdBreakId().c_str();
			event.data.adReservation.position = ev->getPosition();
			break;
		}
		case AAMP_EVENT_AD_PLACEMENT_START:
		case AAMP_EVENT_AD_PLACEMENT_END:
		case AAMP_EVENT_AD_PLACEMENT_ERROR:
		case AAMP_EVENT_AD_PLACEMENT_PROGRESS:
		{
			AdPlacementEventPtr ev = std::dynamic_pointer_cast<AdPlacementEvent>(e);
			event.data.adPlacement.adId = ev->getAdId().c_str();
			event.data.adPlacement.position = ev->getPosition();
			event.data.adPlacement.offset = ev->getOffset();
			event.data.adPlacement.duration = ev->getDuration();
			event.data.adPlacement.errorCode = ev->getErrorCode();
			break;
		}
		case AAMP_EVENT_REPORT_METRICS_DATA:
		{
			MetricsDataEventPtr ev = std::dynamic_pointer_cast<MetricsDataEvent>(e);
			event.data.metricsData.type = ev->getMetricsDataType();
			event.data.metricsData.metricUUID = ev->getMetricUUID().c_str();
			event.data.metricsData.data = ev->getMetricsData().c_str();
			break;
		}
		case AAMP_EVENT_ID3_METADATA:
		{
			ID3MetadataEventPtr ev = std::dynamic_pointer_cast<ID3MetadataEvent>(e);
			// on devices using this event, ID3 metadata is copied before processing
			// to be deprecated after new event listener is adapted
			event.data.id3Metadata.data = const_cast<uint8_t *>(ev->getMetadata().data());
			event.data.id3Metadata.length = ev->getMetadataSize();
			break;
		}
		case AAMP_EVENT_DRM_MESSAGE:
		{
			DrmMessageEventPtr ev = std::dynamic_pointer_cast<DrmMessageEvent>(e);
			event.data.drmMessage.data = ev->getMessage().c_str();
			break;
		}
		case AAMP_EVENT_CONTENT_GAP:
		{
			ContentGapEventPtr ev = std::dynamic_pointer_cast<ContentGapEvent>(e);
			event.data.timedMetadata.timeMilliseconds = ev->getTime();
			event.data.timedMetadata.durationMilliSeconds = ev->getDuration();
			break;
		}
		case AAMP_EVENT_HTTP_RESPONSE_HEADER:
		{
			HTTPResponseHeaderEventPtr ev = std::dynamic_pointer_cast<HTTPResponseHeaderEvent>(e);
			event.data.httpResponseHeader.header = ev->getHeader().c_str();
			event.data.httpResponseHeader.response = ev->getResponse().c_str();
			break;
		}
		case AAMP_EVENT_CONTENT_PROTECTION_DATA_UPDATE:
		{
			ContentProtectionDataEventPtr ev = std::dynamic_pointer_cast<ContentProtectionDataEvent>(e);
			event.data.contentProtectionData.keyID = const_cast<uint8_t *>(ev->getKeyID().data());
			event.data.contentProtectionData.streamType = ev->getStreamType().c_str();
			break;
		}
		case AAMP_EVENT_MANIFEST_REFRESH_NOTIFY:
		{
			ManifestRefreshEventPtr ev = std::dynamic_pointer_cast<ManifestRefreshEvent>(e);
			event.data.manifestRefreshData.manifestDuration = ev->getManifestDuration();
			event.data.manifestRefreshData.noOfPeriods = ev->getNoOfPeriods();
			event.data.manifestRefreshData.manifestPublishedTime = ev->getManifestPublishedTime();
			event.data.manifestRefreshData.manifestType = ev->getManifestType().c_str();
			break;
		}
		case AAMP_EVENT_TUNE_TIME_METRICS:
		{
			TuneTimeMetricsEventPtr ev = std::dynamic_pointer_cast<TuneTimeMetricsEvent>(e);
			event.data.tuneMetricData.mTuneMetricData = ev->getTuneMetricsData().c_str();
			break;
		}
		case AAMP_EVENT_MONITORAV_STATUS:
		{
			MonitorAVStatusEventPtr ev = std::dynamic_pointer_cast<MonitorAVStatusEvent>(e);
			event.data.monitorAVStatus.mMonitorAVStatus = ev->getMonitorAVStatus().c_str();
			event.data.monitorAVStatus.mVideoPositionMS = ev->getVideoPositionMS();
			event.data.monitorAVStatus.mAudioPositionMS = ev->getAudioPositionMS();
			event.data.monitorAVStatus.mTimeInStateMS = ev->getTimeInStateMS();
			event.data.monitorAVStatus.mDroppedFrames = ev->getDroppedFrames();
		}
		default:
			// Some events without payload also falls here, for now
			// Hence skipping adding an assert to purposefully crash if mapping is not done to Legacy event
			break;
	}
}

/**
 * @brief API to send event to event listener
 *        Additional processing can be done here if required
 */
void AAMPEventListener::SendEvent(const AAMPEventPtr &event)
{
	AAMPEvent legacyEvent;
	// Convert to AAMPEvent for legacy event listeners
	GenerateLegacyAAMPEvent(event, legacyEvent);
	Event(legacyEvent);
}

/**
 * @brief API to send event.
 */
void AAMPEventObjectListener::SendEvent(const AAMPEventPtr &event)
{
	Event(event);
}
