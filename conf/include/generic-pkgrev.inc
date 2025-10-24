PV:pn-apparmor-generic="1.1.0"
PR:pn-apparmor-generic = "r0"
PACKAGE_ARCH:pn-apparmor-generic = "${MIDDLEWARE_ARCH}"

PV:pn-devicesettings = "1.0.22"
PR:pn-devicesettings = "r0"
PACKAGE_ARCH:pn-devicesettings = "${MIDDLEWARE_ARCH}"

PV:pn-cpeabs = "2.0.0"
PR:pn-cpeabs = "r0"
PACKAGE_ARCH:pn-cpeabs = "${MIDDLEWARE_ARCH}"

PV:pn-hdmicec = "1.0.7"
PR:pn-hdmicec = "r0"
PACKAGE_ARCH:pn-hdmicec = "${MIDDLEWARE_ARCH}"

PV:pn-iarmbus = "1.0.2"
PR:pn-iarmbus = "r0"
PACKAGE_ARCH:pn-iarmbus = "${MIDDLEWARE_ARCH}"

PV:pn-iarmmgrs = "1.1.3"
PR:pn-iarmmgrs = "r0"
PACKAGE_ARCH:pn-iarmmgrs = "${MIDDLEWARE_ARCH}"

PV:pn-rtcore = "1.0.1"
PR:pn-rtcore = "r2"
PACKAGE_ARCH:pn-rtcore = "${MIDDLEWARE_ARCH}"

PV:pn-rdknativescript = "1.0.8"
PR:pn-rdknativescript = "r0"
PACKAGE_ARCH:pn-rdknativescript = "${MIDDLEWARE_ARCH}"

PV:pn-rmfosal = "1.0.0"
PR:pn-rmfosal = "r3"
PACKAGE_ARCH:pn-rmfosal = "${MIDDLEWARE_ARCH}"

PV:pn-rbus = "2.9.0"
PR:pn-rbus = "r0"
PACKAGE_ARCH:pn-rbus = "${MIDDLEWARE_ARCH}"

PV:pn-rfc = "1.1.7"
PR:pn-rfc = "r0"
PACKAGE_ARCH:pn-rfc = "${MIDDLEWARE_ARCH}"

PV:pn-tr69hostif = "1.2.7"
PR:pn-tr69hostif = "r0"
PACKAGE_ARCH:pn-tr69hostif = "${MIDDLEWARE_ARCH}"

PV:pn-rtremote = "2.0.0"
PR:pn-rtremote = "r3"
PACKAGE_ARCH:pn-rtremote = "${MIDDLEWARE_ARCH}"

PV:pn-telemetry = "1.6.4"
PR:pn-telemetry = "r0"
PACKAGE_ARCH:pn-telemetry = "${MIDDLEWARE_ARCH}"

PV:pn-webcfg = "1.1.0"
PR:pn-webcfg = "r0"
PACKAGE_ARCH:pn-webcfg = "${MIDDLEWARE_ARCH}"

PV:pn-dcmd = "1.2.0"
PR:pn-dcmd = "r0"
PACKAGE_ARCH:pn-dcmd = "${MIDDLEWARE_ARCH}"

PV:pn-tr69hostif-headers = "1.2.6"
PR:pn-tr69hostif-headers = "r0"
PACKAGE_ARCH:pn-tr69hostif-headers = "${MIDDLEWARE_ARCH}"

PV:pn-dobby = "3.15.0"
PR:pn-dobby = "r0"
PACKAGE_ARCH:pn-dobby = "${MIDDLEWARE_ARCH}"

PV:pn-dobby-thunderplugin = "3.14.1"
PR:pn-dobby-thunderplugin = "r0"
PACKAGE_ARCH:pn-dobby-thunderplugin = "${MIDDLEWARE_ARCH}"

PV:pn-qtwayland = "5.15.7"
PR:pn-qtwayland = "r1"
PACKAGE_ARCH:pn-qtwayland = "${MIDDLEWARE_ARCH}"

PV:pn-aamp = "2.9.2"
PR:pn-aamp = "r0"
PACKAGE_ARCH:pn-aamp = "${MIDDLEWARE_ARCH}"

