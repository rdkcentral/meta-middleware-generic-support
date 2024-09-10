SUMMARY = "Packagegroup for middleware layer"
PACKAGE_ARCH = "${MIDDLEWARE_ARCH}"

LICENSE = "CLOSED"

inherit packagegroup

# For interim development and package depolyment to test should be using pre release tags
PV = "1.9.9"

# PRs are prefered to be be incremented during development stages for any updates in corresponding
#  contributing component revision intakes.
# With release prior to release, PV gets reset to production semver and PR gets reset to r0
PR = "r0"

#Generic components
RDEPENDS_${PN} = " \
    aamp \
    aampabr \
    aampmetrics \
    audiocapturemgr \
    bluetooth-core \
    bluetooth-mgr \
    cimplog \
    cjwt \
    commonutilities \
    crashupload \
    ctrlm-factory \
    ctrlm-headers \
    ctrlm-main \
    dcmd \
    devicesettings \
    dobby \
    dobby-thunderplugin \
    ermgr \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_ripple', "firebolt-ripple ", "", d)} \
    gst-plugins-rdk \
    gst-plugins-rdk-aamp \
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
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKTV_APP_HIBERNATE', "memcr ", "", d)} \
    remotedebugger \
    rmfosal \
    nlmonitor \
    netsrvmgr \
    network-hotplug \
    networkmanager-plugin \
    packagemanager \
    parodus \
    paroduscl \
    rbus \
    rdk-logger \
    rdkat \
    rdknativescript \
    rdkperf \
    rdkservices \
    rdkservices-screencapture \
    rdksysctl \
    rdkversion \
    rdm \
    rfc \
    rtcore \
    rtremote \
    safec-common-wrapper \
    sysint \
    syslog-helper \
    systimemgr \
    telemetry \
    thunderjs \
    thunder-rs \
    tr69hostif \
    tr69hostif-conf \
    tr69hostif-headers \
    tts \
    ucresolv \
    webconfig-framework\
    wdmp-c \
    wifi-hal-generic \
    wpe-backend-rdk \
    wpeframework \
    wpeframework-clientlibraries \
    wpeframework-interfaces \
    wpeframework-ui \
    wpe-webkit \
    wpe-webkit-web-inspector-plugin \
    wrp-c \
    xdial \
    xr-voice-sdk \
    bluez5 \
    bind \
    bind-dl \
    bind-named \
    fdk-aac \
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
    bind-dl \
    bind-named \
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
    rdk-collectd-plugins \
    collectd \
    smcroute \
    speex \
    stunnel \
    taglib \
    tzdata \
    util-linux \
    volatile-binds \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_gdb_support', "gdb ", "", d)} \
    jquery \
    memcapture \
    ndisc6-rdnssd \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_heaptrack', " heaptrack ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKE_PLATFORM_TV', "tvsettings ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKE_PLATFORM_TV', "tvsettings-plugins ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'ENABLE_NETWORKMANAGER', 'networkmanager', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'leak_sanitizer', "leakcheck-msgq ", "", d)} \
    "
