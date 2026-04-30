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

create_symlink_rialto() {
   mkdir -p ${IMAGE_ROOTFS}/opt/Rialto/

   cp -f ${IMAGE_ROOTFS}/usr/lib/libRialtoServerManager.so.1.0.0 ${IMAGE_ROOTFS}/usr/lib/gstreamer-1.0
   cp -f ${IMAGE_ROOTFS}/usr/bin/RialtoServer ${IMAGE_ROOTFS}/usr/lib/gstreamer-1.0

   rm ${IMAGE_ROOTFS}/usr/lib/libRialtoServerManager.so.1.0.0 ${IMAGE_ROOTFS}/usr/bin/RialtoServer

   touch ${IMAGE_ROOTFS}/opt/Rialto/libRialtoServerManager.so.1.0.0
   touch ${IMAGE_ROOTFS}/opt/Rialto/RialtoServer

   ln -sf /opt/Rialto/libRialtoServerManager.so.1.0.0 ${IMAGE_ROOTFS}/usr/lib/libRialtoServerManager.so.1.0.0
   ln -sf /opt/Rialto/RialtoServer ${IMAGE_ROOTFS}/usr/bin/RialtoServer
}

ROOTFS_POSTPROCESS_COMMAND += "create_symlink_rialto; "

ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "
ROOTFS_POSTPROCESS_COMMAND += "dobby_generic_config_patch; "
