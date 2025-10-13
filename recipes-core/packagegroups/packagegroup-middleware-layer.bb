SUMMARY = "Packagegroup for middleware layer"
PACKAGE_ARCH = "${MIDDLEWARE_ARCH}"

LICENSE = "MIT"

inherit packagegroup volatile-bind-gen

# For interim development and package depolyment to test should be using pre release tags
PV = "8.3.4.0"

# PRs are prefered to be be incremented during development stages for any updates in corresponding
#  contributing component revision intakes.
# With release prior to release, PV gets reset to production semver and PR gets reset to r0
PR = "r0"

#Generic components
RDEPENDS:${PN} = " \
    aamp \
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
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_ripple', "virtual/firebolt ", "", d)} \
    gst-plugins-rdk \
    rdk-gstreamer-utils \
    hdmicec \
    iarm-event-sender \
    iarm-set-powerstate \
    iarm-query-powerstate \
    iarmbus \
    iarmmgrs \
    key-simulator \
    libparodus \
    libsyswrapper \
    libunpriv \
    logrotate \
    lsof \
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKTV_APP_HIBERNATE', "memcr ", "", d)} \
    remotedebugger \
    networkmanager-plugin \
    packagemanager \
    parodus \
    rbus \
    rdk-logger \
    rdkat \
    rdkfwupgrader \
	rdknativescript \
    rdkperf \
    entservices-casting \
    entservices-connectivity \
    entservices-deviceanddisplay \
    entservices-infra \
    entservices-inputoutput \
    entservices-mediaanddrm \
    entservices-peripherals \
    entservices-runtime \
    entservices-softwareupdate \
    entservices-mediaanddrm-screencapture \
    ${@bb.utils.contains('DISTRO_FEATURES', 'DAC_SUPPORT', 'entservices-lisa', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'AI2_Dev', 'flutter-app', '', d)} \
    rdksysctl \
    rdkversion \
    rdmagent \
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
    wpe-backend-rdk \
    wpeframework \
    wpeframework-clientlibraries \
    entservices-apis \
    wpeframework-ui \
    wpe-webkit \
    wpe-webkit-web-inspector-plugin \
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
    libwpe \
    mdns \
    mtd-utils \
    nopoll \
    trower-base64 \
    webkitbrowser-plugin \
    mfr-utils \
    webcfg \
    systimemgrfactory \
    systimemgrinetrface \
    thunderstartupservices \
    ${@bb.utils.contains('DISTRO_FEATURES', 'wpe_r4_4', 'packagemanager', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKE_PLATFORM_STB', "tenablehdcp ", "", d)} \
    breakpad-wrapper \
    ctemplate \
    ebtables \
    fribidi \
    gdbm \
    gdk-pixbuf \
    gupnp \
    iptables \
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
    smcroute \
    speex \
    stunnel \
    taglib \
    tzdata \
    util-linux \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_gdb_support', "gdb ", "", d)} \
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
    thunder-hang-recovery \
    thunder-plugin-activator \
    "

DEPENDS += " cjson crun jsonrpc libarchive libdash libevent gssdp harfbuzz hiredis \
             jpeg linenoise nanomsg ne10 nopoll libopus libpam  \
             libpcre libseccomp  libsoup-2.4 trower-base64 libxkbcommon \
             log4c mbedtls rdkperf cjwt nghttp2 ucresolv fcgi glib-openssl libol \
             graphite2 curl openssl zlib glib-networking glib-2.0 \
             lighttpd systemd \
             "
