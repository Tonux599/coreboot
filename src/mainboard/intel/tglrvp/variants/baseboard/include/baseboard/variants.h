/*
 * This file is part of the coreboot project.
 *
 * Copyright (C) 2019-2020 Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __BASEBOARD_VARIANTS_H__
#define __BASEBOARD_VARIANTS_H__

#include <soc/gpio.h>
#include <soc/meminit_tgl.h>
#include <stdint.h>
#include <vendorcode/google/chromeos/chromeos.h>

/* The next set of functions return the gpio table and fill in the number of
 * entries for each table. */

const struct pad_config *variant_gpio_table(size_t *num);
const struct pad_config *variant_early_gpio_table(size_t *num);
const struct cros_gpio *variant_cros_gpios(size_t *num);

size_t variant_memory_sku(void);
const struct mb_lpddr4x_cfg *variant_memory_params(void);

#endif /*__BASEBOARD_VARIANTS_H__ */