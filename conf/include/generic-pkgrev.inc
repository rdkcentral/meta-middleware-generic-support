# Packages where the recipe doesn't exist in meta-rdk, meta-rdk-video, or meta-rdk-halif-headers
# These entries remain here until the recipes are available in the workspace

PV:pn-rmfosal = "1.0.0"
PR:pn-rmfosal = "r3"
PACKAGE_ARCH:pn-rmfosal = "${MIDDLEWARE_ARCH}"

PV:pn-qtwayland = "5.15.7"
PR:pn-qtwayland = "r1"
PACKAGE_ARCH:pn-qtwayland = "${MIDDLEWARE_ARCH}"

PV:pn-librsvg = "2.40.21"
PR:pn-librsvg = "r0"
PACKAGE_ARCH:pn-librsvg = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-libflac = "${MIDDLEWARE_ARCH}"

PV:pn-sqlite3see = "1.0.0"
PR:pn-sqlite3see = "r0"
PACKAGE_ARCH:pn-sqlite3see = "${MIDDLEWARE_ARCH}"

PR:pn-bluez5 = "r5"
PACKAGE_ARCH:pn-bluez5 = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-dropbear = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-mpg123 = "${MIDDLEWARE_ARCH}"

PR:pn-libwpe = "r0"
PACKAGE_ARCH:pn-libwpe = "${MIDDLEWARE_ARCH}"

PR:pn-alsa-plugins = "r0"
PACKAGE_ARCH:pn-alsa-plugins = "${MIDDLEWARE_ARCH}"

PR:pn-pulseaudio = "r0"
PACKAGE_ARCH:pn-pulseaudio = "${MIDDLEWARE_ARCH}"

PV:pn-rdkwindowmanager = "1.9.0"
PR:pn-rdkwindowmanager = "r0"
PACKAGE_ARCH:pn-rdkwindowmanager = "${MIDDLEWARE_ARCH}"

PV:pn-os-release = "1.0.0"
PR:pn-os-release = "r0"
PACKAGE_ARCH:pn-os-release = "${MIDDLEWARE_ARCH}"

# Workaround to build allarch packages as mw arch
MULTILIB_VARIANTS:pn-os-release = " multilib "

PV:pn-firebolt-ripple = "${RIPPLE_RELEASE_VER}"
PR:pn-firebolt-ripple = "r1"
PACKAGE_ARCH:pn-firebolt-ripple = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-gdb = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-packagegroup-youtube-widgets = "${MIDDLEWARE_ARCH}"
