SUMMARY = "Packagegroup for middleware layer"

#Generic components
RDEPENDS:${PN}:remove += " \
    sky-nrdplugin \
    airplay-application \
    airplay-daemon \
    netflix \
    \
    libloader-app \
    cobaltwidget \
    starboard-nplb-widget \
    \
    ctrlm-irdb-uei \
    "

DEPENDS:remove += " sky-nrdplugin airplay-application airplay-daemon cobaltwidget"

