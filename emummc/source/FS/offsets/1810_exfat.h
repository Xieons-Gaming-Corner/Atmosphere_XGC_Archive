/*
 * Copyright (c) 2019 m4xw <m4x@m4xw.net>
 * Copyright (c) 2019 Atmosphere-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __FS_1810_EXFAT_H__
#define __FS_1810_EXFAT_H__

// Accessor vtable getters
#define FS_OFFSET_1810_EXFAT_SDMMC_ACCESSOR_GC   0x195B90
#define FS_OFFSET_1810_EXFAT_SDMMC_ACCESSOR_SD   0x197890
#define FS_OFFSET_1810_EXFAT_SDMMC_ACCESSOR_NAND 0x196070

// Hooks
#define FS_OFFSET_1810_EXFAT_SDMMC_WRAPPER_READ  0x191AE0
#define FS_OFFSET_1810_EXFAT_SDMMC_WRAPPER_WRITE 0x191B40
#define FS_OFFSET_1810_EXFAT_RTLD                0x2A3A4
#define FS_OFFSET_1810_EXFAT_RTLD_DESTINATION    ((uintptr_t)(INT64_C(-0x44)))

#define FS_OFFSET_1810_EXFAT_CLKRST_SET_MIN_V_CLK_RATE 0x1B2860

// Misc funcs
#define FS_OFFSET_1810_EXFAT_LOCK_MUTEX          0x18AD50
#define FS_OFFSET_1810_EXFAT_UNLOCK_MUTEX        0x18ADA0

#define FS_OFFSET_1810_EXFAT_SDMMC_WRAPPER_CONTROLLER_OPEN  0x191AA0
#define FS_OFFSET_1810_EXFAT_SDMMC_WRAPPER_CONTROLLER_CLOSE 0x191AC0

// Misc Data
#define FS_OFFSET_1810_EXFAT_SD_MUTEX            0xFE33F0
#define FS_OFFSET_1810_EXFAT_NAND_MUTEX          0xFDEB28
#define FS_OFFSET_1810_EXFAT_ACTIVE_PARTITION    0xFDEB68
#define FS_OFFSET_1810_EXFAT_SDMMC_DAS_HANDLE    0xFBE950

// NOPs
#define FS_OFFSET_1810_EXFAT_SD_DAS_INIT         0x28F24

// Nintendo Paths
#define FS_OFFSET_1810_EXFAT_NINTENDO_PATHS \
{ \
	{.opcode_reg = 3, .adrp_offset = 0x00068B08, .add_rel_offset = 0x00000004}, \
	{.opcode_reg = 3, .adrp_offset = 0x000758DC, .add_rel_offset = 0x00000004}, \
	{.opcode_reg = 4, .adrp_offset = 0x0007C77C, .add_rel_offset = 0x00000004}, \
	{.opcode_reg = 4, .adrp_offset = 0x000905C4, .add_rel_offset = 0x00000004}, \
	{.opcode_reg = 0, .adrp_offset = 0, .add_rel_offset = 0}, \
}

#endif // __FS_1810_EXFAT_H__
