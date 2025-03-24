FILESEXTRAPATHS:prepend := "${THISDIR}/files:"


SRC_URI:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' file://RDK-53155_RDKShell_changes_for_Device_mode.patch', '', d)}"
SRC_URI:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', '  file://RDKShell_debugs.patch', '', d)}"

EXTRA_OECMAKE:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' -DPLUGIN_USER_MODE_LAUNCH=ON', '', d)}"
EXTRA_OECMAKE:append = " -DPLUGIN_RDKSHELL_READ_MAC_ON_STARTUP=ON"

PACKAGECONFIG:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' rdkshell', '', d)}"