PV:pn-audiocapturemgr = "1.0.0"
PR:pn-audiocapturemgr = "r0"
PACKAGE_ARCH:pn-audiocapturemgr = "${MIDDLEWARE_ARCH}"

PV:pn-bluetooth-core = "1.0.2"
PR:pn-bluetooth-core = "r2"
PACKAGE_ARCH:pn-bluetooth-core = "${MIDDLEWARE_ARCH}"

PV:pn-bluetooth-mgr = "1.0.3"
PR:pn-bluetooth-mgr = "r2"
PACKAGE_ARCH:pn-bluetooth-mgr = "${MIDDLEWARE_ARCH}"

PV:pn-commonutilities = "1.4.3"
PR:pn-commonutilities = "r0"
PACKAGE_ARCH:pn-commonutilities = "${MIDDLEWARE_ARCH}"

PV:pn-rdkfwupgrader = "1.3.1"
PR:pn-rdkfwupgrader = "r0"
PACKAGE_ARCH:pn-rdkfwupgrader = "${MIDDLEWARE_ARCH}"

# All of these iarm-query-powerstate, iarm-set-powerstate, iarm-event-sender,
# key-simulator and mfr-utils use sys_mon_tools repo.
PV:pn-iarm-query-powerstate = "1.0.7"
PR:pn-iarm-query-powerstate = "r0"
PACKAGE_ARCH:pn-iarm-query-powerstate = "${MIDDLEWARE_ARCH}"

PV:pn-iarm-set-powerstate = "${PV:pn-iarm-query-powerstate}"
PR:pn-iarm-set-powerstate = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-iarm-set-powerstate = "${MIDDLEWARE_ARCH}"

PV:pn-iarm-event-sender = "${PV:pn-iarm-query-powerstate}"
PR:pn-iarm-event-sender = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-iarm-event-sender = "${MIDDLEWARE_ARCH}"

PV:pn-key-simulator = "${PV:pn-iarm-query-powerstate}"
PR:pn-key-simulator = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-key-simulator = "${MIDDLEWARE_ARCH}"

PV:pn-mfr-utils = "${PV:pn-iarm-query-powerstate}"
PR:pn-mfr-utils = "${PR:pn-iarm-query-powerstate}"
PACKAGE_ARCH:pn-mfr-utils = "${MIDDLEWARE_ARCH}"

PV:pn-jquery = "1.0.0"
PR:pn-jquery = "r2"
PACKAGE_ARCH:pn-jquery = "${MIDDLEWARE_ARCH}"

PV:pn-librsvg = "2.40.21"
PR:pn-librsvg = "r0"
PACKAGE_ARCH:pn-librsvg = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-casting = "1.2.7"
PR:pn-entservices-casting = "r0"
PACKAGE_ARCH:pn-entservices-casting = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-connectivity = "1.1.0"
PR:pn-entservices-connectivity = "r0"
PACKAGE_ARCH:pn-entservices-connectivity = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-deviceanddisplay = "3.2.9"
PR:pn-entservices-deviceanddisplay = "r0"
PACKAGE_ARCH:pn-entservices-deviceanddisplay = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-infra = "3.0.0"
PR:pn-entservices-infra = "r0"
PACKAGE_ARCH:pn-entservices-infra = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-inputoutput = "1.4.9"
PR:pn-entservices-inputoutput = "r0"
PACKAGE_ARCH:pn-entservices-inputoutput = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-mediaanddrm = "1.3.6"
PR:pn-entservices-mediaanddrm = "r0"
PACKAGE_ARCH:pn-entservices-mediaanddrm = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-peripherals = "1.0.17"
PR:pn-entservices-peripherals = "r0"
PACKAGE_ARCH:pn-entservices-peripherals = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-runtime = "1.0.1"
PR:pn-entservices-runtime = "r0"
PACKAGE_ARCH:pn-entservices-runtime = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-softwareupdate = "1.5.0"
PR:pn-entservices-softwareupdate = "r0"
PACKAGE_ARCH:pn-entservices-softwareupdate = "${MIDDLEWARE_ARCH}"

