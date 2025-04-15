FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRCREV = "157bc12a5e610f43f27dfaacaa2e72964a8f9dc4"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
