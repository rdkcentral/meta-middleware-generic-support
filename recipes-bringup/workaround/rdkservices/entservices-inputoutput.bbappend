FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"

SRCREV = "6ee7e3226b25efb9be1297e9001bafd17d3a393a"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
