/**
  ******************************************************************************
  * @file  rstgen_ctrl_macro.h
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

#ifndef _RSTGEN_MACRO_H_
#define _RSTGEN_MACRO_H_

//#define RSTGEN_BASE_ADDR 0x0
#define rstgen_Software_RESET_assert0_REG_ADDR  RSTGEN_BASE_ADDR + 0x0
#define rstgen_Software_RESET_assert1_REG_ADDR  RSTGEN_BASE_ADDR + 0x4
#define rstgen_Software_RESET_assert2_REG_ADDR  RSTGEN_BASE_ADDR + 0x8
#define rstgen_Software_RESET_assert3_REG_ADDR  RSTGEN_BASE_ADDR + 0xC

#define rstgen_Software_RESET_status0_REG_ADDR  RSTGEN_BASE_ADDR + 0x10
#define rstgen_Software_RESET_status1_REG_ADDR  RSTGEN_BASE_ADDR + 0x14
#define rstgen_Software_RESET_status2_REG_ADDR  RSTGEN_BASE_ADDR + 0x18
#define rstgen_Software_RESET_status3_REG_ADDR  RSTGEN_BASE_ADDR + 0x1C

#define _READ_RESET_STATUS_rstgen_rstn_dom3ahb_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dom3ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x1&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dom3ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x0&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dom7ahb_bus_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dom7ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dom7ahb_bus_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rst_u74_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rst_u74_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _CLEAR_RESET_rstgen_rst_u74_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _READ_RESET_STATUS_rstgen_rstn_u74_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_u74_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_u74_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_sgdma2p_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_sgdma2p_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_sgdma2p_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_sgdma2p_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 5; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_sgdma2p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_sgdma2p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dma2pnoc_aix_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 6; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dma2pnoc_aix_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dma2pnoc_aix_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dla_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 7; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dla_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dla_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dlanoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dlanoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dlanoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dla_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 9; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dla_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dla_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rst_vp6_DReset_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 10; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rst_vp6_DReset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _CLEAR_RESET_rstgen_rst_vp6_DReset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _READ_RESET_STATUS_rstgen_rst_vp6_Breset_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 11; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rst_vp6_Breset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _CLEAR_RESET_rstgen_rst_vp6_Breset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vp6_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vp6_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vp6_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vdecbrg_main_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 13; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vdecbrg_main_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vdecbrg_main_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vdec_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 14; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vdec_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vdec_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vdec_bclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 15; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vdec_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vdec_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vdec_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 16; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vdec_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vdec_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vdec_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 17; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vdec_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vdec_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_jpeg_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 18; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_jpeg_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<18); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<18; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>18; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_jpeg_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<18); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<18; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>18; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_jpeg_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 19; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_jpeg_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<19); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<19; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>19; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_jpeg_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<19); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<19; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>19; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_jpeg_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 20; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_jpeg_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<20); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<20; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>20; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_jpeg_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<20); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<20; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>20; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_jpcgc300_main_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 21; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_jpcgc300_main_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<21); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<21; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>21; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_jpcgc300_main_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<21); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<21; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>21; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_gc300_2x_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 22; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_gc300_2x_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<22); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<22; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>22; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_gc300_2x_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<22); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<22; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>22; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_gc300_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 23; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_gc300_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<23); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<23; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>23; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_gc300_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<23); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<23; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>23; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_gc300_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_gc300_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>24; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_gc300_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>24; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_venc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 25; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_venc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<25); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<25; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>25; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_venc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<25); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<25; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>25; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vencbrg_main_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 26; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vencbrg_main_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<26); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<26; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>26; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vencbrg_main_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<26); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<26; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>26; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_venc_bclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 27; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_venc_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<27); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<27; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>27; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_venc_bclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<27); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<27; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>27; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_venc_cclk_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 28; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_venc_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<28); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<28; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>28; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_venc_cclk_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<28); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<28; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>28; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_venc_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 29; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_venc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<29); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<29; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>29; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_venc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<29); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<29; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>29; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_ddrphy_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 30; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_ddrphy_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<30; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>30; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_ddrphy_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<30; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>30; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_noc_rob_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status0_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_noc_rob_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>31; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_noc_rob_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert0_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(rstgen_Software_RESET_assert0_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status0_REG_ADDR)>>31; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_noc_cog_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_noc_cog_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x1&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_noc_cog_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x0&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_hifi4_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_hifi4_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_hifi4_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_hifi4noc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_hifi4noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_hifi4noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rst_hifi4_DReset_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rst_hifi4_DReset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _CLEAR_RESET_rstgen_rst_hifi4_DReset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _READ_RESET_STATUS_rstgen_rst_hifi4_Breset_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rst_hifi4_Breset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _CLEAR_RESET_rstgen_rst_hifi4_Breset_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _READ_RESET_STATUS_rstgen_rstn_usb_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 5; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_usb_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_usb_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_usbnoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 6; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_usbnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_usbnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_sgdma1p_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 7; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_sgdma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_sgdma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dma1p_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dma1p_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_x2c_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 9; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_x2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_x2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_nne_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 10; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_nne_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_nne_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_nne_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 11; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_nne_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_nne_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_nnenoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_nnenoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_nnenoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dlaslv_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 13; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dlaslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dlaslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dspx2c_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 14; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dspx2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dspx2c_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vin_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 15; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vin_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vin_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_ispslv_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 16; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_ispslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_ispslv_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vin_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 17; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vin_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vin_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vinnoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 18; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vinnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<18); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<18; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>18; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vinnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<18); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<18; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>18; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_isp0_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 19; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_isp0_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<19); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<19; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>19; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_isp0_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<19); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<19; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>19; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_isp0noc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 20; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_isp0noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<20); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<20; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>20; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_isp0noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<20); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<20; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>20; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_isp1_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 21; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_isp1_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<21); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<21; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>21; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_isp1_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<21); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<21; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>21; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_isp1noc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 22; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_isp1noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<22); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<22; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>22; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_isp1noc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<22); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<22; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>22; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vout_src_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 23; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vout_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<23); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<23; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>23; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vout_src_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<23); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<23; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>23; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_disp_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_disp_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>24; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_disp_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>24; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_dispnoc_axi_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 25; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_dispnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<25); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<25; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>25; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_dispnoc_axi_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<25); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<25; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>25; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_sdio0_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 26; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_sdio0_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<26); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<26; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>26; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_sdio0_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<26); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<26; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>26; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_sdio1_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 27; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_sdio1_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<27); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<27; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>27; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_sdio1_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<27); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<27; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>27; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_gmac_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 28; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_gmac_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<28); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<28; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>28; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_gmac_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<28); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<28; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>28; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi2ahb_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 29; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi2ahb_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<29); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<29; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>29; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi2ahb_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<29); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<29; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>29; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi2ahb_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 30; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi2ahb_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<30; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>30; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi2ahb_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<30; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>30; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_ezmaster_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status1_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_ezmaster_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>31; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_ezmaster_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert1_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(rstgen_Software_RESET_assert1_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status1_REG_ADDR)>>31; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rst_e24_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rst_e24_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x1&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _CLEAR_RESET_rstgen_rst_e24_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x0&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _READ_RESET_STATUS_rstgen_rstn_qspi_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_qspi_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_qspi_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_qspi_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_qspi_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_qspi_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_qspi_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_qspi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_qspi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_sec_ahb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_sec_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_sec_ahb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_aes_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 5; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_aes_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_aes_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_pka_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 6; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_pka_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_pka_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_sha_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 7; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_sha_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_sha_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_trng_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_trng_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_trng_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_otp_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 9; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_otp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_otp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart0_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 10; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 11; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart1_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 13; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi0_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 14; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 15; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi1_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 16; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 17; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c0_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 18; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<18); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<18; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>18; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c0_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<18); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<18; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>18; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c0_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 19; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<19); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<19; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>19; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c0_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<19); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<19; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>19; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c1_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 20; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<20); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<20; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>20; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c1_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<20); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<20; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>20; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c1_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 21; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<21); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<21; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>21; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c1_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<21); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<21; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>21; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_gpio_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 22; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_gpio_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<22); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<22; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>22; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_gpio_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<22); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<22; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>22; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart2_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 23; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<23); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<23; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>23; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<23); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<23; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>23; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 24; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<24; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>24; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<24); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<24; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>24; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart3_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 25; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<25); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<25; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>25; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<25); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<25; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>25; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_uart3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 26; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_uart3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<26); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<26; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>26; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_uart3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<26); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<26; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>26; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi2_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 27; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<27); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<27; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>27; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<27); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<27; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>27; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 28; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<28); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<28; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>28; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<28); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<28; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>28; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi3_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 29; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<29); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<29; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>29; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<29); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<29; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>29; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_spi3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 30; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_spi3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<30; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>30; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_spi3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<30); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<30; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>30; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c2_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status2_REG_ADDR) >> 31; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<31; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>31; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c2_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert2_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<31); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<31; \
	MA_OUTW(rstgen_Software_RESET_assert2_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status2_REG_ADDR)>>31; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c2_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR); \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x1&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c2_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1); \
	_ezchip_macro_read_value_ |= (0x0&0x1); \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR); \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c3_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 1; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c3_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<1); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<1; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>1; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_i2c3_core_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 2; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_i2c3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_i2c3_core_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<2); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<2; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>2; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_wdtimer_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 3; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_wdtimer_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_wdtimer_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<3); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<3; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>3; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_wdt_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 4; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_wdt_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_wdt_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<4); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<4; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>4; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_timer0_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 5; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_timer0_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_timer0_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<5); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<5; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>5; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_timer1_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 6; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_timer1_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_timer1_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<6); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<6; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>6; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_timer2_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 7; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_timer2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_timer2_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<7); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<7; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>7; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_timer3_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 8; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_timer3_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_timer3_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<8); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<8; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>8; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_timer4_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 9; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_timer4_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_timer4_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<9); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<9; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>9; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_timer5_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 10; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_timer5_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_timer5_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<10); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<10; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>10; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_timer6_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 11; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_timer6_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_timer6_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<11); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<11; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>11; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_vp6intc_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 12; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_vp6intc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_vp6intc_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<12); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<12; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>12; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_pwm_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 13; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_pwm_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_pwm_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<13); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<13; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>13; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_msi_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 14; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_msi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_msi_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<14); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<14; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>14; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_temp_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 15; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_temp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_temp_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<15); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<15; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>15; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_temp_sense_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 16; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_temp_sense_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_temp_sense_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<16); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<16; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>16; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#define _READ_RESET_STATUS_rstgen_rstn_syserr_apb_(_ezchip_macro_read_value_) { \
	_ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_status3_REG_ADDR) >> 17; \
	_ezchip_macro_read_value_ &= 0x1;\
}

#define _ASSERT_RESET_rstgen_rstn_syserr_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x1&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x0); \
}

#define _CLEAR_RESET_rstgen_rstn_syserr_apb_ { \
	uint32_t _ezchip_macro_read_value_=MA_INW(rstgen_Software_RESET_assert3_REG_ADDR); \
	_ezchip_macro_read_value_ &= ~(0x1<<17); \
	_ezchip_macro_read_value_ |= (0x0&0x1)<<17; \
	MA_OUTW(rstgen_Software_RESET_assert3_REG_ADDR,_ezchip_macro_read_value_); \
	do { \
		_ezchip_macro_read_value_ = MA_INW(rstgen_Software_RESET_status3_REG_ADDR)>>17; \
		_ezchip_macro_read_value_ &= 0x1;\
	} while(_ezchip_macro_read_value_!=0x1); \
}

#endif //_RSTGEN_MACRO_H_