PV:pn-rdkshell = "1.0.0"
PR:pn-rdkshell = "r0"
PACKAGE_ARCH:pn-rdkshell = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-stunnel = "${MIDDLEWARE_ARCH}"

PV:pn-systimemgrfactory = "1.3.0"
PR:pn-systimemgrfactory = "r0"
PACKAGE_ARCH:pn-systimemgrfactory = "${MIDDLEWARE_ARCH}"

PV:pn-systimemgr = "1.3.0"
PR:pn-systimemgr = "r0"
PACKAGE_ARCH:pn-systimemgr = "${MIDDLEWARE_ARCH}"

PV:pn-systimemgrinetrface = "1.3.0"
PR:pn-systimemgrinetrface = "r0"
PACKAGE_ARCH:pn-systimemgrinetrface = "${MIDDLEWARE_ARCH}"

PV:pn-ctrlm-main = "1.1.4"
PR:pn-ctrlm-main = "r0"
PACKAGE_ARCH:pn-ctrlm-main = "${MIDDLEWARE_ARCH}"

PV:pn-xr-voice-sdk = "1.0.6"
PR:pn-xr-voice-sdk = "r0"
PACKAGE_ARCH:pn-xr-voice-sdk = "${MIDDLEWARE_ARCH}"

PV:pn-rdkat = "1.0.0"
PR:pn-rdkat = "r0"
PACKAGE_ARCH:pn-rdkat = "${MIDDLEWARE_ARCH}"

PV:pn-rdkversion = "1.0.0"
PR:pn-rdkversion = "r0"
PACKAGE_ARCH:pn-rdkversion = "${MIDDLEWARE_ARCH}"

PV:pn-crashupload = "1.0.7"
PR:pn-crashupload = "r0"
PACKAGE_ARCH:pn-crashupload = "${MIDDLEWARE_ARCH}"

PV:pn-libsyswrapper = "1.3.3"
PR:pn-libsyswrapper = "r1"
PACKAGE_ARCH:pn-libsyswrapper = "${MIDDLEWARE_ARCH}"

PV_pn-rdk-logger = "2.3.0"
PR_pn-rdk-logger = "r1"
PACKAGE_ARCH_pn-rdk-logger = "${MIDDLEWARE_ARCH}"

PV:pn-remotedebugger = "1.2.9"
PR:pn-remotedebugger = "r0"
PACKAGE_ARCH:pn-remotedebugger = "${MIDDLEWARE_ARCH}"

PV:pn-webkitbrowser-plugin = "1.1.30"
PR:pn-webkitbrowser-plugin = "r0"
PACKAGE_ARCH:pn-webkitbrowser-plugin = "${MIDDLEWARE_ARCH}"

PV:pn-firebolt-ripple = "${RIPPLE_RELEASE_VER}"
PR:pn-firebolt-ripple = "r1"
PACKAGE_ARCH:pn-firebolt-ripple = "${MIDDLEWARE_ARCH}"

PV:pn-ripple = "${RIPPLE_VERSION}"
PR:pn-ripple = "r0"
PACKAGE_ARCH:pn-ripple = "${MIDDLEWARE_ARCH}"

PV:pn-gst-plugins-rdk = "1.0.0"
PR:pn-gst-plugins-rdk = "r0"
PACKAGE_ARCH:pn-gst-plugins-rdk = "${MIDDLEWARE_ARCH}"

PV:pn-rdk-gstreamer-utils = "2.0.2"
PACKAGE_ARCH:pn-rdk-gstreamer-utils = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-libflac = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-wpeframework = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-apis = "2.0.0"
PR:pn-entservices-apis = "r0"
PACKAGE_ARCH:pn-entservices-apis = "${MIDDLEWARE_ARCH}"

PV:pn-entservices-lisa = "1.0.0"
PR:pn-entservices-lisa = "r0"
PACKAGE_ARCH:pn-entservices-lisa = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-wpeframework-clientlibraries = "${MIDDLEWARE_ARCH}"

PV:pn-libunpriv="1.0.2"
PR:pn-libunpriv= "r0"
PACKAGE_ARCH:pn-libunpriv = "${MIDDLEWARE_ARCH}"


