SUMMARY = "Packagegroup for middleware layer"
PACKAGE_ARCH = "${MIDDLEWARE_ARCH}"

LICENSE = "MIT"

inherit packagegroup volatile-bind-gen

# For interim development and package deployment to test should be using pre release tags
PV = "8.6.2.0"

# PRs are preferred to be incremented during development stages for any updates in corresponding
#  contributing component revision intakes.
# With release prior to release, PV gets reset to production semver and PR gets reset to r0
PR = "r0"

# Community is migrating to DAC2.0 based BOLT applications : base + runtime + app bundles
# 'enable_bolt_apps' is used to remove the runtimes in that case to reduce the rootfs size.

#Generic components
RDEPENDS:${PN} = " \
    audiocapturemgr \
    bluetooth-core \
    bluetooth-mgr \
    cimplog \
    cjwt \
    commonutilities \
    crashupload \
    ctrlm-headers \
    ctrlm-main \
    dcmd \
    devicesettings \
    dobby \
    dobby-thunderplugin \
    ermgr \
    evtest \
    gst-plugins-rdk \
    gst-init-service \
    rdk-gstreamer-utils \
    hdmicec \
    rdk-halif-aidl \
    iarm-event-sender \
    iarm-set-powerstate \
    iarm-query-powerstate \
    iarmbus \
    iarmmgrs \
    key-simulator \
    power-state-monitor \
    libparodus \
    libsyswrapper \
    libunpriv \
    logrotate \
    lsof \
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKTV_APP_HIBERNATE', "memcr ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'memcapture', 'memcapture', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'rdm', 'meminsight', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_processmonitor_support', 'processmonitor', '', d)} \
    remotedebugger \
    networkmanager-plugin \
    packagemanager \
    parodus \
    ${@bb.utils.contains('DISTRO_FEATURES', 'build_external_player_interface', "player-interface", "", d)} \
    rbus \
    rdk-logger \
    rdkat \
    rdkfwupgrader \
    rdkperf \
    entservices-xcast \
    entservices-miracast \
    entservices-connectivity \
    entservices-infra \
    entservices-resourcemanager \
    entservices-rdkappmanagers \
    entservices-appgateway \
    entservices-avinput \
    entservices-avoutput \
    entservices-mediaanddrm \
    entservices-peripherals \
    entservices-runtime \
    entservices-maintenancemanager \
    entservices-firmwaredownload \
    entservices-firmwareupdate \
    entservices-ledcontrol \
    entservices-frontpanel \
    entservices-remotecontrol \
    entservices-voicecontrol \
    entservices-usersettings \
    entservices-usbmassstorage \
    entservices-usbdevice \
    entservices-telemetry \
    entservices-sharedstorage \
    entservices-persistentstore \
    entservices-helpers \
    entservices-ocicontainer \
    entservices-monitor \
    entservices-migration \
    entservices-messagecontrol \
    ${@bb.utils.contains_any('DISTRO_FEATURES','RDKE_REGION_UK RDKE_REGION_IT RDKE_REGION_DE RDKE_REGION_AU RDKE_REGION_US', 'entservices-cloudstore', '', d)} \
    entservices-systemservices \
    entservices-deviceinfo \
    entservices-displayinfo \
    entservices-displaysettings \
    entservices-devicediagnostics \
    entservices-framerate \
    entservices-powermanager \
    entservices-systemmode \
    entservices-userpreferences \
    entservices-warehouse \
    entservices-cryptography \
    entservices-opencdmi \
    entservices-playerinfo \
    entservices-screencapture \
    entservices-account \
    entservices-backupmanager \
    entservices-hdcpprofile \
    entservices-hdmicecsource \
    entservices-hdmicecsink \
    rdksysctl \
    rdkversion \
    rdmagent \
    reboot-manager \
    rfc \
    rtcore \
    rtremote \
    safec-common-wrapper \
    sysint \
    systimemgr \
    telemetry \
    thunderjs \
    tr69hostif \
    tr69hostif-conf \
    tr69hostif-headers \
    tts \
    ucresolv \
    webconfig-framework\
    wdmp-c \
    wpeframework \
    wpeframework-clientlibraries \
    entservices-apis \
    wpeframework-ui \
    wrp-c \
    xdial \
    xr-voice-sdk \
    bluez5 \
    lcms \
    libunwind \
    wayland \
    lighttpd \
    openssl \
    wpa-supplicant \
    dnsmasq \
    dropbear \
    libopus \
    mdns \
    mtd-utils \
    nopoll \
    trower-base64 \
    mfr-utils \
    webcfg \
    systimemgrfactory \
    systimemgrinetrface \
    thunderstartupservices \
    ${@bb.utils.contains('DISTRO_FEATURES', 'wpe_r4_4', 'packagemanager', '', d)} \
    breakpad-wrapper \
    ctemplate \
    ebtables \
    fribidi \
    gdbm \
    gdk-pixbuf \
    gupnp \
    iptables \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_rdkappmanagers_runtimeconfig', 'yaml-cpp', '', d)} \
    iw \
    wireless-tools \
    libcroco \
    libevdev \
    rdkcertconfig \
    libflac \
    libgudev \
    libinput \
    liboauth \
    libunwind \
    libusb1 \
    libvorbis \
    lzo \
    mtd-utils-ubifs \
    mpg123 \
    mtdev \
    speex \
    stunnel \
    taglib \
    tzdata \
    util-linux \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_gdb_support', "gdb ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_tracecmd_support', "trace-cmd ", "", d)} \
    jquery \
    ndisc6-rdnssd \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_heaptrack', " heaptrack ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'ENABLE_NETWORKMANAGER', 'networkmanager', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'leak_sanitizer', "leakcheck-msgq ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'apparmor', "apparmor ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'apparmor', "apparmor-generic ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_rialto','rialto-client rialto-server rialto-servermanager rialto-gstreamer rialto-ocdm', '', d) } \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_cobalt_plugin', 'cobalt-plugin', '', d) } \
    rdkwpasupplicantconfig \
    cpeabs \
    virtual/ca-certificates-trust-store \
    xmidt-agent \
    bootversion-loader \
    virtual/default-font \
    ${@bb.utils.contains('DISTRO_FEATURES', 'rdkwindowmanager', " rdkwindowmanager ", "", d)} \
    os-release \
    wlan-p2p \
    thunder-plugin-activator \
    sqlite3 \
    chrony \
    ${@bb.utils.contains('DISTRO_FEATURES', 'sceneset', " sceneset ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_bolt_apps', '', 'aamp rdknativescript', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_bolt_apps', '', 'wpe-webkit libwpe webkitbrowser-plugin', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_bolt_apps', '', 'wpe-backend-rdk wpe-webkit-web-inspector-plugin', d)} \
    "

DEPENDS += " cjson crun jsonrpc libarchive libdash libevent gssdp harfbuzz hiredis \
             jpeg linenoise nanomsg ne10 nopoll libopus libpam  \
             libpcre libseccomp  libsoup-2.4 trower-base64 libxkbcommon \
             log4c mbedtls rdkperf cjwt nghttp2 ucresolv fcgi glib-openssl libol \
             graphite2 curl openssl zlib glib-networking glib-2.0 \
             lighttpd systemd sqlite3 \
             "
