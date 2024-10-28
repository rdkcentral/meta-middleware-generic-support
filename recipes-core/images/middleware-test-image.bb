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
create_init_link() {
        ln -sf /sbin/init ${IMAGE_ROOTFS}/init
}

# Binding to 0.0.0.0 should be allowed only for VBN images
wpeframework_binding_patch(){
    if [ -f "${IMAGE_ROOTFS}/etc/WPEFramework/config.json" ]; then
        sed -i "s/127.0.0.1/0.0.0.0/g" ${IMAGE_ROOTFS}/etc/WPEFramework/config.json
    fi
}
ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "
