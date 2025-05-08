FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "4122ece652954c5928487df867bb39281f0e11a6"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
