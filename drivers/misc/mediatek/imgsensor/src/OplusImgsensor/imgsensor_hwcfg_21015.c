/*
 * Copyright (C) 2017 MediaTek Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 */
#ifndef __IMGSENSOR_HWCFG_20131_CTRL_H__
#define __IMGSENSOR_HWCFG_20131_CTRL_H__
#include "imgsensor_hwcfg_custom.h"


struct IMGSENSOR_SENSOR_LIST
    gimgsensor_sensor_list_21015[MAX_NUM_OF_SUPPORT_SENSOR] = {
#if defined(IMX766_MIPI_RAW21015)
{IMX766_SENSOR_ID_21015, SENSOR_DRVNAME_IMX766_MIPI_RAW_21015, IMX766_MIPI_RAW_21015_SensorInit},
#endif
#if defined(IMX709_MIPI_RAW21015)
{IMX709_SENSOR_ID_21015, SENSOR_DRVNAME_IMX709_MIPI_RAW_21015, IMX709_MIPI_RAW_21015_SensorInit},
#endif
#if defined(IMX355_MIPI_RAW21015)
{IMX355_SENSOR_ID_21015, SENSOR_DRVNAME_IMX355_MIPI_RAW_21015, IMX355_MIPI_RAW_21015_SensorInit},
#endif
#if defined(OV02B10_MIPI_RAW21015)
{OV02B10_SENSOR_ID_21015, SENSOR_DRVNAME_OV02B10_MIPI_RAW_21015, OV02B10_MIPI_RAW_21015_SensorInit},
#endif
#if defined(IMX709_MIPI_MONO21015)
{IMX709_MONO_SENSOR_ID_21015, SENSOR_DRVNAME_IMX709_MIPI_MONO_21015, IMX709_MIPI_MONO_21015_SensorInit},
#endif
    /*  ADD sensor driver before this line */
    {0, {0}, NULL}, /* end of list */
};

