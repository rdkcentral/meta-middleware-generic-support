FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"
SRCREV = "8132a44e4e5164c87abceec8416c79e785f1e13f"

PACKAGECONFIG:remove = " hdmicecsource"
PACKAGECONFIG:remove = " avoutput"
INSANE_SKIP:${PN} += "dev-deps"
