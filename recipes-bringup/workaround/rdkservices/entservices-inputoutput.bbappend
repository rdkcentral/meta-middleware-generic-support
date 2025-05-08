FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "afe5a8a553f830166001ac6aab93a9075c03c2f6"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
