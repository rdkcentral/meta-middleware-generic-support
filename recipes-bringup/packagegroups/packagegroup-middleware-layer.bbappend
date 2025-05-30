SUMMARY = "Packagegroup for middleware layer"

#Generic components
RDEPENDS:${PN}:remove += " \
    airplay-application \
    airplay-daemon \
    "

DEPENDS:remove += " sky-nrdplugin airplay-application airplay-daemon "

