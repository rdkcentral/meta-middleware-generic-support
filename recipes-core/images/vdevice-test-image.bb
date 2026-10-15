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

# Prebuilt kernel IPK ships no .bin; qemuboot.conf expects one.
create_kernel_bin() {
        if [ -f "${DEPLOY_DIR_IMAGE}/bzImage" ]; then
                cp -fL ${DEPLOY_DIR_IMAGE}/bzImage ${DEPLOY_DIR_IMAGE}/bzImage-${MACHINE}.bin
        fi
}
do_copy_boot_files[postfuncs] += "create_kernel_bin"

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
IMAGE_FSTYPES += "cpio.gz"
IMAGE_FEATURES:append = " ssh-server-openssh"
IMAGE_INSTALL:append = " openssh openssh-sftp-server"
ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "
ROOTFS_POSTPROCESS_COMMAND += "dobby_generic_config_patch; "
