SUMMARY = "Middleware reference image"
LICENSE = "MIT"

FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

inherit core-image custom-rootfs-creation

IMAGE_INSTALL = " \
                 packagegroup-vendor-layer \
                 packagegroup-middleware-layer \
                 "

IMAGE_ROOTFS_SIZE ?= "8192"
IMAGE_ROOTFS_EXTRA_SPACE:append = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", " + 4096", "" ,d)}"

ROOTFS_POSTPROCESS_COMMAND += "create_init_link; "
ROOTFS_POSTPROCESS_COMMAND += "modify_NM; "

modify_NM() {
    if [ -f "${IMAGE_ROOTFS}/etc/NetworkManager/dispatcher.d/nlmon-script.sh" ]; then
        rm ${IMAGE_ROOTFS}/etc/NetworkManager/dispatcher.d/nlmon-script.sh
        sed -i "s/dns=dnsmasq//g" ${IMAGE_ROOTFS}/etc/NetworkManager/NetworkManager.conf
        sed -i '16i ExecStartPost=/bin/sh /lib/rdk/NM_restartConn.sh' ${IMAGE_ROOTFS}/lib/systemd/system/NetworkManager.service
    fi
}

create_init_link() {
        ln -sf /sbin/init ${IMAGE_ROOTFS}/init
}

# Binding to 0.0.0.0 should be allowed only for VBN images
wpeframework_binding_patch(){
    if [ -f "${IMAGE_ROOTFS}/etc/WPEFramework/config.json" ]; then
        sed -i "s/127.0.0.1/0.0.0.0/g" ${IMAGE_ROOTFS}/etc/WPEFramework/config.json
    fi
}

# If vendor layer provides dobby configuration, then remove the generic config
dobby_generic_config_patch(){
    if [ -f "${IMAGE_ROOTFS}/etc/dobby.generic.json" ]; then
        if [ -f "${IMAGE_ROOTFS}/etc/dobby.json" ]; then
            rm ${IMAGE_ROOTFS}/etc/dobby.generic.json
        else
            mv ${IMAGE_ROOTFS}/etc/dobby.generic.json ${IMAGE_ROOTFS}/etc/dobby.json
        fi
    fi
}

ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "
ROOTFS_POSTPROCESS_COMMAND += "dobby_generic_config_patch; "
