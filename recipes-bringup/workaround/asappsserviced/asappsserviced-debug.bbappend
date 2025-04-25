
do_install:append() {
    sed -i '0,/^Environment=/s//Environment="WESTEROS_USE_FRAME_DELAY=1"\n&/' ${D}${systemd_unitdir}/system/sky-appsservice.service
}