PV:pn-sqlite3see = "1.0.0"
PR:pn-sqlite3see = "r0"
PACKAGE_ARCH:pn-sqlite3see = "${MIDDLEWARE_ARCH}"

PV_pn-webconfig-framework = "1.0.0"
PR_pn-webconfig-framework = "r0"
PACKAGE_ARCH_pn-webconfig-framework = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-rdksysctl = "${MIDDLEWARE_ARCH}"

PV:pn-xdial = "1.0.0"
PR:pn-xdial = "r0"
PACKAGE_ARCH:pn-xdial = "${MIDDLEWARE_ARCH}"

PV:pn-sysint = "3.0.7"
PR:pn-sysint = "r0"
PACKAGE_ARCH:pn-sysint = "${MIDDLEWARE_ARCH}"

PR:pn-bluez5 = "r5"
PACKAGE_ARCH:pn-bluez5 = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-dropbear = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-mpg123 = "${MIDDLEWARE_ARCH}"

PR:pn-libwpe = "r0"
PACKAGE_ARCH:pn-libwpe = "${MIDDLEWARE_ARCH}"

PV:pn-memcr = "1.0.2"
PR:pn-memcr = "r0"
PACKAGE_ARCH:pn-memcr = "${MIDDLEWARE_ARCH}"

PV:pn-networkmanager-plugin = "1.4.0"
PR:pn-networkmanager-plugin = "r0"
PACKAGE_ARCH:pn-networkmanager-plugin = "${MIDDLEWARE_ARCH}"

PV:pn-thunder-hang-recovery = "1.0.0"
PR:pn-thunder-hang-recovery = "r0"
PACKAGE_ARCH:pn-thunder-hang-recovery = "${MIDDLEWARE_ARCH}"

PV:pn-wpeframework-ui = "1.0.0"
PR:pn-wpeframework-ui = "r0"
PACKAGE_ARCH:pn-wpeframework-ui = "${MIDDLEWARE_ARCH}"

PV:pn-packagemanager = "4.4.1"
PR:pn-packagemanager = "r0"
PACKAGE_ARCH:pn-packagemanager = "${MIDDLEWARE_ARCH}"

PV:pn-thunderstartupservices = "1.0.23"
PR:pn-thunderstartupservices = "r0"
PACKAGE_ARCH:pn-thunderstartupservices = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-uwebsockets = "${MIDDLEWARE_ARCH}"
PACKAGE_ARCH:pn-javascriptcore = "${MIDDLEWARE_ARCH}"

###

PR:pn-alsa-plugins = "r0"
PACKAGE_ARCH:pn-alsa-plugins =  "${MIDDLEWARE_ARCH}"

PR:pn-pulseaudio = "r0"
PACKAGE_ARCH:pn-pulseaudio =  "${MIDDLEWARE_ARCH}"

PV:pn-tts = "1.0.4"
PR:pn-tts = "r0"
PACKAGE_ARCH:pn-tts = "${MIDDLEWARE_ARCH}"

PV:pn-rdkwpasupplicantconfig = "1.0.0"
PR:pn-rdkwpasupplicantconfig = "r0"
PACKAGE_ARCH:pn-rdkwpasupplicantconfig = "${MIDDLEWARE_ARCH}"

PV:pn-rialto = "0.14.0"
PR:pn-rialto = "r0"
PACKAGE_ARCH:pn-rialto = "${MIDDLEWARE_ARCH}"

PV:pn-rialto-gstreamer = "0.13.0"
PR:pn-rialto-gstreamer = "r0"
PACKAGE_ARCH:pn-rialto-gstreamer = "${MIDDLEWARE_ARCH}"

PV:pn-rialto-ocdm = "0.9.1"
PR:pn-rialto-ocdm = "r0"
PACKAGE_ARCH:pn-rialto-ocdm = "${MIDDLEWARE_ARCH}"

PV:pn-xmidt-agent = "1.0.0"
PR:pn-xmidt-agent = "r0"
PACKAGE_ARCH:pn-xmidt-agent = "${MIDDLEWARE_ARCH}"

