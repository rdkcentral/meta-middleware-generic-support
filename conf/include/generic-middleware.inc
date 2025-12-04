# To support layered ipk generation
MIDDLEWARE_ARCH ??= "${MACHINE}-middleware"
PACKAGE_EXTRA_ARCHS:append = " ${MIDDLEWARE_ARCH}"

DISTRO = "rdk"
require conf/distro/include/rdkv.inc

DISTRO_FEATURES:remove = "directfb"                     
MACHINEOVERRIDES:append = ":client"
OVERRIDES:append = ":entos"

LAYER_NAME = "MIDDLEWARE"
LAYER_EXTENSION = "-middleware"

DISTRO_FEATURES:append = " enable_wpe-webdriver" 

DISTRO_FEATURES:append = " RDKTV_APP_HIBERNATE"      
DISTRO_FEATURES:remove = " netflix_cryptanium"           

PARALLEL_MAKE:pn-breakpad = " -j2 "
PARALLEL_MAKE:pn-breakpad-native = " -j2 "
PARALLEL_MAKE:pn-qtbase = " -j10 "

BBMASK += "|poky/meta/recipes-multimedia/gstreamer"
BBMASK += "|meta-openembedded/meta-multimedia/recipes-multimedia/gstreamer-1.0"
BBMASK += "|meta-rdk/recipes-qt/qt5/qtwebsockets_5.1.1.bb"
