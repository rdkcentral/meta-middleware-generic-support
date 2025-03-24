SUMMARY = "Packagegroup for middleware layer"

#Generic components
RDEPENDS:${PN}:remove = " \
    aamp \
    bluetooth-core \
    bluetooth-mgr \
    ctrlm-main \
    dobby-thunderplugin \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_ripple', "firebolt-ripple ", "", d)} \
    gst-plugins-rdk \
    gst-plugins-rdk-aamp \
    rdk-gstreamer-utils \
    iarm-event-sender \
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKTV_APP_HIBERNATE', "memcr ", "", d)} \
    netsrvmgr \
    tr69hostif \
    tr69hostif-conf \
    ${@bb.utils.contains('DISTRO_FEATURES', 'wpe_r4_4', 'packagemanager', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'RDKE_PLATFORM_STB', "tenablehdcp ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_heaptrack', " heaptrack ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'ENABLE_NETWORKMANAGER', 'networkmanager', '', d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'leak_sanitizer', "leakcheck-msgq ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'apparmor', "apparmor ", "", d)} \
    ${@bb.utils.contains('DISTRO_FEATURES', 'enable_rialto','rialto-client rialto-server rialto-servermanager rialto-gstreamer rialto-ocdm', '', d) } \
    virtual/ca-certificates-trust-store \
    "

