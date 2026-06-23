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



replace_syslogng_service_with_journal_export() {
install -d ${IMAGE_ROOTFS}${systemd_unitdir}/system
install -d ${IMAGE_ROOTFS}/opt/logs
cat > ${IMAGE_ROOTFS}${systemd_unitdir}/system/syslog-ng.service << 'EOF'

[Unit]
Description=Journal Log Exporter
Documentation=man:journalctl(1)
After=systemd-journald.service
Requires=systemd-journald.service
DefaultDependencies=no

[Service]
ExecStartPre=/bin/mkdir -p /opt/logs
ExecStart=/bin/sh -c 'exec /bin/journalctl -f -o short-iso >> /opt/logs/unified-logging.txt'
Type=simple
StandardOutput=journal
StandardError=journal
Restart=on-failure
RestartSec=2

[Install]
WantedBy=multi-user.target
EOF
}
ROOTFS_POSTPROCESS_COMMAND += "replace_syslogng_service_with_journal_export;"
ROOTFS_POSTPROCESS_COMMAND += "wpeframework_binding_patch; "
ROOTFS_POSTPROCESS_COMMAND += "dobby_generic_config_patch; "
