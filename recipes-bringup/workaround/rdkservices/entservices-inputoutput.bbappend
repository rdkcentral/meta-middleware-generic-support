FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
#SRC_URI:append = " file://DVCalibrationCaps.patch"
#SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "d4b56f37411eec523c16386d814ba84b99e2efa5"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
