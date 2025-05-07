
# Do not reboot on dsmgr crash till bring up is complete

LDFLAGS += "-lrdkHalLogging"

do_install:append() {
    sed -i '/^OnFailure=reboot-notifier@%i.service/d' ${D}${systemd_unitdir}/system/dsmgr.service
}

RDEPENDS:${PN}:append = " devicesettings rfc"
INSANE_SKIP:${PN} += "dev-deps"
