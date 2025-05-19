FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append = " file://0001-boost-filesystem.patch"

SRC_URI:remove = " file://0001-RDK-52028-Add-CMS-WB-ALS-to-AVOutput-6139.patch"

PACKAGECONFIG:remove = " hdmicecsource"
INSANE_SKIP:${PN} += "dev-deps"
