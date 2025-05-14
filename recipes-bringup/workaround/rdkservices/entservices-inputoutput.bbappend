FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRCREV = "60666d4d464d7348b36bc39305a595312c3dea1a"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
