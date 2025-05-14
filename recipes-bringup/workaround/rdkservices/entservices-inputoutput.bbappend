FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRC_URI:append = " file://useMTKHAL.patch"

SRCREV = "d6bbc76632c02319578194f0bded4d14c1380454"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
