FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
#SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "0876b14a110189556cadd383cb62633f7a2508b5"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
