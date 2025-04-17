DEPENDS:remove += " playready-cdm-rdk "
INSANE_SKIP:${PN} += "dev-deps"

FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI += " file://0001-RDKEMW-3062-support-encrypted-playback.patch "

