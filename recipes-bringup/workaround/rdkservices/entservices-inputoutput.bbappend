FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRCREV = "3aa03484d8435d2c535cf0aa0e0b2a1701323a7e"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
