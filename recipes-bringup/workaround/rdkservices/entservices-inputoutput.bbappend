FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
#SRC_URI:append = " file://DVCalibrationCaps.patch"
#SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "149ba705044cb84e6a0a5ddd2d8952a860954160"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
