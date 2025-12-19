# The OSS recipes listed below are built and released by the MW layer due to commercial licenses and other dependencies.
# Therefore, MW-specific architecture configurations for these recipes should be maintained in this layer.

PV:pn-librsvg = "2.40.21"
PR:pn-librsvg = "r0"
PACKAGE_ARCH:pn-librsvg = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-libflac = "${MIDDLEWARE_ARCH}"

PR:pn-bluez5 = "r5"
PACKAGE_ARCH:pn-bluez5 = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-dropbear = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-mpg123 = "${MIDDLEWARE_ARCH}"

PR:pn-libwpe = "r0"
PACKAGE_ARCH:pn-libwpe = "${MIDDLEWARE_ARCH}"

PR:pn-alsa-plugins = "r0"
PACKAGE_ARCH:pn-alsa-plugins =  "${MIDDLEWARE_ARCH}"

PR:pn-pulseaudio = "r0"
PACKAGE_ARCH:pn-pulseaudio =  "${MIDDLEWARE_ARCH}"

PV:pn-os-release = "1.0.0"
PR:pn-os-release = "r0"
PACKAGE_ARCH:pn-os-release = "${MIDDLEWARE_ARCH}"

# Workaround to build allarch packags as mw arch
MULTILIB_VARIANTS:pn-os-release = " multilib "
PACKAGE_ARCH:pn-os-release = "${MIDDLEWARE_ARCH}"

PACKAGE_ARCH:pn-gdb = "${MIDDLEWARE_ARCH}"
