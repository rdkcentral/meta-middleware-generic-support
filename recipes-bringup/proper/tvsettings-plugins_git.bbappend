
#disable auto start
do_install:append() {
       sed -i 's/"autostart":true/"autostart":false/g' ${D}/etc/WPEFramework/plugins/TVMgr.json
}

INSANE_SKIP:${PN} += "dev-deps"
