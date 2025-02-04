/**
  ******************************************************************************
  * @file  clkgen_ctrl_macro.h
  * @author  StarFive Technology
  * @version  V1.0
  * @date  07/20/2020
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

#ifndef _CLKGEN_MACRO_H_
#define _CLKGEN_MACRO_H_

//#define CLKGEN_BASE_ADDR 0x0
#define clk_cpundbus_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x0
#define clk_dla_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x4
#define clk_dsp_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x8
#define clk_gmacusb_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xC
#define clk_perh0_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x10
#define clk_perh1_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x14
#define clk_vin_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x18
#define clk_vout_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1C
#define clk_audio_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x20
#define clk_cdechifi4_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x24
#define clk_cdec_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x28
#define clk_voutbus_root_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2C
#define clk_cpunbus_root_div_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x30
#define clk_dsp_root_div_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x34
#define clk_perh0_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x38
#define clk_perh1_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x3C
#define clk_pll0_testout_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x40
#define clk_pll1_testout_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x44
#define clk_pll2_testout_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x48
#define clk_pll2_refclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x4C
#define clk_cpu_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x50
#define clk_cpu_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x54
#define clk_ahb_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x58
#define clk_apb1_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x5C
#define clk_apb2_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x60
#define clk_dom3ahb_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x64
#define clk_dom7ahb_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x68
#define clk_u74_core0_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x6C
#define clk_u74_core1_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x70
#define clk_u74_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x74
#define clk_u74rtc_toggle_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x78
#define clk_sgdma2p_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x7C
#define clk_dma2pnoc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x80
#define clk_sgdma2p_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x84
#define clk_dla_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x88
#define clk_dla_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x8C
#define clk_dlanoc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x90
#define clk_dla_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x94
#define clk_vp6_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x98
#define clk_vp6bus_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x9C
#define clk_vp6_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xA0
#define clk_vcdecbus_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xA4
#define clk_vdec_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xA8
#define clk_vdec_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xAC
#define clk_vdecbrg_mainclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xB0
#define clk_vdec_bclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xB4
#define clk_vdec_cclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xB8
#define clk_vdec_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xBC
#define clk_jpeg_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xC0
#define clk_jpeg_cclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xC4
#define clk_jpeg_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xC8
#define clk_gc300_2x_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xCC
#define clk_gc300_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xD0
#define clk_jpcgc300_axibus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xD4
#define clk_gc300_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xD8
#define clk_jpcgc300_mainclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xDC
#define clk_venc_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xE0
#define clk_venc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xE4
#define clk_vencbrg_mainclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xE8
#define clk_venc_bclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xEC
#define clk_venc_cclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xF0
#define clk_venc_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xF4
#define clk_ddrpll_div2_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xF8
#define clk_ddrpll_div4_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0xFC
#define clk_ddrpll_div8_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x100
#define clk_ddrosc_div2_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x104
#define clk_ddrc0_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x108
#define clk_ddrc1_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x10C
#define clk_ddrphy_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x110
#define clk_noc_rob_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x114
#define clk_noc_cog_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x118
#define clk_nne_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x11C
#define clk_nnebus_src1_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x120
#define clk_nne_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x124
#define clk_nne_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x128
#define clk_nnenoc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x12C
#define clk_dlaslv_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x130
#define clk_dspx2c_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x134
#define clk_hifi4_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x138
#define clk_hifi4_corefree_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x13C
#define clk_hifi4_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x140
#define clk_hifi4_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x144
#define clk_hifi4_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x148
#define clk_hifi4noc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x14C
#define clk_sgdma1p_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x150
#define clk_sgdma1p_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x154
#define clk_dma1p_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x158
#define clk_x2c_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x15C
#define clk_usb_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x160
#define clk_usb_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x164
#define clk_usbnoc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x168
#define clk_usbphy_rootdiv_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x16C
#define clk_usbphy_125m_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x170
#define clk_usbphy_plldiv25m_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x174
#define clk_usbphy_25m_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x178
#define clk_audio_div_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x17C
#define clk_audio_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x180
#define clk_audio_12288_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x184
#define clk_vin_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x188
#define clk_isp0_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x18C
#define clk_isp0_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x190
#define clk_isp0noc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x194
#define clk_ispslv_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x198
#define clk_isp1_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x19C
#define clk_isp1_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1A0
#define clk_isp1noc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1A4
#define clk_vin_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1A8
#define clk_vin_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1AC
#define clk_vinnoc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1B0
#define clk_vout_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1B4
#define clk_dispbus_src_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1B8
#define clk_disp_bus_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1BC
#define clk_disp_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1C0
#define clk_dispnoc_axi_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1C4
#define clk_sdio0_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1C8
#define clk_sdio0_cclkint_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1CC
#define clk_sdio0_cclkint_inv_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1D0
#define clk_sdio1_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1D4
#define clk_sdio1_cclkint_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1D8
#define clk_sdio1_cclkint_inv_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1DC
#define clk_gmac_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1E0
#define clk_gmac_root_div_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1E4
#define clk_gmac_ptp_refclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1E8
#define clk_gmac_gtxclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1EC
#define clk_gmac_rmii_txclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1F0
#define clk_gmac_rmii_rxclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1F4
#define clk_gmac_tx_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1F8
#define clk_gmac_tx_inv_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x1FC
#define clk_gmac_rx_pre_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x200
#define clk_gmac_rx_inv_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x204
#define clk_gmac_rmii_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x208
#define clk_gmac_tophyref_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x20C
#define clk_spi2ahb_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x210
#define clk_spi2ahb_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x214
#define clk_ezmaster_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x218
#define clk_e24_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x21C
#define clk_e24rtc_toggle_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x220
#define clk_qspi_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x224
#define clk_qspi_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x228
#define clk_qspi_refclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x22C
#define clk_sec_ahb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x230
#define clk_aes_clk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x234
#define clk_sha_clk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x238
#define clk_pka_clk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x23C
#define clk_trng_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x240
#define clk_otp_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x244
#define clk_uart0_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x248
#define clk_uart0_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x24C
#define clk_uart1_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x250
#define clk_uart1_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x254
#define clk_spi0_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x258
#define clk_spi0_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x25C
#define clk_spi1_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x260
#define clk_spi1_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x264
#define clk_i2c0_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x268
#define clk_i2c0_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x26C
#define clk_i2c1_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x270
#define clk_i2c1_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x274
#define clk_gpio_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x278
#define clk_uart2_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x27C
#define clk_uart2_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x280
#define clk_uart3_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x284
#define clk_uart3_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x288
#define clk_spi2_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x28C
#define clk_spi2_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x290
#define clk_spi3_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x294
#define clk_spi3_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x298
#define clk_i2c2_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x29C
#define clk_i2c2_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2A0
#define clk_i2c3_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2A4
#define clk_i2c3_core_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2A8
#define clk_wdtimer_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2AC
#define clk_wdt_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2B0
#define clk_timer0_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2B4
#define clk_timer1_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2B8
#define clk_timer2_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2BC
#define clk_timer3_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2C0
#define clk_timer4_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2C4
#define clk_timer5_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2C8
#define clk_timer6_coreclk_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2CC
#define clk_vp6intc_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2D0
#define clk_pwm_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2D4
#define clk_msi_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2D8
#define clk_temp_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2DC
#define clk_temp_sense_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2E0
#define clk_syserr_apb_ctrl_REG_ADDR  CLKGEN_BASE_ADDR + 0x2E4

#define _ENABLE_CLOCK_clk_cpundbus_root_ {}

#define _SWITCH_CLOCK_clk_cpundbus_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cpundbus_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_cpundbus_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_cpundbus_root_SOURCE_clk_pll0_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cpundbus_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_cpundbus_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_cpundbus_root_SOURCE_clk_pll1_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cpundbus_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_cpundbus_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_cpundbus_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cpundbus_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x3&0x3)<<24; \
	MA_OUTW(clk_cpundbus_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_cpundbus_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_cpundbus_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_dla_root_ {}

#define _SWITCH_CLOCK_clk_dla_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_dla_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_dla_root_SOURCE_clk_pll1_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_dla_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_dla_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_dla_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_dla_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dla_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_dsp_root_ {}

#define _SWITCH_CLOCK_clk_dsp_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dsp_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_dsp_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_dsp_root_SOURCE_clk_pll0_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dsp_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_dsp_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_dsp_root_SOURCE_clk_pll1_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dsp_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_dsp_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_dsp_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dsp_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x3&0x3)<<24; \
	MA_OUTW(clk_dsp_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_dsp_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dsp_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_gmacusb_root_ {}

#define _SWITCH_CLOCK_clk_gmacusb_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmacusb_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_gmacusb_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_gmacusb_root_SOURCE_clk_pll0_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmacusb_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_gmacusb_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_gmacusb_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmacusb_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_gmacusb_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_gmacusb_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmacusb_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_perh0_root_ {}

#define _SWITCH_CLOCK_clk_perh0_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_perh0_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(clk_perh0_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_perh0_root_SOURCE_clk_pll0_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_perh0_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(clk_perh0_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_perh0_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_perh0_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_perh1_root_ {}

#define _SWITCH_CLOCK_clk_perh1_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_perh1_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(clk_perh1_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_perh1_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_perh1_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(clk_perh1_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_perh1_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_perh1_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vin_root_ {}

#define _SWITCH_CLOCK_clk_vin_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_vin_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_vin_root_SOURCE_clk_pll1_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_vin_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_vin_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_vin_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_vin_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vin_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_vout_root_ {}

#define _SWITCH_CLOCK_clk_vout_root_SOURCE_clk_osc_aud_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vout_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_vout_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_vout_root_SOURCE_clk_pll0_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vout_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_vout_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_vout_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vout_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_vout_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_vout_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vout_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_audio_root_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_audio_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_audio_root_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_audio_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_audio_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_audio_root_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_audio_root_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_audio_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_audio_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_audio_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_cdechifi4_root_ {}

#define _SWITCH_CLOCK_clk_cdechifi4_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cdechifi4_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_cdechifi4_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_cdechifi4_root_SOURCE_clk_pll1_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cdechifi4_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_cdechifi4_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_cdechifi4_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cdechifi4_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_cdechifi4_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_cdechifi4_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_cdechifi4_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_cdec_root_ {}

#define _SWITCH_CLOCK_clk_cdec_root_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cdec_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_cdec_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_cdec_root_SOURCE_clk_pll0_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cdec_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_cdec_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_cdec_root_SOURCE_clk_pll1_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cdec_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_cdec_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_cdec_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_cdec_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_voutbus_root_ {}

#define _SWITCH_CLOCK_clk_voutbus_root_SOURCE_clk_osc_aud_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_voutbus_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_voutbus_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_voutbus_root_SOURCE_clk_pll0_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_voutbus_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_voutbus_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_voutbus_root_SOURCE_clk_pll2_out_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_voutbus_root_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_voutbus_root_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_voutbus_root_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_voutbus_root_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_cpunbus_root_div_ {}

#define _DIVIDE_CLOCK_clk_cpunbus_root_div_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cpunbus_root_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3); \
	_ezchip_macro_read_value_ |= (div&0x3); \
	MA_OUTW(clk_cpunbus_root_div_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_cpunbus_root_div_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_cpunbus_root_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_dsp_root_div_ {}

#define _DIVIDE_CLOCK_clk_dsp_root_div_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dsp_root_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_dsp_root_div_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_dsp_root_div_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dsp_root_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_perh0_src_ {}

#define _DIVIDE_CLOCK_clk_perh0_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_perh0_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_perh0_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_perh0_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_perh0_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_perh1_src_ {}

#define _DIVIDE_CLOCK_clk_perh1_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_perh1_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_perh1_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_perh1_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_perh1_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_pll0_testout_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll0_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_pll0_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_pll0_testout_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll0_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_pll0_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_pll0_testout_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pll0_testout_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_pll0_testout_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll0_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_pll0_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_pll0_testout_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pll0_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_pll1_testout_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll1_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_pll1_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_pll1_testout_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll1_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_pll1_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_pll1_testout_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pll1_testout_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_pll1_testout_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll1_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_pll1_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_pll1_testout_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pll1_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_pll2_testout_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll2_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_pll2_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_pll2_testout_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll2_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_pll2_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_pll2_testout_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pll2_testout_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_pll2_testout_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll2_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_pll2_testout_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_pll2_testout_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pll2_testout_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_pll2_refclk_ {}

#define _SWITCH_CLOCK_clk_pll2_refclk_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll2_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(clk_pll2_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_pll2_refclk_SOURCE_clk_osc_aud_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pll2_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(clk_pll2_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_pll2_refclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pll2_refclk_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_cpu_core_ {}

#define _DIVIDE_CLOCK_clk_cpu_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cpu_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_cpu_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_cpu_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_cpu_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_cpu_axi_ {}

#define _DIVIDE_CLOCK_clk_cpu_axi_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_cpu_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_cpu_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_cpu_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_cpu_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_ahb_bus_ {}

#define _DIVIDE_CLOCK_clk_ahb_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ahb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_ahb_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_ahb_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ahb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_apb1_bus_ {}

#define _DIVIDE_CLOCK_clk_apb1_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_apb1_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_apb1_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_apb1_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_apb1_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_apb2_bus_ {}

#define _DIVIDE_CLOCK_clk_apb2_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_apb2_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_apb2_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_apb2_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_apb2_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_dom3ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dom3ahb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dom3ahb_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dom3ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dom3ahb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dom3ahb_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dom3ahb_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dom3ahb_bus_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dom7ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dom7ahb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dom7ahb_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dom7ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dom7ahb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dom7ahb_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dom7ahb_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dom7ahb_bus_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_u74_core0_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74_core0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_u74_core0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_u74_core0_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74_core0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_u74_core0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_u74_core0_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_u74_core0_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_u74_core1_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74_core1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_u74_core1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_u74_core1_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74_core1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_u74_core1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_u74_core1_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_u74_core1_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_u74_core1_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74_core1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_u74_core1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_u74_core1_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_u74_core1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_u74_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_u74_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_u74_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_u74_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_u74_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_u74_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_u74rtc_toggle_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74rtc_toggle_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_u74rtc_toggle_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_u74rtc_toggle_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_u74rtc_toggle_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_u74rtc_toggle_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_u74rtc_toggle_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_u74rtc_toggle_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sgdma2p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sgdma2p_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sgdma2p_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sgdma2p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sgdma2p_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sgdma2p_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sgdma2p_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sgdma2p_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dma2pnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dma2pnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dma2pnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dma2pnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dma2pnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dma2pnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dma2pnoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dma2pnoc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sgdma2p_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sgdma2p_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sgdma2p_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sgdma2p_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sgdma2p_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sgdma2p_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sgdma2p_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sgdma2p_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dla_bus_ {}

#define _DIVIDE_CLOCK_clk_dla_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_dla_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_dla_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dla_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_dla_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dla_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dla_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dla_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dla_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dla_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dlanoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dlanoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dlanoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dlanoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dlanoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dlanoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dlanoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dlanoc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dla_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dla_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dla_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dla_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dla_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dla_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dla_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vp6_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vp6_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vp6_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vp6_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vp6_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vp6_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_vp6_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_vp6_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vp6_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vp6_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_vp6bus_src_ {}

#define _DIVIDE_CLOCK_clk_vp6bus_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6bus_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_vp6bus_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vp6bus_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vp6bus_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_vp6_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vp6_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vp6_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vp6_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vp6_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vp6_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_vp6_axi_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_vp6_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vp6_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vp6_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_vcdecbus_src_ {}

#define _DIVIDE_CLOCK_clk_vcdecbus_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vcdecbus_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_vcdecbus_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vcdecbus_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vcdecbus_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_vdec_bus_ {}

#define _DIVIDE_CLOCK_clk_vdec_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_vdec_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vdec_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdec_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_vdec_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vdec_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vdec_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vdec_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vdec_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdec_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vdecbrg_mainclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdecbrg_mainclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vdecbrg_mainclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vdecbrg_mainclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdecbrg_mainclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vdecbrg_mainclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vdecbrg_mainclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdecbrg_mainclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vdec_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vdec_bclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vdec_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vdec_bclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vdec_bclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdec_bclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_vdec_bclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_vdec_bclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vdec_bclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdec_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_vdec_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vdec_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vdec_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vdec_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vdec_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdec_cclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_vdec_cclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_vdec_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vdec_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdec_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_vdec_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vdec_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vdec_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vdec_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vdec_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vdec_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vdec_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_jpeg_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_jpeg_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_jpeg_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_jpeg_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_jpeg_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_jpeg_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_jpeg_axi_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_jpeg_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_jpeg_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_jpeg_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_jpeg_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_jpeg_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_jpeg_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_jpeg_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_jpeg_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_jpeg_cclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_jpeg_cclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_jpeg_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_jpeg_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_jpeg_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_jpeg_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_jpeg_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_jpeg_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpeg_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_jpeg_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_jpeg_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_jpeg_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_gc300_2x_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gc300_2x_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gc300_2x_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gc300_2x_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gc300_2x_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gc300_2x_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gc300_2x_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gc300_2x_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_gc300_2x_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gc300_2x_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_gc300_2x_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_gc300_2x_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gc300_2x_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_gc300_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gc300_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gc300_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gc300_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gc300_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gc300_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gc300_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gc300_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_jpcgc300_axibus_ {}

#define _DIVIDE_CLOCK_clk_jpcgc300_axibus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpcgc300_axibus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_jpcgc300_axibus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_jpcgc300_axibus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_jpcgc300_axibus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_gc300_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gc300_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gc300_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gc300_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gc300_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gc300_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gc300_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gc300_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_jpcgc300_mainclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpcgc300_mainclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_jpcgc300_mainclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_jpcgc300_mainclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_jpcgc300_mainclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_jpcgc300_mainclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_jpcgc300_mainclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_jpcgc300_mainclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_venc_bus_ {}

#define _DIVIDE_CLOCK_clk_venc_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_venc_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_venc_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_venc_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_venc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_venc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_venc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_venc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_venc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_venc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vencbrg_mainclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vencbrg_mainclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vencbrg_mainclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vencbrg_mainclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vencbrg_mainclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vencbrg_mainclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vencbrg_mainclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vencbrg_mainclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_venc_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_venc_bclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_venc_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_venc_bclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_venc_bclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_venc_bclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_venc_bclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_venc_bclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_venc_bclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_venc_bclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_venc_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_venc_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_venc_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_venc_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_venc_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_venc_cclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_venc_cclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_venc_cclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_venc_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_venc_cclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_venc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_venc_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_venc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_venc_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_venc_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_venc_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_venc_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_ddrpll_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ddrpll_div2_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ddrpll_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ddrpll_div2_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ddrpll_div2_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrpll_div2_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_ddrpll_div2_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3); \
	_ezchip_macro_read_value_ |= (div&0x3); \
	MA_OUTW(clk_ddrpll_div2_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_ddrpll_div2_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrpll_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_ddrpll_div4_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div4_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ddrpll_div4_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ddrpll_div4_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div4_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ddrpll_div4_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ddrpll_div4_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrpll_div4_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_ddrpll_div4_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div4_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3); \
	_ezchip_macro_read_value_ |= (div&0x3); \
	MA_OUTW(clk_ddrpll_div4_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_ddrpll_div4_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrpll_div4_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_ddrpll_div8_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div8_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ddrpll_div8_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ddrpll_div8_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div8_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ddrpll_div8_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ddrpll_div8_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrpll_div8_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_ddrpll_div8_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrpll_div8_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3); \
	_ezchip_macro_read_value_ |= (div&0x3); \
	MA_OUTW(clk_ddrpll_div8_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_ddrpll_div8_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrpll_div8_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_ddrosc_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrosc_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ddrosc_div2_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ddrosc_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrosc_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ddrosc_div2_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ddrosc_div2_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrosc_div2_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_ddrosc_div2_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrosc_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3); \
	_ezchip_macro_read_value_ |= (div&0x3); \
	MA_OUTW(clk_ddrosc_div2_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_ddrosc_div2_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrosc_div2_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_ddrc0_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ddrc0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ddrc0_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ddrc0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ddrc0_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SWITCH_CLOCK_clk_ddrc0_SOURCE_clk_ddrosc_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_ddrc0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_ddrc0_SOURCE_clk_ddrpll_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_ddrc0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_ddrc0_SOURCE_clk_ddrpll_div4_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_ddrc0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_ddrc0_SOURCE_clk_ddrpll_div8_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x3&0x3)<<24; \
	MA_OUTW(clk_ddrc0_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_ddrc0_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrc0_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_ddrc1_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ddrc1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ddrc1_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ddrc1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ddrc1_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _SWITCH_CLOCK_clk_ddrc1_SOURCE_clk_ddrosc_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_ddrc1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_ddrc1_SOURCE_clk_ddrpll_div2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_ddrc1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_ddrc1_SOURCE_clk_ddrpll_div4_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_ddrc1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_ddrc1_SOURCE_clk_ddrpll_div8_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x3&0x3)<<24; \
	MA_OUTW(clk_ddrc1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_ddrc1_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrc1_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_ddrphy_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrphy_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ddrphy_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ddrphy_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ddrphy_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ddrphy_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ddrphy_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ddrphy_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_noc_rob_ {}

#define _DIVIDE_CLOCK_clk_noc_rob_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_noc_rob_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_noc_rob_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_noc_rob_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_noc_rob_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_noc_cog_ {}

#define _DIVIDE_CLOCK_clk_noc_cog_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_noc_cog_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_noc_cog_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_noc_cog_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_noc_cog_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_nne_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nne_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_nne_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_nne_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nne_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_nne_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_nne_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_nne_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_nnebus_src1_ {}

#define _DIVIDE_CLOCK_clk_nnebus_src1_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nnebus_src1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_nnebus_src1_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_nnebus_src1_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_nnebus_src1_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_nne_bus_ {}

#define _SWITCH_CLOCK_clk_nne_bus_SOURCE_clk_cpu_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nne_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(clk_nne_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_nne_bus_SOURCE_clk_nnebus_src1_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nne_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(clk_nne_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_nne_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_nne_bus_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_nne_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nne_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_nne_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_nne_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nne_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_nne_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_nne_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_nne_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_nnenoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nnenoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_nnenoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_nnenoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_nnenoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_nnenoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_nnenoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_nnenoc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dlaslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dlaslv_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dlaslv_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dlaslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dlaslv_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dlaslv_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dlaslv_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dlaslv_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dspx2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dspx2c_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dspx2c_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dspx2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dspx2c_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dspx2c_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dspx2c_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dspx2c_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_hifi4_src_ {}

#define _DIVIDE_CLOCK_clk_hifi4_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_hifi4_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_hifi4_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_hifi4_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_hifi4_corefree_ {}

#define _DIVIDE_CLOCK_clk_hifi4_corefree_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4_corefree_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_hifi4_corefree_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_hifi4_corefree_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_hifi4_corefree_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_hifi4_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_hifi4_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_hifi4_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_hifi4_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_hifi4_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_hifi4_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_hifi4_bus_ {}

#define _DIVIDE_CLOCK_clk_hifi4_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_hifi4_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_hifi4_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_hifi4_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_hifi4_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_hifi4_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_hifi4_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_hifi4_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_hifi4_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_hifi4_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_hifi4noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4noc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_hifi4noc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_hifi4noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_hifi4noc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_hifi4noc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_hifi4noc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_hifi4noc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sgdma1p_bus_ {}

#define _DIVIDE_CLOCK_clk_sgdma1p_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sgdma1p_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_sgdma1p_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_sgdma1p_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sgdma1p_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_sgdma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sgdma1p_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sgdma1p_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sgdma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sgdma1p_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sgdma1p_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sgdma1p_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sgdma1p_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dma1p_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dma1p_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dma1p_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dma1p_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dma1p_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dma1p_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_x2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_x2c_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_x2c_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_x2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_x2c_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_x2c_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_x2c_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_x2c_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_x2c_axi_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_x2c_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_x2c_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_x2c_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_x2c_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_usb_bus_ {}

#define _DIVIDE_CLOCK_clk_usb_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_usb_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_usb_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usb_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_usb_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usb_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_usb_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_usb_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usb_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_usb_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_usb_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usb_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_usbnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_usbnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_usbnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_usbnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_usbnoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usbnoc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_usbphy_rootdiv_ {}

#define _DIVIDE_CLOCK_clk_usbphy_rootdiv_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_rootdiv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_usbphy_rootdiv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_usbphy_rootdiv_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usbphy_rootdiv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_usbphy_125m_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_125m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_usbphy_125m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_usbphy_125m_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_125m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_usbphy_125m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_usbphy_125m_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usbphy_125m_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_usbphy_125m_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_125m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_usbphy_125m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_usbphy_125m_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usbphy_125m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_usbphy_plldiv25m_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_plldiv25m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_usbphy_plldiv25m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_usbphy_plldiv25m_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_plldiv25m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_usbphy_plldiv25m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_usbphy_plldiv25m_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usbphy_plldiv25m_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_usbphy_plldiv25m_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_plldiv25m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_usbphy_plldiv25m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_usbphy_plldiv25m_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usbphy_plldiv25m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_usbphy_25m_ {}

#define _SWITCH_CLOCK_clk_usbphy_25m_SOURCE_clk_osc_sys_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_25m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(clk_usbphy_25m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_usbphy_25m_SOURCE_clk_usbphy_plldiv25m_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_usbphy_25m_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(clk_usbphy_25m_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_usbphy_25m_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_usbphy_25m_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_audio_div_ {}

#define _DIVIDE_CLOCK_clk_audio_div_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3FFFF); \
	_ezchip_macro_read_value_ |= (div&0x3FFFF); \
	MA_OUTW(clk_audio_div_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_audio_div_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_audio_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3ffff;\
}

#define _ENABLE_CLOCK_clk_audio_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_audio_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_audio_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_audio_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_audio_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_audio_src_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_audio_12288_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_12288_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_audio_12288_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_audio_12288_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_audio_12288_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_audio_12288_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_audio_12288_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_audio_12288_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vin_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vin_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vin_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vin_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vin_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vin_src_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_vin_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_vin_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vin_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vin_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_isp0_bus_ {}

#define _DIVIDE_CLOCK_clk_isp0_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp0_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_isp0_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_isp0_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_isp0_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_isp0_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp0_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_isp0_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_isp0_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp0_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_isp0_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_isp0_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_isp0_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_isp0noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp0noc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_isp0noc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_isp0noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp0noc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_isp0noc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_isp0noc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_isp0noc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_ispslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ispslv_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ispslv_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ispslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ispslv_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ispslv_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ispslv_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ispslv_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_isp1_bus_ {}

#define _DIVIDE_CLOCK_clk_isp1_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp1_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_isp1_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_isp1_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_isp1_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_isp1_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp1_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_isp1_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_isp1_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp1_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_isp1_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_isp1_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_isp1_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_isp1noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp1noc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_isp1noc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_isp1noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_isp1noc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_isp1noc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_isp1noc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_isp1noc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vin_bus_ {}

#define _DIVIDE_CLOCK_clk_vin_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_vin_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vin_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vin_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_vin_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vin_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vin_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vin_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vin_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vin_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vin_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vinnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vinnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vinnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vinnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vinnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vinnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vinnoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vinnoc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_vout_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vout_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vout_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vout_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vout_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vout_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vout_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vout_src_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_vout_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vout_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_vout_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_vout_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vout_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_dispbus_src_ {}

#define _DIVIDE_CLOCK_clk_dispbus_src_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dispbus_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_dispbus_src_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_dispbus_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dispbus_src_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_disp_bus_ {}

#define _DIVIDE_CLOCK_clk_disp_bus_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_disp_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7); \
	_ezchip_macro_read_value_ |= (div&0x7); \
	MA_OUTW(clk_disp_bus_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_disp_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_disp_bus_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7;\
}

#define _ENABLE_CLOCK_clk_disp_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_disp_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_disp_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_disp_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_disp_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_disp_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_disp_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_disp_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_dispnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dispnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_dispnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_dispnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_dispnoc_axi_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_dispnoc_axi_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_dispnoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_dispnoc_axi_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sdio0_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio0_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sdio0_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sdio0_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio0_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sdio0_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sdio0_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio0_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sdio0_cclkint_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sdio0_cclkint_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sdio0_cclkint_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sdio0_cclkint_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sdio0_cclkint_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_sdio0_cclkint_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_sdio0_cclkint_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_sdio0_cclkint_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_sdio0_cclkint_inv_ {}

#define _SET_CLOCK_clk_sdio0_cclkint_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<30; \
	MA_OUTW(clk_sdio0_cclkint_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _UNSET_CLOCK_clk_sdio0_cclkint_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<30; \
	MA_OUTW(clk_sdio0_cclkint_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_POLARITY_STATUS_clk_sdio0_cclkint_inv_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio0_cclkint_inv_ctrl_REG_ADDR) >> 30; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sdio1_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio1_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sdio1_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sdio1_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio1_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sdio1_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sdio1_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio1_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sdio1_cclkint_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sdio1_cclkint_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sdio1_cclkint_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sdio1_cclkint_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sdio1_cclkint_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_sdio1_cclkint_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_sdio1_cclkint_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_sdio1_cclkint_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_sdio1_cclkint_inv_ {}

#define _SET_CLOCK_clk_sdio1_cclkint_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<30; \
	MA_OUTW(clk_sdio1_cclkint_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _UNSET_CLOCK_clk_sdio1_cclkint_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<30; \
	MA_OUTW(clk_sdio1_cclkint_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_POLARITY_STATUS_clk_sdio1_cclkint_inv_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sdio1_cclkint_inv_ctrl_REG_ADDR) >> 30; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_gmac_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gmac_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gmac_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gmac_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gmac_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_gmac_root_div_ {}

#define _DIVIDE_CLOCK_clk_gmac_root_div_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_root_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_gmac_root_div_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_gmac_root_div_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_root_div_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_gmac_ptp_refclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_ptp_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gmac_ptp_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gmac_ptp_refclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_ptp_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gmac_ptp_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gmac_ptp_refclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_ptp_refclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_gmac_ptp_refclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_ptp_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_gmac_ptp_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_gmac_ptp_refclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_ptp_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_gmac_gtxclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_gtxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gmac_gtxclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gmac_gtxclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_gtxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gmac_gtxclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gmac_gtxclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_gtxclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_gmac_gtxclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_gtxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xFF); \
	_ezchip_macro_read_value_ |= (div&0xFF); \
	MA_OUTW(clk_gmac_gtxclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_gmac_gtxclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_gtxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xff;\
}

#define _ENABLE_CLOCK_clk_gmac_rmii_txclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_txclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gmac_rmii_txclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gmac_rmii_txclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_txclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gmac_rmii_txclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gmac_rmii_txclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_txclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_gmac_rmii_txclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_txclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_gmac_rmii_txclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_gmac_rmii_txclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_txclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_gmac_rmii_rxclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gmac_rmii_rxclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gmac_rmii_rxclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_gmac_rmii_rxclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0xF); \
	_ezchip_macro_read_value_ |= (div&0xF); \
	MA_OUTW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_gmac_rmii_rxclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_rxclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0xf;\
}

#define _ENABLE_CLOCK_clk_gmac_tx_ {}

#define _SWITCH_CLOCK_clk_gmac_tx_SOURCE_clk_gmac_gtxclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tx_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x3)<<24; \
	MA_OUTW(clk_gmac_tx_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_gmac_tx_SOURCE_clk_gmac_mii_txclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tx_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x3)<<24; \
	MA_OUTW(clk_gmac_tx_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_gmac_tx_SOURCE_clk_gmac_rmii_txclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tx_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3<<24); \
	_ezchip_macro_read_value_ |= (0x2&0x3)<<24; \
	MA_OUTW(clk_gmac_tx_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_gmac_tx_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_tx_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x3;\
}

#define _ENABLE_CLOCK_clk_gmac_tx_inv_ {}

#define _SET_CLOCK_clk_gmac_tx_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tx_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<30; \
	MA_OUTW(clk_gmac_tx_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _UNSET_CLOCK_clk_gmac_tx_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tx_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<30; \
	MA_OUTW(clk_gmac_tx_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_POLARITY_STATUS_clk_gmac_tx_inv_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_tx_inv_ctrl_REG_ADDR) >> 30; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_gmac_rx_pre_ {}

#define _SWITCH_CLOCK_clk_gmac_rx_pre_SOURCE_clk_gmac_gr_mii_rxclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rx_pre_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(clk_gmac_rx_pre_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _SWITCH_CLOCK_clk_gmac_rx_pre_SOURCE_clk_gmac_rmii_rxclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rx_pre_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(clk_gmac_rx_pre_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_SOURCE_STATUS_clk_gmac_rx_pre_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_rx_pre_ctrl_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_gmac_rx_inv_ {}

#define _SET_CLOCK_clk_gmac_rx_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rx_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<30; \
	MA_OUTW(clk_gmac_rx_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _UNSET_CLOCK_clk_gmac_rx_inv_POLARITY_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rx_inv_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<30; \
	MA_OUTW(clk_gmac_rx_inv_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_POLARITY_STATUS_clk_gmac_rx_inv_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_rx_inv_ctrl_REG_ADDR) >> 30; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_gmac_rmii_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gmac_rmii_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gmac_rmii_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gmac_rmii_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gmac_rmii_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_rmii_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_gmac_tophyref_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tophyref_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gmac_tophyref_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gmac_tophyref_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tophyref_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gmac_tophyref_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gmac_tophyref_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_tophyref_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_gmac_tophyref_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gmac_tophyref_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x7F); \
	_ezchip_macro_read_value_ |= (div&0x7F); \
	MA_OUTW(clk_gmac_tophyref_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_gmac_tophyref_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gmac_tophyref_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x7f;\
}

#define _ENABLE_CLOCK_clk_spi2ahb_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2ahb_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi2ahb_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi2ahb_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2ahb_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi2ahb_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi2ahb_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi2ahb_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_spi2ahb_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2ahb_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi2ahb_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi2ahb_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2ahb_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi2ahb_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi2ahb_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi2ahb_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_spi2ahb_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2ahb_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_spi2ahb_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_spi2ahb_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi2ahb_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_ezmaster_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ezmaster_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_ezmaster_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_ezmaster_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_ezmaster_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_ezmaster_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_ezmaster_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_ezmaster_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_e24_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_e24_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_e24_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_e24_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_e24_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_e24_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_e24_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_e24_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_e24rtc_toggle_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_e24rtc_toggle_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_e24rtc_toggle_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_e24rtc_toggle_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_e24rtc_toggle_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_e24rtc_toggle_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_e24rtc_toggle_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_e24rtc_toggle_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_qspi_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_qspi_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_qspi_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_qspi_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_qspi_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_qspi_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_qspi_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_qspi_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_qspi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_qspi_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_qspi_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_qspi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_qspi_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_qspi_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_qspi_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_qspi_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_qspi_refclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_qspi_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_qspi_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_qspi_refclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_qspi_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_qspi_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_qspi_refclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_qspi_refclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_qspi_refclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_qspi_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_qspi_refclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_qspi_refclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_qspi_refclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_sec_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sec_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sec_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sec_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sec_ahb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sec_ahb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sec_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sec_ahb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_aes_clk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_aes_clk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_aes_clk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_aes_clk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_aes_clk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_aes_clk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_aes_clk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_aes_clk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_sha_clk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sha_clk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_sha_clk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_sha_clk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_sha_clk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_sha_clk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_sha_clk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_sha_clk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_pka_clk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pka_clk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_pka_clk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_pka_clk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pka_clk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_pka_clk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_pka_clk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pka_clk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_trng_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_trng_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_trng_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_trng_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_trng_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_trng_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_trng_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_trng_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_otp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_otp_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_otp_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_otp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_otp_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_otp_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_otp_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_otp_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_uart0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart0_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart0_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart0_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart0_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart0_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart0_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_uart0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart0_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_uart0_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_uart0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_uart0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_uart1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart1_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart1_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart1_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart1_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart1_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart1_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_uart1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart1_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_uart1_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_uart1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_uart1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_spi0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi0_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi0_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi0_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi0_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi0_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi0_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_spi0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi0_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_spi0_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_spi0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_spi0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_spi1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi1_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi1_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi1_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi1_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi1_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi1_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_spi1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi1_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_spi1_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_spi1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_spi1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_i2c0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c0_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c0_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c0_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c0_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c0_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c0_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_i2c0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c0_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_i2c0_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_i2c0_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_i2c0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c0_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_i2c1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c1_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c1_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c1_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c1_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c1_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c1_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_i2c1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c1_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_i2c1_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_i2c1_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_i2c1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c1_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_gpio_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gpio_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_gpio_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_gpio_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_gpio_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_gpio_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_gpio_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_gpio_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_uart2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart2_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart2_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart2_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart2_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart2_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart2_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_uart2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart2_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_uart2_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_uart2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_uart2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_uart3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart3_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart3_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart3_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart3_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart3_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart3_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_uart3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_uart3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_uart3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_uart3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_uart3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart3_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_uart3_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_uart3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_uart3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_uart3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_uart3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_spi2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi2_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi2_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi2_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi2_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_spi2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi2_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_spi2_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_spi2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_spi2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_spi3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi3_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi3_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi3_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi3_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi3_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi3_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_spi3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_spi3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_spi3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_spi3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_spi3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi3_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_spi3_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_spi3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_spi3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_spi3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_spi3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_i2c2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c2_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c2_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c2_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c2_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c2_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c2_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_i2c2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c2_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_i2c2_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_i2c2_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_i2c2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c2_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_i2c3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c3_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c3_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c3_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c3_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c3_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c3_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_i2c3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_i2c3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_i2c3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_i2c3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_i2c3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c3_core_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_i2c3_core_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_i2c3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_i2c3_core_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_i2c3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_i2c3_core_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_wdtimer_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_wdtimer_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_wdtimer_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_wdtimer_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_wdtimer_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_wdtimer_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_wdtimer_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_wdtimer_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_wdt_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_wdt_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_wdt_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_wdt_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_wdt_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_wdt_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_wdt_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_wdt_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_wdt_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_wdt_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_wdt_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_wdt_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_wdt_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_timer0_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer0_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_timer0_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_timer0_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer0_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_timer0_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_timer0_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer0_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_timer0_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer0_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_timer0_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_timer0_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer0_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_timer1_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer1_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_timer1_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_timer1_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer1_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_timer1_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_timer1_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer1_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_timer1_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer1_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_timer1_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_timer1_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer1_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_timer2_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer2_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_timer2_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_timer2_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer2_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_timer2_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_timer2_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer2_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_timer2_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer2_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_timer2_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_timer2_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer2_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_timer3_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer3_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_timer3_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_timer3_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer3_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_timer3_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_timer3_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer3_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_timer3_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer3_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_timer3_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_timer3_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer3_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_timer4_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer4_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_timer4_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_timer4_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer4_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_timer4_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_timer4_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer4_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_timer4_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer4_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_timer4_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_timer4_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer4_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_timer5_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer5_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_timer5_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_timer5_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer5_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_timer5_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_timer5_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer5_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_timer5_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer5_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_timer5_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_timer5_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer5_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_timer6_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer6_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_timer6_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_timer6_coreclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer6_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_timer6_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_timer6_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer6_coreclk_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_timer6_coreclk_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_timer6_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x3F); \
	_ezchip_macro_read_value_ |= (div&0x3F); \
	MA_OUTW(clk_timer6_coreclk_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_timer6_coreclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_timer6_coreclk_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x3f;\
}

#define _ENABLE_CLOCK_clk_vp6intc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6intc_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_vp6intc_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_vp6intc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_vp6intc_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_vp6intc_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_vp6intc_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_vp6intc_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_pwm_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pwm_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_pwm_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_pwm_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_pwm_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_pwm_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_pwm_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_pwm_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_msi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_msi_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_msi_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_msi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_msi_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_msi_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_msi_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_msi_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_temp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_temp_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_temp_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_temp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_temp_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_temp_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_temp_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_temp_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ENABLE_CLOCK_clk_temp_sense_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_temp_sense_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_temp_sense_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_temp_sense_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_temp_sense_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_temp_sense_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_temp_sense_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_temp_sense_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _DIVIDE_CLOCK_clk_temp_sense_(div) { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_temp_sense_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1F); \
	_ezchip_macro_read_value_ |= (div&0x1F); \
	MA_OUTW(clk_temp_sense_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_DIVIDE_STATUS_clk_temp_sense_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_temp_sense_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1f;\
}

#define _ENABLE_CLOCK_clk_syserr_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_syserr_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(clk_syserr_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _DISABLE_CLOCK_clk_syserr_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(clk_syserr_apb_ctrl_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(clk_syserr_apb_ctrl_REG_ADDR,_ezchip_macro_read_value_); \
}

#define _GET_CLOCK_ENABLE_STATUS_clk_syserr_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(clk_syserr_apb_ctrl_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#endif //_CLKGEN_MACRO_H_
