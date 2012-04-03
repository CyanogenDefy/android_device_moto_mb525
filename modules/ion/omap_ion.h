/*
 * arch/arm/mach-omap2/omap_ion.h
 *
 * Copyright (C) 2011 Texas Instruments
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _OMAP_ION_H
#define _OMAP_ION_H

#define OMAP4_ION_HEAP_SECURE_INPUT_SIZE	(SZ_1M * 90)
#define OMAP4_ION_HEAP_TILER_SIZE		(SZ_128M - SZ_32M)
#define OMAP4_ION_HEAP_NONSECURE_TILER_SIZE	SZ_32M

#define OMAP3_ION_HEAP_CARVEOUT_INPUT_SIZE       (SZ_1M * 100)

#define PHYS_ADDR_SMC_SIZE	(SZ_1M * 3)
#define PHYS_ADDR_SMC_MEM	(0x80c00000 + SZ_256M + SZ_128M - PHYS_ADDR_SMC_SIZE)
#define PHYS_ADDR_DUCATI_SIZE	(SZ_1M * 105)
#define PHYS_ADDR_DUCATI_MEM	(PHYS_ADDR_SMC_MEM - PHYS_ADDR_DUCATI_SIZE - \
				OMAP4_ION_HEAP_SECURE_INPUT_SIZE)

//#ifdef CONFIG_ION_OMAP
//int omap_ion_init(void);
//int omap_register_ion(void);
//#else
//static inline void omap_ion_init(void) { return 0; }
//static inline void omap_register_ion(void) { return 0; }
//#endif

#endif
