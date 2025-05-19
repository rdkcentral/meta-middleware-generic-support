FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
#SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "34162f258a7b859d62819fe0a0d865848a8a9f2a"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
