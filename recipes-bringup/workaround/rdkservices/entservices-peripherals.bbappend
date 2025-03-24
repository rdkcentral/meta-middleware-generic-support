
#DEPENDS:append = " wpeframework-clientlibraries "
#DEPENDS  += " libdrm"
#RDEPENDS:${PN} += "libdrm"

INSANE_SKIP:${PN} += "dev-deps"
