FILESEXTRAPATHS:prepend := "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', '${THISDIR}/files:', '', d)}"

SRC_URI:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' file://rdkshell_keymapping.json', '', d)}"
SRC_URI:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' file://wpeframework.service.in', '', d)}"
SRC_URI:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' file://PluginServer_Debugs.patch', '', d)}"
SRC_URI:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' file://FactoryPluginIssue_debugs.patch', '', d)}"

do_install:append() {
    if ${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', 'true', 'false', d)}; then
        install -d ${D}/etc
        install -m 0644 ${WORKDIR}/rdkshell_keymapping.json ${D}/etc/
        echo "early-bringup image specific install executed"
    else
        echo "Normal image build, skipping early bringup installation"
    fi
}

FILES:${PN}:append = "${@bb.utils.contains('DISTRO_FEATURES', 'early-bringup', ' /etc/rdkshell_keymapping.json', '', d)}"
