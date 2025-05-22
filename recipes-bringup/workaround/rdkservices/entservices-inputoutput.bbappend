FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRC_URI:append = " file://DVCalibrationCaps.patch"
#SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "5e7a385bb8aabb3bf925cf0cef4aa253f6bb059a"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