struct IMGSENSOR_HW_CFG imgsensor_custom_config_21015[] = {
    {
        IMGSENSOR_SENSOR_IDX_MAIN,
        IMGSENSOR_I2C_DEV_0,
        {
            {IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
            {IMGSENSOR_HW_PIN_AVDD_1,IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_AFVDD, IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_DVDD_1,IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
        },
    },
    {
        IMGSENSOR_SENSOR_IDX_SUB,
        IMGSENSOR_I2C_DEV_1,
        {
            {IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
            {IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_PDN,  IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_NONE, IMGSENSOR_HW_ID_NONE},
        },
    },
    {
        IMGSENSOR_SENSOR_IDX_MAIN2,
        IMGSENSOR_I2C_DEV_2,
        {
            {IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
            {IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_DVDD,  IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
        },
    },
    {
        IMGSENSOR_SENSOR_IDX_SUB2,
        IMGSENSOR_I2C_DEV_3,
        {
            {IMGSENSOR_HW_PIN_MCLK,  IMGSENSOR_HW_ID_MCLK},
            {IMGSENSOR_HW_PIN_AVDD,  IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_DOVDD, IMGSENSOR_HW_ID_REGULATOR},
            {IMGSENSOR_HW_PIN_RST,   IMGSENSOR_HW_ID_GPIO},
            {IMGSENSOR_HW_PIN_NONE,  IMGSENSOR_HW_ID_NONE},
        },
    },

    {IMGSENSOR_SENSOR_IDX_NONE}
};

struct IMGSENSOR_HW_POWER_SEQ sensor_power_sequence_21015[] = {
#if defined(IMX766_MIPI_RAW21015)
    {
        SENSOR_DRVNAME_IMX766_MIPI_RAW_21015,
        {
            {RST, Vol_Low, 1},
            {AVDD_1, Vol_2800, 4},
            {AVDD, Vol_High, 2},
            {DVDD, Vol_High, 2},
            {DVDD_1, Vol_High, 4},
            {DOVDD, Vol_1800, 3},
            {SensorMCLK, Vol_High, 6},
            {AFVDD_21015, Vol_2800, 1},
            {RST, Vol_High, 3},
        },
    },
#endif
#if defined(IMX709_MIPI_RAW21015)
    {
        SENSOR_DRVNAME_IMX709_MIPI_RAW_21015,
        {
            {SensorMCLK, Vol_High, 1},
            {PDN, Vol_Low, 0},
            {RST, Vol_Low, 1},
            {AVDD, Vol_2900, 0},
            {DVDD, Vol_1000, 0},
            {DOVDD, Vol_1800, 0},
            {PDN, Vol_High, 1},
            {RST, Vol_High, 8},
        },
    },
#endif
#if defined(IMX355_MIPI_RAW21015)
    {
        SENSOR_DRVNAME_IMX355_MIPI_RAW_21015,
        {
            {RST, Vol_Low, 1},
            {AVDD, Vol_2800, 0},
            {DVDD, Vol_1200, 0},
            {DOVDD, Vol_1800, 1},
            {SensorMCLK, Vol_High, 1},
            {RST, Vol_High, 2},
        },
    },
#endif
#if defined(OV02B10_MIPI_RAW21015)
    {
        SENSOR_DRVNAME_OV02B10_MIPI_RAW_21015,
        {
            {RST, Vol_Low, 1},
            {DOVDD, Vol_1800, 1},
            {AVDD, Vol_2800, 0, Vol_Low, 8},
            {SensorMCLK, Vol_High, 7},
            {RST, Vol_High, 10}
        },
    },
#endif

    /* add new sensor before this line */
    {NULL,},
};
#define IMX766_REL_SENSOR_ID_21015 (IMX766_SENSOR_ID_21015 - SENSOR_ID_OFFSET_21015)
#define IMX709_REL_SENSOR_ID_21015 (IMX709_SENSOR_ID_21015 - SENSOR_ID_OFFSET_21015)
#define IMX355_REL_SENSOR_ID_21015 (IMX355_SENSOR_ID_21015 - SENSOR_ID_OFFSET_21015)
#define OV02B10_REL_SENSOR_ID_21015 (OV02B10_SENSOR_ID_21015 - SENSOR_ID_OFFSET_21015)
#define IMX709_REL_MONO_SENSOR_ID_21015 (IMX709_MONO_SENSOR_ID_21015 - 0xF000)
struct CAMERA_DEVICE_INFO gImgEepromInfo_21015 = {
    .i4SensorNum = 5,
    .pCamModuleInfo = {
        {IMX766_REL_SENSOR_ID_21015,   0xA2, {0x00, 0x06}, 0xB0, 1, {0x92,0xFF,0xFF,0x94}, "Cam_r0", "imx766"},
        {IMX709_REL_SENSOR_ID_21015,  0xA8, {0x00, 0x06}, 0xB0, 0, {0xFF,0xFF,0xFF,0xFF}, "Cam_f",  "imx709"},
        {IMX355_REL_SENSOR_ID_21015,  0xA2, {0x00, 0x06}, 0xB0, 0, {0xFF,0xFF,0xFF,0xFF}, "Cam_r1", "imx355"},
        {OV02B10_REL_SENSOR_ID_21015, 0xA4, {0x00, 0x06}, 0xB0, 0, {0xFF,0xFF,0xFF,0xFF}, "Cam_r2", "ov02b10"},
        {IMX709_REL_MONO_SENSOR_ID_21015,  0xA8, {0x00, 0x06}, 0xB0, 0, {0xFF,0xFF,0xFF,0xFF}, "Cam_f_mono", "imx709_mono"},
    },

    .i4MWDataIdx = IMGSENSOR_SENSOR_IDX_MAIN2,
    .i4MTDataIdx = 0xFF,
    .i4FrontDataIdx = 0xFF,
    .i4NormDataLen = 40,
    .i4MWDataLen = DUALCAM_CALI_DATA_LENGTH_TOTAL_QCOM,
    .i4MWStereoAddr = {IMX766_STEREO_START_ADDR, IMX355_STEREO_START_ADDR},
    .i4MTStereoAddr = {0xFFFF, 0xFFFF},
    .i4FrontStereoAddr = {0xFFFF, 0xFFFF},
    .i4DistortionAddr = IMX355_DISTORTIONPARAMS_START_ADDR,
};
#endif
