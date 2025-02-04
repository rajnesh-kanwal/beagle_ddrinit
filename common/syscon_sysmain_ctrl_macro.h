/**
  ******************************************************************************
  * @file  syscon_sysmain_ctrl_macro.h
  * @author  StarFive Technology
  * @version  V1.0
  * @date  07/24/2020
  * @brief
  ******************************************************************************
  * @copy
  *
  * THE PRESENT SOFTWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STARFIVE SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH SOFTWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  *  COPYRIGHT 2020 Shanghai StarFive Technology Co., Ltd.
  */

#ifndef _SYSCON_SYSMAIN_CTRL_MACRO_H_
#define _SYSCON_SYSMAIN_CTRL_MACRO_H_

//#define SYSCON_SYSMAIN_CTRL_BASE_ADDR 0x0
#define syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x0
#define syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x4
#define syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x8
#define syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xC
#define syscon_sysmain_ctrl_register4_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x10
#define syscon_sysmain_ctrl_SCFG_u74_boot_vect0_low_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x14
#define syscon_sysmain_ctrl_SCFG_u74_boot_vect0_hi_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x18
#define syscon_sysmain_ctrl_SCFG_u74_boot_vect1_low_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x1C
#define syscon_sysmain_ctrl_SCFG_u74_boot_vect1_hi_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x20
#define syscon_sysmain_ctrl_SCFG_u74_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x24
#define syscon_sysmain_ctrl_register10_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x28
#define syscon_sysmain_ctrl_register11_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x2C
#define syscon_sysmain_ctrl_register12_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x30
#define syscon_sysmain_ctrl_register13_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x34
#define syscon_sysmain_ctrl_register14_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x38
#define syscon_sysmain_ctrl_register15_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x3C
#define syscon_sysmain_ctrl_register16_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x40
#define syscon_sysmain_ctrl_register17_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x44
#define syscon_sysmain_ctrl_register18_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x48
#define syscon_sysmain_ctrl_register19_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x4C
#define syscon_sysmain_ctrl_register20_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x50
#define syscon_sysmain_ctrl_register21_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x54
#define syscon_sysmain_ctrl_register22_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x58
#define syscon_sysmain_ctrl_register23_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x5C
#define syscon_sysmain_ctrl_qspi_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x60
#define syscon_sysmain_ctrl_intmem_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x64
#define syscon_sysmain_ctrl_register26_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x68
#define syscon_sysmain_ctrl_register27_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x6C
#define syscon_sysmain_ctrl_register28_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x70
#define syscon_sysmain_ctrl_register29_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x74
#define syscon_sysmain_ctrl_SCFG_gmac_timestamp0_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x78
#define syscon_sysmain_ctrl_SCFG_gmac_timestamp1_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x7C
#define syscon_sysmain_ctrl_register32_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x80
#define syscon_sysmain_ctrl_register33_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x84
#define syscon_sysmain_ctrl_register34_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x88
#define syscon_sysmain_ctrl_register35_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x8C
#define syscon_sysmain_ctrl_register36_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x90
#define syscon_sysmain_ctrl_register37_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x94
#define syscon_sysmain_ctrl_register38_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x98
#define syscon_sysmain_ctrl_register39_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x9C
#define syscon_sysmain_ctrl_register40_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xA0
#define syscon_sysmain_ctrl_SCFG_intC1_7to0_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xA4
#define syscon_sysmain_ctrl_SCFG_intC0_src15to8_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xA8
#define syscon_sysmain_ctrl_SCFG_intC0_src23to16_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xAC
#define syscon_sysmain_ctrl_SCFG_intC0_src31to24_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xB0
#define syscon_sysmain_ctrl_register47_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xBC
#define syscon_sysmain_ctrl_register48_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xC0
#define syscon_sysmain_ctrl_register52_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xC4
#define syscon_sysmain_ctrl_register49_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xC8
#define syscon_sysmain_ctrl_register50_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xCC
#define syscon_sysmain_ctrl_register51_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xD0
#define syscon_sysmain_ctrl_register66_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xD8
#define syscon_sysmain_ctrl_register53_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xDC
#define syscon_sysmain_ctrl_register54_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xE0
#define syscon_sysmain_ctrl_register55_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xE4
#define syscon_sysmain_ctrl_register56_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xE8
#define syscon_sysmain_ctrl_register57_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xEC
#define syscon_sysmain_ctrl_register58_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xF0
#define syscon_sysmain_ctrl_register59_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xF4
#define syscon_sysmain_ctrl_register60_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xF8
#define syscon_sysmain_ctrl_register61_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0xFC
#define syscon_sysmain_ctrl_register62_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x100
#define syscon_sysmain_ctrl_register63_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x104
#define syscon_sysmain_ctrl_register64_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x108
#define syscon_sysmain_ctrl_register65_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x10C
#define syscon_sysmain_ctrl_register68_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x110
#define syscon_sysmain_ctrl_register67_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x114
#define syscon_sysmain_ctrl_register69_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x118
#define syscon_sysmain_ctrl_register70_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x11C
#define syscon_sysmain_ctrl_register71_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x120
#define syscon_sysmain_ctrl_register72_REG_ADDR  SYSCON_SYSMAIN_CTRL_BASE_ADDR + 0x124

