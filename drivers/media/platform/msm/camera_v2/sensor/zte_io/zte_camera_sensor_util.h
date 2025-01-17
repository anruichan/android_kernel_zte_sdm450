/* Copyright (c) 2011-2014, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef ZTE_CAMERA_SENSOR_UTIL_H
#define ZTE_CAMERA_SENSOR_UTIL_H

void msm_sensor_creat_debugfs(void);
int msm_sensor_enable_debugfs(struct msm_sensor_ctrl_t *s_ctrl);
void msm_sensor_register_sysdev(struct msm_sensor_ctrl_t *s_ctrl);

#endif
