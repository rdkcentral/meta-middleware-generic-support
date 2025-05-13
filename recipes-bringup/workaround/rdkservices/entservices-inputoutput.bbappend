FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "676bce27506d35e73fed6b5755bf35af14662af7"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