#define _SET_SYSCON_REG_SCFG_pll0_reset(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_reset(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll0_pwrdn(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_pwrdn(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll0_intfb(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (v&0x1)<<2; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_intfb(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll0_bypass(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (v&0x1)<<3; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_bypass(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll0_clk_refdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<4); \
	_ezchip_macro_read_value_ |= (v&0xF)<<4; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_clk_refdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_SCFG_pll0_clk_fbkdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F<<8); \
	_ezchip_macro_read_value_ |= (v&0x3F)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_clk_fbkdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_pll0_bw_adj(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F<<16); \
	_ezchip_macro_read_value_ |= (v&0x3F)<<16; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_bw_adj(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR) >> 16; \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_pll0_clk_outdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<24); \
	_ezchip_macro_read_value_ |= (v&0xF)<<24; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll0_clk_outdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll0_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_SCFG_pll1_reset(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_reset(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll1_pwrdn(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_pwrdn(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll1_intfb(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (v&0x1)<<2; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_intfb(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll1_bypass(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (v&0x1)<<3; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_bypass(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll1_clk_refdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<4); \
	_ezchip_macro_read_value_ |= (v&0xF)<<4; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_clk_refdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_SCFG_pll1_clk_fbkdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F<<8); \
	_ezchip_macro_read_value_ |= (v&0x3F)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_clk_fbkdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_pll1_bw_adj(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F<<16); \
	_ezchip_macro_read_value_ |= (v&0x3F)<<16; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_bw_adj(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR) >> 16; \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_pll1_clk_outdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<24); \
	_ezchip_macro_read_value_ |= (v&0xF)<<24; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll1_clk_outdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll1_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_SCFG_pll2_reset(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_reset(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll2_pwrdn(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_pwrdn(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll2_intfb(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (v&0x1)<<2; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_intfb(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll2_bypass(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (v&0x1)<<3; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_bypass(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_pll2_clk_refdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<4); \
	_ezchip_macro_read_value_ |= (v&0xF)<<4; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_clk_refdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_SCFG_pll2_clk_fbkdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F<<8); \
	_ezchip_macro_read_value_ |= (v&0x3F)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_clk_fbkdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_pll2_bw_adj(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F<<16); \
	_ezchip_macro_read_value_ |= (v&0x3F)<<16; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_bw_adj(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR) >> 16; \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_pll2_clk_outdiv(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<24); \
	_ezchip_macro_read_value_ |= (v&0xF)<<24; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_pll2_clk_outdiv(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_pll2_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_SCFG_plls_stat_pll0_test(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll0_test(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_plls_stat_pll1_test(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll1_test(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_plls_stat_pll2_test(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (v&0x1)<<2; \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll2_test(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll0_lock(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll0_ref_slip(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 5; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll0_fdbk_slip(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 6; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll1_lock(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll1_ref_slip(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 9; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll1_fdbk_slip(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 10; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll2_lock(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll2_ref_slip(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 13; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_plls_stat_pll2_fdbk_slip(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_plls_stat_REG_ADDR) >> 14; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register4_SCFG_u74_halt_from_tile0(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register4_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register4_SCFG_u74_halt_from_tile1(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register4_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register4_SCFG_u74_debug_ndreset(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register4_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register4_SCFG_u74_debug_dmactive(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register4_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_u74_boot_vect0_low_b32(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect0_low_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_u74_boot_vect0_low_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_u74_boot_vect0_low_b32(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect0_low_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_SCFG_u74_boot_vect0_hi_b6(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect0_hi_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (v&0x3F); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_u74_boot_vect0_hi_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_u74_boot_vect0_hi_b6(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect0_hi_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_u74_boot_vect1_low_b32(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect1_low_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_u74_boot_vect1_low_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_u74_boot_vect1_low_b32(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect1_low_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_SCFG_u74_boot_vect1_hi_b6(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect1_hi_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (v&0x3F); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_u74_boot_vect1_hi_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_u74_boot_vect1_hi_b6(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_boot_vect1_hi_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _SET_SYSCON_REG_SCFG_u74_PRID(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7FF); \
	_ezchip_macro_read_value_ |= (v&0x7FF); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_u74_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_u74_PRID(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_u74_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7ff;\
}

#define _GET_SYSCON_REG_register10_e24_halt(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register10_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register10_e24_dbg_reset(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register10_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register10_e24_dbg_active(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register10_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register11_SCFG_nbdla_pwrbus_ram_a_pd(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register11_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register11_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register11_SCFG_nbdla_pwrbus_ram_a_pd(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register11_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register12_SCFG_nbdla_pwrbus_ram_c_pd(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register12_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register12_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register12_SCFG_nbdla_pwrbus_ram_c_pd(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register12_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register13_SCFG_nbdla_pwrbus_ram_o_pd(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register13_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register13_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register13_SCFG_nbdla_pwrbus_ram_o_pd(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register13_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register14_SCFG_nbdla_pwrbus_ram_p_pd(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register14_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register14_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register14_SCFG_nbdla_pwrbus_ram_p_pd(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register14_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register15_SCFG_nbdla_pwrbus_ram_x_pd(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register15_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register15_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register15_SCFG_nbdla_pwrbus_ram_x_pd(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register15_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register16_SCFG_nbdla_globclk_ovr_on(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register16_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register16_SCFG_nbdla_globclk_ovr_on(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register16_SCFG_nbdla_disable_clock_gating(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_register16_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register16_SCFG_nbdla_disable_clock_gating(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register16_SCFG_nbdla_direct_reset(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (v&0x1)<<2; \
	MA_OUTW(syscon_sysmain_ctrl_register16_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register16_SCFG_nbdla_direct_reset(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register16_SCFG_nbdla_clkgating_en(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (v&0x1)<<3; \
	MA_OUTW(syscon_sysmain_ctrl_register16_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register16_SCFG_nbdla_clkgating_en(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register16_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register17_SCFG_jpegc_cur_inst_a(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register17_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _GET_SYSCON_REG_register18_SCFG_wave511_vpu_idle(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register18_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register19_SCFG_wave521_vpu_idle(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register19_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register20_u0_syscon_162_SCFG_gc300_csys_req(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register20_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register20_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register20_u0_syscon_162_SCFG_gc300_csys_req(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register20_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register21_u0_syscon_162_SCFG_gc300_cactive(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register21_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register21_u0_syscon_162_SCFG_gc300_csys_ack(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register21_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register22_u0_syscon_162_SCFG_gc300_debug_out(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register22_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register23_SCFG_cmsensor_rst0(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register23_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register23_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register23_SCFG_cmsensor_rst0(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register23_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register23_SCFG_cmsensor_rst1(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register23_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_register23_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register23_SCFG_cmsensor_rst1(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register23_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_qspi_SCFG_sram_config(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_qspi_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_qspi_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_qspi_SCFG_sram_config(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_qspi_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_intmem_SCFG_sram_config(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_intmem_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_intmem_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_intmem_SCFG_sram_config(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_intmem_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_intmem_SCFG_sram_config_rom(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_intmem_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF<<8); \
	_ezchip_macro_read_value_ |= (v&0xFF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_intmem_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_intmem_SCFG_sram_config_rom(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_intmem_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register26_SCFG_dma1p2p_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register26_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register26_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register26_SCFG_dma1p2p_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register26_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register27_SCFG_dmaezMst_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register27_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register27_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register27_SCFG_dmaezMst_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register27_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register28_SCFG_gmac_phy_intf_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register28_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (v&0x7); \
	MA_OUTW(syscon_sysmain_ctrl_register28_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register28_SCFG_gmac_phy_intf_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register28_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _SET_SYSCON_REG_register28_gmac_SCFG_sram_cfg(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register28_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF<<4); \
	_ezchip_macro_read_value_ |= (v&0xFF)<<4; \
	MA_OUTW(syscon_sysmain_ctrl_register28_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register28_gmac_SCFG_sram_cfg(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register28_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _GET_SYSCON_REG_register29_gmac_speed(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register29_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _GET_SYSCON_REG_register29_gmac_ptp_pps(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register29_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register29_gmac_tx_ckg_ctrl(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register29_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_SCFG_gmac_timestamp0_ptp(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_gmac_timestamp0_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _GET_SYSCON_REG_SCFG_gmac_timestamp1_ptp(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_gmac_timestamp1_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register32_SCFG_gmac_phy_rstn(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register32_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register32_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register32_SCFG_gmac_phy_rstn(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register32_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register33_SCFG_sdio0_hbig_endian(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register33_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register33_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register33_SCFG_sdio0_hbig_endian(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register33_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register33_SCFG_sdio0_m_hbig_endian(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register33_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_register33_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register33_SCFG_sdio0_m_hbig_endian(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register33_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register33_sdio0_SCFG_sram_config(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register33_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF<<2); \
	_ezchip_macro_read_value_ |= (v&0xFF)<<2; \
	MA_OUTW(syscon_sysmain_ctrl_register33_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register33_sdio0_SCFG_sram_config(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register33_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register34_SCFG_sdio1_hbig_endian(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register34_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register34_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register34_SCFG_sdio1_hbig_endian(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register34_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register34_SCFG_sdio1_m_hbig_endian(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register34_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (v&0x1)<<1; \
	MA_OUTW(syscon_sysmain_ctrl_register34_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register34_SCFG_sdio1_m_hbig_endian(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register34_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register34_sdio1_SCFG_sram_config(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register34_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF<<2); \
	_ezchip_macro_read_value_ |= (v&0xFF)<<2; \
	MA_OUTW(syscon_sysmain_ctrl_register34_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register34_sdio1_SCFG_sram_config(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register34_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register35_SCFG_spi2ahb_mode(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register35_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3); \
	_ezchip_macro_read_value_ |= (v&0x3); \
	MA_OUTW(syscon_sysmain_ctrl_register35_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register35_SCFG_spi2ahb_mode(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register35_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _GET_SYSCON_REG_register36_spi2ahb_sleep(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register36_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register37_ezmst_SCFG_sram_config(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register37_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register37_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register37_ezmst_SCFG_sram_config(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register37_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register38_sec_SCFG_sram_cfg(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register38_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register38_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register38_sec_SCFG_sram_cfg(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register38_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register39_uart0_SCFG_sram_config(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register39_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register39_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register39_uart0_SCFG_sram_config(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register39_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register39_uart1_SCFG_sram_config(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register39_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF<<8); \
	_ezchip_macro_read_value_ |= (v&0xFF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register39_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register39_uart1_SCFG_sram_config(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register39_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _GET_SYSCON_REG_register40_trng_secure_mode(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register40_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register40_trng_nonce_mode(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register40_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_SCFG_intC1_7to0_int_src1(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC1_7to0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_intC1_7to0_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_intC1_7to0_int_src1(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC1_7to0_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_SCFG_intC0_src15to8_int_src1(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC0_src15to8_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_intC0_src15to8_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_intC0_src15to8_int_src1(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC0_src15to8_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_SCFG_intC0_src23to16_int_src1(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC0_src23to16_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_intC0_src23to16_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_intC0_src23to16_int_src1(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC0_src23to16_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_SCFG_intC0_src31to24_int_src1(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC0_src31to24_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_SCFG_intC0_src31to24_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_SCFG_intC0_src31to24_int_src1(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_SCFG_intC0_src31to24_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register47_e24_reset_vector(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register47_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register47_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register47_e24_reset_vector(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register47_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register48_SCFG_qspi_sclk_dlychain_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register48_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register48_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register48_SCFG_qspi_sclk_dlychain_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register48_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register52_SCFG_gmac_rxclk_dlychain_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register52_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register52_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register52_SCFG_gmac_rxclk_dlychain_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register52_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register49_SCFG_gmac_gtxclk_dlychain_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register49_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register49_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register49_SCFG_gmac_gtxclk_dlychain_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register49_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register50_SCFG_sdio0_cclk_dlychain_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register50_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register50_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register50_SCFG_sdio0_cclk_dlychain_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register50_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register51_SCFG_sdio1_cclk_dlychain_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register51_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register51_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register51_SCFG_sdio1_cclk_dlychain_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register51_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _SET_SYSCON_REG_register66_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register66_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register66_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register66_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register66_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register66_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register66_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register66_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register66_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register66_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register66_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register66_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register66_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register66_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register66_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register53_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register53_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register53_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register53_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register53_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register53_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register53_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register53_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register53_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register53_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register53_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register53_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register53_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register53_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register53_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register54_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register54_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register54_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register54_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register54_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register54_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register54_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register54_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register54_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register54_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register54_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register54_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register54_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register54_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register54_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register55_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register55_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register55_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register55_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register55_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register55_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register55_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register55_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register55_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register55_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register55_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register55_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register55_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register55_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register55_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register56_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register56_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register56_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register56_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register56_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register56_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register56_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register56_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register56_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register56_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register56_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register56_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register56_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register56_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register56_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register57_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register57_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register57_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register57_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register57_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register57_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register57_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register57_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register57_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register57_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register57_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register57_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register57_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register57_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register57_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register58_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register58_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register58_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register58_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register58_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register58_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register58_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register58_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register58_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register58_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register58_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register58_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register58_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register58_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register58_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register59_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register59_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register59_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register59_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register59_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register59_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register59_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register59_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register59_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register59_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register59_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register59_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register59_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register59_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register59_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register60_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register60_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register60_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register60_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register60_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register60_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register60_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register60_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register60_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register60_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register60_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register60_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register60_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register60_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register60_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register61_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register61_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register61_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register61_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register61_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register61_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register61_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register61_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register61_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register61_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register61_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register61_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register61_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register61_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register61_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register62_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register62_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register62_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register62_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register62_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register62_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register62_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register62_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register62_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register62_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register62_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register62_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register62_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register62_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register62_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register63_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register63_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register63_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register63_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register63_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register63_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register63_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register63_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register63_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register63_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register63_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register63_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register63_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register63_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register63_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register64_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register64_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register64_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register64_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register64_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register64_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register64_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register64_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register64_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register64_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register64_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register64_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register64_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register64_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register64_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register65_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register65_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register65_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register65_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register65_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register65_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register65_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register65_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register65_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register65_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register65_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register65_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register65_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register65_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register65_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register68_SCFG_disable_u74_memaxi_remap(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register68_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register68_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register68_SCFG_disable_u74_memaxi_remap(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register68_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register67_SCFG_axi_cache_sel(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register67_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (v&0xFF); \
	MA_OUTW(syscon_sysmain_ctrl_register67_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register67_SCFG_axi_cache_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register67_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _SET_SYSCON_REG_register67_SCFG_default_arcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register67_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<8); \
	_ezchip_macro_read_value_ |= (v&0xF)<<8; \
	MA_OUTW(syscon_sysmain_ctrl_register67_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register67_SCFG_default_arcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register67_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register67_SCFG_default_awcache(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register67_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF<<12); \
	_ezchip_macro_read_value_ |= (v&0xF)<<12; \
	MA_OUTW(syscon_sysmain_ctrl_register67_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register67_SCFG_default_awcache(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register67_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _SET_SYSCON_REG_register69_core1_en(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register69_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register69_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register69_core1_en(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register69_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register70_SCFG_boot_mode(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register70_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (v&0x1); \
	MA_OUTW(syscon_sysmain_ctrl_register70_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register70_SCFG_boot_mode(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register70_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _GET_SYSCON_REG_register70_SCFG_u74_IOPAD_bootmode(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register70_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SET_SYSCON_REG_register71_SCFG_u74_reset_vector(v) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register71_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFFFFFFFF); \
	_ezchip_macro_read_value_ |= (v&0xFFFFFFFF); \
	MA_OUTW(syscon_sysmain_ctrl_register71_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_SYSCON_REG_register71_SCFG_u74_reset_vector(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register71_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xFFFFFFFF;\
}

#define _GET_SYSCON_REG_register72_u74_boot_device_sel(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(syscon_sysmain_ctrl_register72_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#endif //_SYSCON_SYSMAIN_CTRL_MACRO_H_
