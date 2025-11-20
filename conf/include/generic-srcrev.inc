# ==============================================================================
# SRCREV Migration Notice
# ==============================================================================
# The following SRCREV values have been migrated to individual recipe files:
#
# Migrated to meta-rdk (17 components):
#   - rdk-libunpriv, telemetry, dcmd, crashupload, remotedebugger
#   - memcapture, libsyswrapper, rfc, rdkversion, bluetooth-mgr, bluetooth-core
#   - dobby, xmidt-agent, rdmagent, rdkcertconfig
#   - systemtimemgrifc, systemtimemgrfactory, systemtimemgr
#
# Migrated to meta-rdk-video (48 components):
#   - rdkat, ctrlm-main, ctrlm-headers, xr-voice-sdk, xr-voice-sdk-headers
#   - hdmicec, audiocapturemgr, aamp, iarmbus, iarmmgrs, iarmmgrs-hal-headers
#   - rdk-gstreamer-utils, devicesettings, commonutilities
#   - iarm-query-powerstate, iarm-set-powerstate, iarm-event-sender
#   - key-simulator, mfr-utils, sysint, tr69hostif, tr69hostif-headers
#   - gst-plugins-rdk, wpeframework-ui, tts, packagemanager
#   - rdkshell, thunderstartupservices
#   - rialto-gstreamer, rialto, rialto-ocdm
#   - All 13 subttxrend components, dvbsubdecoder, ttxdecoder
#   - packager-lisa, entservices-infra, xdial, sceneset, packager-headers
#
# Related PRs:
#   - meta-rdk: https://github.com/rdkcentral/meta-rdk/pull/349
#   - meta-rdk-video: https://github.com/rdkcentral/meta-rdk-video/pull/2097
#   - Tracking issue: https://github.com/rdkcentral/meta-rdk/issues/350
# ==============================================================================

# Components not yet migrated (remain in this file)
SRCREV_rdk-apparmor-profiles = "0e9b3f4d100c23a99427891f6dcb417e77fe7b00"
SRCREV:pn-rmfosal = "ea4f0df1edd73cc2d45d453ad445cb2536799684"
SRCREV_rdkfw = "709c65295687bb998d12c2303d879e4f3f6cfbff"
SRCREV:pn-rdkperf = "d802d561c4a2a4456403d572da75e73032d48d91"
SRCREV:pn-hdmicecheader = "5201b2f759b4ca8fd2a6f5db838d528f6477db0c"
SRCREV:pn-memcr = "f46af4008d19cb527d5cede22bf0a3d0c7a8ed02"
SRCREV_starboard = "d23e2da63e840f04a1bfa5cf1f2a1e7b0c261102"
SRCREV:pn-rdkwindowmanager = "118bda43f9aff719f425b908bd52879b95df83de"
