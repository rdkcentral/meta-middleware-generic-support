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

dedup_reboot_reason_syslog_ng_patch() {
    CONF="${IMAGE_ROOTFS}/etc/syslog-ng/syslog-ng.conf"
    if [ -f "$CONF" ]; then
        # Deduplicate destination d_reboot_reason
        awk '!found_dest && /^destination d_reboot_reason { file\("`log_path`\/rebootreason\.log" template\("\$\(t_rdk\)\\n"\)\);\};/ {found_dest=1} 
             found_dest && /^destination d_reboot_reason { file\("`log_path`\/rebootreason\.log" template\("\$\(t_rdk\)\\n"\)\);\};/ {next} 
             1' "$CONF" > "$CONF.dedup1"
        # Deduplicate log { source(s_journald); filter(f_reboot_reason); destination(d_reboot_reason); flags(final); };
        awk '!found_log && /^log { source\(s_journald\); filter\(f_reboot_reason\); destination\(d_reboot_reason\); flags\(final\); \};/ {found_log=1} 
             found_log && /^log { source\(s_journald\); filter\(f_reboot_reason\); destination\(d_reboot_reason\); flags\(final\); \};/ {next} 
             1' "$CONF.dedup1" > "$CONF.dedup2"
        mv "$CONF.dedup2" "$CONF"
        rm -f "$CONF.dedup1"
    fi
}

ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "
ROOTFS_POSTPROCESS_COMMAND += "dobby_generic_config_patch; "
