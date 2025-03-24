DEPENDS:remove = " libjpeg-turbo"
DEPENDS:append = " libjpeg wayland"

EXTRA_OECMAKE += "-DRDKSHELL_BUILD_FORCE_1080=ON -DBUILD_ENABLE_ERM=ON "
