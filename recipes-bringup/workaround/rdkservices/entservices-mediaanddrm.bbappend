do_install:append() {
    sed -i '/"precondition":\[/,/\],/d' ${D}/etc/WPEFramework/plugins/OCDM.json
}
