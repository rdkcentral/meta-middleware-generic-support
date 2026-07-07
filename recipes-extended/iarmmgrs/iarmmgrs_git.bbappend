# Disable dsmgr.service at build time (installed but not enabled).
# dsMgrMain functionality has been replaced by the entservices-devicesettings
# Thunder plugin (org.rdk.DeviceSettings) via COM-RPC.
#
# Removing dsmgr.service from SYSTEMD_SERVICE prevents Yocto from creating
# the multi-user.target.wants/dsmgr.service enable symlink, so the service
# will NOT start on boot but CAN still be started manually for debugging.

SYSTEMD_SERVICE:${PN}:remove = "dsmgr.service"
