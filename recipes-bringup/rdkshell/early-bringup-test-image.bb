SUMMARY = "Middleware reference image"
LICENSE = "MIT"

FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

#inherit core-image custom-rootfs-creation
inherit core-image image-packaging

DISTRO_FEATURES:append = " early-bringup"

IMAGE_INSTALL = " \
                 packagegroup-vendor-layer \
                 packagegroup-middleware-bringup \
                 systemd \  
                 rdkshell \
                 dnsmasq \
                 rdk-fonts \
                 "

IMAGE_FEATURES:append = " tools-debug"

IMAGE_ROOTFS_SIZE ?= "8192"
IMAGE_ROOTFS_EXTRA_SPACE:append = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", " + 4096", "" ,d)}"

LAYER_NAME = "EARLY-BRINGUP"

IMAGE_FSTYPES += "squashfs"

create_init_link() {
    if [ ! -e ${IMAGE_ROOTFS}/sbin/init ]; then
        echo "create_init_link : Creating link to /sbin/init"
        ln -sf /lib/systemd/systemd ${IMAGE_ROOTFS}/sbin/init
    fi

    if [ ! -e ${IMAGE_ROOTFS}/init ]; then
        echo "create_init_link : Creating link to /init"
        ln -sf /lib/systemd/systemd ${IMAGE_ROOTFS}/init
    fi
}

ROOTFS_POSTPROCESS_COMMAND += "create_init_link; "

ROOTFS_POSTPROCESS_COMMAND += "create_init_link; "

# Binding to 0.0.0.0 should be allowed only for VBN images
wpeframework_binding_patch(){
    if [ -f "${IMAGE_ROOTFS}/etc/WPEFramework/config.json" ]; then
        sed -i "s/127.0.0.1/0.0.0.0/g" ${IMAGE_ROOTFS}/etc/WPEFramework/config.json
    fi
}
ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "
