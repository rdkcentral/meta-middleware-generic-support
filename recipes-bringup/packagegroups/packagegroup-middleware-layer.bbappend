SUMMARY = "Packagegroup for middleware layer"

#Generic components
RDEPENDS:${PN}:remove += " \
    \
    airplay-application \
    airplay-daemon \
    \
    \
    ctrlm-irdb-uei \
    "

DEPENDS:remove += " airplay-application airplay-daemon "

