#ifndef FIMC_IS_VENDOR_CONFIG_S5NEO_H
#define FIMC_IS_VENDOR_CONFIG_S5NEO_H

#include "fimc-is-eeprom-rear-3p3_v001.h"
#include "fimc-is-eeprom-front-5e3_v001.h"

#define CAMERA_MODULE_ES_VERSION	FIMC_IS_LATEST_FROM_VERSION_A
#define CAL_MAP_ES_VERSION		FROM_VERSION_V001

#define CAMERA_SYSFS_V2
#define SENSOR_5E3_EEPROM_I2C_NEED_CAMIO_1_8V
#define SEC_CAMERA_TRY_TIMEOUT_COUNT 4

#endif /* FIMC_IS_VENDOR_CONFIG_S5NEO_H */