PV:pn-rdmagent = "2.1.1"
PR:pn-rdmagent = "r0"
PACKAGE_ARCH:pn-rdmagent = "${MIDDLEWARE_ARCH}"

PV:pn-rdkwindowmanager = "1.8.0"
PR:pn-rdkwindowmanager = "r0"
PACKAGE_ARCH:pn-rdkwindowmanager = "${MIDDLEWARE_ARCH}"

PV:pn-os-release = "1.0.0"
PR:pn-os-release = "r0"
PACKAGE_ARCH:pn-os-release = "${MIDDLEWARE_ARCH}"

PV:pn-wlan-p2p = "1.0.1"
PR:pn-wlan-p2p = "r0"
PACKAGE_ARCH:pn-wlan-p2p = "${MIDDLEWARE_ARCH}"

# Workaround to build allarch packags as mw arch
MULTILIB_VARIANTS:pn-os-release = " multilib "
PACKAGE_ARCH:pn-os-release = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-app = "1.4.0"
PR:pn-subttxrend-app = "r0"
PACKAGE_ARCH:pn-subttxrend-app = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-dbus = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-dbus = "r0"
PACKAGE_ARCH:pn-subttxrend-dbus = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-dvbsub = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-dvbsub = "r0"
PACKAGE_ARCH:pn-subttxrend-dvbsub = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-cc = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-cc = "r0"
PACKAGE_ARCH:pn-subttxrend-cc = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-ctrl = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-ctrl = "r0"
PACKAGE_ARCH:pn-subttxrend-ctrl = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-common = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-common = "r0"
PACKAGE_ARCH:pn-subttxrend-common = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-gfx = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-gfx = "r0"
PACKAGE_ARCH:pn-subttxrend-gfx = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-protocol = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-protocol = "r0"
PACKAGE_ARCH:pn-subttxrend-protocol = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-socksrc = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-socksrc = "r0"
PACKAGE_ARCH:pn-subttxrend-socksrc = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-ttml = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-ttml = "r0"
PACKAGE_ARCH:pn-subttxrend-ttml = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-ttxt = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-ttxt = "r0"
PACKAGE_ARCH:pn-subttxrend-ttxt = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-scte = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-scte = "r0"
PACKAGE_ARCH:pn-subttxrend-scte = "${MIDDLEWARE_ARCH}"

PV:pn-subttxrend-webvtt = "${PV:pn-subttxrend-app}"
PR:pn-subttxrend-webvtt = "r0"
PACKAGE_ARCH:pn-subttxrend-webvtt = "${MIDDLEWARE_ARCH}"

PV:pn-dvbsubdecoder = "${PV:pn-subttxrend-app}"
PR:pn-dvbsubdecoder = "r0"
PACKAGE_ARCH:pn-dvbsubdecoder = "${MIDDLEWARE_ARCH}"

PV:pn-ttxdecoder = "${PV:pn-subttxrend-app}"
PR:pn-ttxdecoder = "r0"
PACKAGE_ARCH:pn-ttxdecoder = "${MIDDLEWARE_ARCH}"

PV:pn-lsof = "4.94.0"
PR:pn-lsof = "r0"
PACKAGE_ARCH:pn-lsof = "${MIDDLEWARE_ARCH}"

PV:pn-rdkcertconfig = "1.0.1"
PR:pn-rdkcertconfig = "r0"
PACKAGE_ARCH:rdkcertconfig = "${MIDDLEWARE_ARCH}"

PV:pn-packager-lisa = "1.0.0"
PR:pn-packager-lisa = "r0"
PACKAGE_ARCH:pn-packager-lisa = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-gdb = "${MIDDLEWARE_ARCH}"

PV:pn-sceneset = "1.0.0"
PR:pn-sceneset = "r0"
PACKAGE_ARCH:pn-sceneset = "${MIDDLEWARE_ARCH}"

PV:pn-packager-headers = "1.0.0"
PR:pn-packager-headers = "r0"
PACKAGE_ARCH:pn-packager-headers = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-packagegroup-youtube-widgets = "${MIDDLEWARE_ARCH}"

