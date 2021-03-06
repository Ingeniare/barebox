#ifndef __MACH_IMX_IMX6_OCOTP_H
#define __MACH_IMX_IMX6_OCOTP_H

#include <mach/ocotp.h>

#define IMX6_OCOTP_TESTER_LOCK		(OCOTP_WORD(0x400) | OCOTP_BIT(0) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_BOOT_CFG_LOCK	(OCOTP_WORD(0x400) | OCOTP_BIT(2) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_MEM_TRIM_LOCK	(OCOTP_WORD(0x400) | OCOTP_BIT(4) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_SJC_RESP_LOCK	(OCOTP_WORD(0x400) | OCOTP_BIT(6) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_MAC_ADDR_LOCK	(OCOTP_WORD(0x400) | OCOTP_BIT(8) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_GP1_LOCK		(OCOTP_WORD(0x400) | OCOTP_BIT(10) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_GP2_LOCK		(OCOTP_WORD(0x400) | OCOTP_BIT(12) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_SRK_LOCK		(OCOTP_WORD(0x400) | OCOTP_BIT(14) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_ANALOG_LOCK		(OCOTP_WORD(0x400) | OCOTP_BIT(18) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_MISC_CONF_LOCK	(OCOTP_WORD(0x400) | OCOTP_BIT(22) | OCOTP_WIDTH(1))

/* 0 <= n <= 1 */
#define IMX6_OCOTP_UNIQUE_ID(n)		(OCOTP_WORD(0x410 + 0x10 * (n)) | OCOTP_BIT(0) | OCOTP_WIDTH(32))
#define IMX6_OCOTP_SI_REV		(OCOTP_WORD(0x430) | OCOTP_BIT(16) | OCOTP_WIDTH(4))
#define IMX6_OCOTP_NUM_CORES		(OCOTP_WORD(0x430) | OCOTP_BIT(20) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_SATA_RST_SRC		(OCOTP_WORD(0x430) | OCOTP_BIT(24) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_MLB_DISABLE		(OCOTP_WORD(0x430) | OCOTP_BIT(26) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_VPU_DISABLE		(OCOTP_WORD(0x440) | OCOTP_BIT(15) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_SPEED_GRADING	(OCOTP_WORD(0x440) | OCOTP_BIT(16) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_BOOT_CFG1		(OCOTP_WORD(0x450) | OCOTP_BIT(0) | OCOTP_WIDTH(8))
#define IMX6_OCOTP_BOOT_CFG2		(OCOTP_WORD(0x450) | OCOTP_BIT(8) | OCOTP_WIDTH(8))
#define IMX6_OCOTP_BOOT_CFG3		(OCOTP_WORD(0x450) | OCOTP_BIT(16) | OCOTP_WIDTH(8))
#define IMX6_OCOTP_BOOT_CFG4		(OCOTP_WORD(0x450) | OCOTP_BIT(24) | OCOTP_WIDTH(8))
#define IMX6_OCOTP_SEC_CONFIG		(OCOTP_WORD(0x460) | OCOTP_BIT(1) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_DIR_BT_DIS		(OCOTP_WORD(0x460) | OCOTP_BIT(3) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_BT_FUSE_SEL		(OCOTP_WORD(0x460) | OCOTP_BIT(4) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_DDR3_CONFIG		(OCOTP_WORD(0x460) | OCOTP_BIT(8) | OCOTP_WIDTH(8))
#define IMX6_OCOTP_HDCP			(OCOTP_WORD(0x460) | OCOTP_BIT(16) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_SJC_DISABLE		(OCOTP_WORD(0x460) | OCOTP_BIT(20) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_WDOG_ENABLE		(OCOTP_WORD(0x460) | OCOTP_BIT(21) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_JTAG_SMODE		(OCOTP_WORD(0x460) | OCOTP_BIT(22) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_KTE			(OCOTP_WORD(0x460) | OCOTP_BIT(26) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_JTAG_HEO		(OCOTP_WORD(0x460) | OCOTP_BIT(27) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_TZASC_ENABLE		(OCOTP_WORD(0x460) | OCOTP_BIT(28) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_SDMMC_HYS_EN		(OCOTP_WORD(0x460) | OCOTP_BIT(29) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_eMMC_RESET_EN	(OCOTP_WORD(0x460) | OCOTP_BIT(30) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_NAND_READ_CMD_CODE1	(OCOTP_WORD(0x470) | OCOTP_BIT(0) | OCOTP_WIDTH(8))
#define IMX6_OCOTP_NAND_READ_CMD_CODE2	(OCOTP_WORD(0x470) | OCOTP_BIT(8) | OCOTP_WIDTH(8))
#define IMX6_OCOTP_BT_LPB_POLARITY	(OCOTP_WORD(0x470) | OCOTP_BIT(20) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_LPB_BOOT		(OCOTP_WORD(0x470) | OCOTP_BIT(21) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_MMC_DLL_DLY		(OCOTP_WORD(0x470) | OCOTP_BIT(24) | OCOTP_WIDTH(7))
#define IMX6_OCOTP_TEMPERATURE_GRADE	(OCOTP_WORD(0x480) | OCOTP_BIT(6) | OCOTP_WIDTH(2))
#define IMX6_OCOTP_POWER_GATE_CORES	(OCOTP_WORD(0x4d0) | OCOTP_BIT(31) | OCOTP_WIDTH(1))
#define IMX6_OCOTP_USB_VID		(OCOTP_WORD(0x4f0) | OCOTP_BIT(0) | OCOTP_WIDTH(16))
#define IMX6_OCOTP_USB_PID		(OCOTP_WORD(0x4f0) | OCOTP_BIT(16) | OCOTP_WIDTH(16))
/* 0 <= n <= 7 */
#define IMX6_OCOTP_SRK_HASH(n)		(OCOTP_WORD(0x580 + 0x10 * (n)) | OCOTP_BIT(0) | OCOTP_WIDTH(32))
#define IMX6_OCOTP_SJC_RESP_31_0	(OCOTP_WORD(0x600) | OCOTP_BIT(0) | OCOTP_WIDTH(32))
#define IMX6_OCOTP_SJC_RESP_55_32	(OCOTP_WORD(0x610) | OCOTP_BIT(0) | OCOTP_WIDTH(24))
#define IMX6_OCOTP_MAC_ADDR_31_0	(OCOTP_WORD(0x620) | OCOTP_BIT(0) | OCOTP_WIDTH(32))
#define IMX6_OCOTP_MAC_ADDR_47_32	(OCOTP_WORD(0x630) | OCOTP_BIT(0) | OCOTP_WIDTH(16))
#define IMX6_OCOTP_GP1			(OCOTP_WORD(0x660) | OCOTP_BIT(0) | OCOTP_WIDTH(32))
#define IMX6_OCOTP_GP2			(OCOTP_WORD(0x670) | OCOTP_BIT(0) | OCOTP_WIDTH(32))
#define IMX6_OCOTP_PAD_SETTINGS		(OCOTP_WORD(0x6d0) | OCOTP_BIT(0) | OCOTP_WIDTH(6))
#define IMX6DQ_OCOTP_TEST_PORT_DISABLE	(OCOTP_WORD(0x6e0) | OCOTP_BIT(1) | OCOTP_WIDTH(1))
#define IMX6SDL_OCOTP_FIELD_RETURN	(OCOTP_WORD(0x6e0) | OCOTP_BIT(0) | OCOTP_WIDTH(1))

#endif /* __MACH_IMX_IMX6_OCOTP_H */
