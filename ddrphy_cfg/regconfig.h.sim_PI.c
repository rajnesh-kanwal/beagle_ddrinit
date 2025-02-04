/**
  ******************************************************************************
  * @file  regconfig.h.sim_PI.c
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

#include <regconfig.h.sim_PI.h>
#include <regconfig.h.sim_PHY.h>
#include <sys.h>
#include <clkgen_ctrl_macro.h>
#include <comdef.h>
void regconfig_h_sim_pi(uint32_t OMC_APB_BASE_ADDR, uint32_t OMC_SECURE_APB_BASE_ADDR, uint32_t PHY_APB_BASE_ADDR)
{
    apb_write(PHY_APB_BASE_ADDR + (2048 +00 << 2), DENALI_PI_00_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +01 << 2), DENALI_PI_01_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +02 << 2), DENALI_PI_02_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +03 << 2), DENALI_PI_03_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +04 << 2), DENALI_PI_04_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +05 << 2), DENALI_PI_05_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +06 << 2), DENALI_PI_06_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +07 << 2), DENALI_PI_07_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +8 << 2), DENALI_PI_08_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +9 << 2), DENALI_PI_09_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +10 << 2), DENALI_PI_10_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +11 << 2), DENALI_PI_11_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +12 << 2), DENALI_PI_12_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +13 << 2), DENALI_PI_13_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +14 << 2), DENALI_PI_14_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +15 << 2), DENALI_PI_15_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +16 << 2), DENALI_PI_16_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +17 << 2), DENALI_PI_17_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +18 << 2), DENALI_PI_18_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +19 << 2), DENALI_PI_19_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +20 << 2), DENALI_PI_20_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +21 << 2), DENALI_PI_21_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +22 << 2), DENALI_PI_22_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +23 << 2), DENALI_PI_23_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +24 << 2), DENALI_PI_24_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +25 << 2), DENALI_PI_25_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +26 << 2), DENALI_PI_26_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +27 << 2), DENALI_PI_27_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +28 << 2), DENALI_PI_28_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +29 << 2), DENALI_PI_29_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +30 << 2), DENALI_PI_30_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +31 << 2), DENALI_PI_31_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +32 << 2), DENALI_PI_32_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +33 << 2), DENALI_PI_33_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +34 << 2), DENALI_PI_34_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +35 << 2), DENALI_PI_35_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +36 << 2), DENALI_PI_36_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +37 << 2), DENALI_PI_37_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +38 << 2), DENALI_PI_38_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +39 << 2), DENALI_PI_39_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +40 << 2), DENALI_PI_40_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +41 << 2), DENALI_PI_41_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +42 << 2), DENALI_PI_42_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +43 << 2), DENALI_PI_43_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +44 << 2), DENALI_PI_44_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +45 << 2), DENALI_PI_45_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +46 << 2), DENALI_PI_46_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +47 << 2), DENALI_PI_47_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +48 << 2), DENALI_PI_48_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +49 << 2), DENALI_PI_49_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +50 << 2), DENALI_PI_50_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +51 << 2), DENALI_PI_51_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +52 << 2), DENALI_PI_52_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +53 << 2), DENALI_PI_53_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +54 << 2), DENALI_PI_54_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +55 << 2), DENALI_PI_55_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +56 << 2), DENALI_PI_56_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +57 << 2), DENALI_PI_57_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +58 << 2), DENALI_PI_58_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +59 << 2), DENALI_PI_59_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +60 << 2), DENALI_PI_60_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +61 << 2), DENALI_PI_61_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +62 << 2), DENALI_PI_62_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +63 << 2), DENALI_PI_63_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +64 << 2), DENALI_PI_64_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +65 << 2), DENALI_PI_65_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +66 << 2), DENALI_PI_66_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +67 << 2), DENALI_PI_67_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +68 << 2), DENALI_PI_68_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +69 << 2), DENALI_PI_69_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +70 << 2), DENALI_PI_70_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +71 << 2), DENALI_PI_71_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +72 << 2), DENALI_PI_72_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +73 << 2), DENALI_PI_73_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +74 << 2), DENALI_PI_74_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +75 << 2), DENALI_PI_75_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +76 << 2), DENALI_PI_76_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +77 << 2), DENALI_PI_77_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +78 << 2), DENALI_PI_78_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +79 << 2), DENALI_PI_79_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +80 << 2), DENALI_PI_80_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +81 << 2), DENALI_PI_81_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +82 << 2), DENALI_PI_82_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +83 << 2), DENALI_PI_83_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +84 << 2), DENALI_PI_84_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +85 << 2), DENALI_PI_85_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +86 << 2), DENALI_PI_86_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +87 << 2), DENALI_PI_87_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +88 << 2), DENALI_PI_88_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +89 << 2), DENALI_PI_89_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +90 << 2), DENALI_PI_90_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +91 << 2), DENALI_PI_91_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +92 << 2), DENALI_PI_92_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +93 << 2), DENALI_PI_93_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +94 << 2), DENALI_PI_94_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +95 << 2), DENALI_PI_95_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +96 << 2), DENALI_PI_96_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +97 << 2), DENALI_PI_97_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +98 << 2), DENALI_PI_98_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +99 << 2), DENALI_PI_99_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +100 << 2), DENALI_PI_100_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +101 << 2), DENALI_PI_101_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +102 << 2), DENALI_PI_102_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +103 << 2), DENALI_PI_103_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +104 << 2), DENALI_PI_104_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +105 << 2), DENALI_PI_105_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +106 << 2), DENALI_PI_106_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +107 << 2), DENALI_PI_107_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +108 << 2), DENALI_PI_108_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +109 << 2), DENALI_PI_109_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +110 << 2), DENALI_PI_110_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +111 << 2), DENALI_PI_111_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +112 << 2), DENALI_PI_112_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +113 << 2), DENALI_PI_113_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +114 << 2), DENALI_PI_114_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +115 << 2), DENALI_PI_115_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +116 << 2), DENALI_PI_116_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +117 << 2), DENALI_PI_117_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +118 << 2), DENALI_PI_118_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +119 << 2), DENALI_PI_119_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +120 << 2), DENALI_PI_120_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +121 << 2), DENALI_PI_121_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +122 << 2), DENALI_PI_122_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +123 << 2), DENALI_PI_123_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +124 << 2), DENALI_PI_124_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +125 << 2), DENALI_PI_125_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +126 << 2), DENALI_PI_126_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +127 << 2), DENALI_PI_127_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +128 << 2), DENALI_PI_128_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +129 << 2), DENALI_PI_129_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +130 << 2), DENALI_PI_130_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +131 << 2), DENALI_PI_131_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +132 << 2), DENALI_PI_132_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +133 << 2), DENALI_PI_133_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +134 << 2), DENALI_PI_134_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +135 << 2), DENALI_PI_135_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +136 << 2), DENALI_PI_136_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +137 << 2), DENALI_PI_137_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +138 << 2), DENALI_PI_138_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +139 << 2), DENALI_PI_139_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +140 << 2), DENALI_PI_140_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +141 << 2), DENALI_PI_141_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +142 << 2), DENALI_PI_142_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +143 << 2), DENALI_PI_143_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +144 << 2), DENALI_PI_144_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +145 << 2), DENALI_PI_145_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +146 << 2), DENALI_PI_146_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +147 << 2), DENALI_PI_147_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +148 << 2), DENALI_PI_148_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +149 << 2), DENALI_PI_149_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +150 << 2), DENALI_PI_150_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +151 << 2), DENALI_PI_151_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +152 << 2), DENALI_PI_152_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +153 << 2), DENALI_PI_153_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +154 << 2), DENALI_PI_154_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +155 << 2), DENALI_PI_155_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +156 << 2), DENALI_PI_156_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +157 << 2), DENALI_PI_157_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +158 << 2), DENALI_PI_158_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +159 << 2), DENALI_PI_159_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +160 << 2), DENALI_PI_160_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +161 << 2), DENALI_PI_161_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +162 << 2), DENALI_PI_162_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +163 << 2), DENALI_PI_163_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +164 << 2), DENALI_PI_164_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +165 << 2), DENALI_PI_165_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +166 << 2), DENALI_PI_166_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +167 << 2), DENALI_PI_167_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +168 << 2), DENALI_PI_168_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +169 << 2), DENALI_PI_169_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +170 << 2), DENALI_PI_170_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +171 << 2), DENALI_PI_171_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +172 << 2), DENALI_PI_172_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +173 << 2), DENALI_PI_173_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +174 << 2), DENALI_PI_174_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +175 << 2), DENALI_PI_175_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +176 << 2), DENALI_PI_176_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +177 << 2), DENALI_PI_177_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +178 << 2), DENALI_PI_178_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +179 << 2), DENALI_PI_179_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +180 << 2), DENALI_PI_180_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +181 << 2), DENALI_PI_181_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +182 << 2), DENALI_PI_182_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +183 << 2), DENALI_PI_183_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +184 << 2), DENALI_PI_184_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +185 << 2), DENALI_PI_185_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +186 << 2), DENALI_PI_186_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +187 << 2), DENALI_PI_187_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +188 << 2), DENALI_PI_188_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +189 << 2), DENALI_PI_189_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +190 << 2), DENALI_PI_190_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +191 << 2), DENALI_PI_191_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +192 << 2), DENALI_PI_192_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +193 << 2), DENALI_PI_193_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +194 << 2), DENALI_PI_194_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +195 << 2), DENALI_PI_195_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +196 << 2), DENALI_PI_196_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +197 << 2), DENALI_PI_197_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +198 << 2), DENALI_PI_198_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +199 << 2), DENALI_PI_199_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +200 << 2), DENALI_PI_200_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +201 << 2), DENALI_PI_201_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +202 << 2), DENALI_PI_202_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +203 << 2), DENALI_PI_203_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +204 << 2), DENALI_PI_204_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +205 << 2), DENALI_PI_205_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +206 << 2), DENALI_PI_206_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +207 << 2), DENALI_PI_207_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +208 << 2), DENALI_PI_208_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +209 << 2), DENALI_PI_209_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +210 << 2), DENALI_PI_210_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +211 << 2), DENALI_PI_211_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +212 << 2), DENALI_PI_212_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +213 << 2), DENALI_PI_213_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +214 << 2), DENALI_PI_214_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +215 << 2), DENALI_PI_215_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +216 << 2), DENALI_PI_216_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +217 << 2), DENALI_PI_217_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +218 << 2), DENALI_PI_218_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +219 << 2), DENALI_PI_219_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +220 << 2), DENALI_PI_220_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +221 << 2), DENALI_PI_221_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +222 << 2), DENALI_PI_222_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +223 << 2), DENALI_PI_223_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +224 << 2), DENALI_PI_224_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +225 << 2), DENALI_PI_225_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +226 << 2), DENALI_PI_226_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +227 << 2), DENALI_PI_227_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +228 << 2), DENALI_PI_228_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +229 << 2), DENALI_PI_229_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +230 << 2), DENALI_PI_230_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +231 << 2), DENALI_PI_231_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +232 << 2), DENALI_PI_232_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +233 << 2), DENALI_PI_233_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +234 << 2), DENALI_PI_234_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +235 << 2), DENALI_PI_235_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +236 << 2), DENALI_PI_236_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +237 << 2), DENALI_PI_237_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +238 << 2), DENALI_PI_238_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +239 << 2), DENALI_PI_239_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +240 << 2), DENALI_PI_240_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +241 << 2), DENALI_PI_241_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +242 << 2), DENALI_PI_242_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +243 << 2), DENALI_PI_243_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +244 << 2), DENALI_PI_244_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +245 << 2), DENALI_PI_245_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +246 << 2), DENALI_PI_246_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +247 << 2), DENALI_PI_247_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +248 << 2), DENALI_PI_248_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +249 << 2), DENALI_PI_249_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +250 << 2), DENALI_PI_250_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +251 << 2), DENALI_PI_251_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +252 << 2), DENALI_PI_252_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +253 << 2), DENALI_PI_253_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +254 << 2), DENALI_PI_254_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +255 << 2), DENALI_PI_255_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +256 << 2), DENALI_PI_256_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +257 << 2), DENALI_PI_257_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +258 << 2), DENALI_PI_258_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +259 << 2), DENALI_PI_259_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +260 << 2), DENALI_PI_260_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +261 << 2), DENALI_PI_261_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +262 << 2), DENALI_PI_262_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +263 << 2), DENALI_PI_263_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +264 << 2), DENALI_PI_264_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +265 << 2), DENALI_PI_265_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +266 << 2), DENALI_PI_266_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +267 << 2), DENALI_PI_267_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +268 << 2), DENALI_PI_268_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +269 << 2), DENALI_PI_269_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +270 << 2), DENALI_PI_270_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +271 << 2), DENALI_PI_271_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +272 << 2), DENALI_PI_272_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +273 << 2), DENALI_PI_273_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +274 << 2), DENALI_PI_274_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +275 << 2), DENALI_PI_275_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +276 << 2), DENALI_PI_276_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +277 << 2), DENALI_PI_277_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +278 << 2), DENALI_PI_278_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +279 << 2), DENALI_PI_279_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +280 << 2), DENALI_PI_280_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +281 << 2), DENALI_PI_281_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +282 << 2), DENALI_PI_282_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +283 << 2), DENALI_PI_283_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +284 << 2), DENALI_PI_284_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +285 << 2), DENALI_PI_285_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +286 << 2), DENALI_PI_286_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +287 << 2), DENALI_PI_287_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +288 << 2), DENALI_PI_288_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +289 << 2), DENALI_PI_289_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +290 << 2), DENALI_PI_290_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +291 << 2), DENALI_PI_291_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +292 << 2), DENALI_PI_292_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +293 << 2), DENALI_PI_293_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +294 << 2), DENALI_PI_294_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +295 << 2), DENALI_PI_295_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +296 << 2), DENALI_PI_296_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +297 << 2), DENALI_PI_297_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +298 << 2), DENALI_PI_298_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +299 << 2), DENALI_PI_299_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +300 << 2), DENALI_PI_300_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +301 << 2), DENALI_PI_301_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +302 << 2), DENALI_PI_302_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +303 << 2), DENALI_PI_303_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +304 << 2), DENALI_PI_304_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +305 << 2), DENALI_PI_305_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +306 << 2), DENALI_PI_306_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +307 << 2), DENALI_PI_307_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +308 << 2), DENALI_PI_308_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +309 << 2), DENALI_PI_309_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +310 << 2), DENALI_PI_310_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +311 << 2), DENALI_PI_311_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +312 << 2), DENALI_PI_312_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +313 << 2), DENALI_PI_313_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +314 << 2), DENALI_PI_314_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +315 << 2), DENALI_PI_315_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +316 << 2), DENALI_PI_316_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +317 << 2), DENALI_PI_317_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +318 << 2), DENALI_PI_318_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +319 << 2), DENALI_PI_319_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +320 << 2), DENALI_PI_320_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +321 << 2), DENALI_PI_321_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +322 << 2), DENALI_PI_322_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +323 << 2), DENALI_PI_323_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +324 << 2), DENALI_PI_324_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +325 << 2), DENALI_PI_325_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +326 << 2), DENALI_PI_326_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +327 << 2), DENALI_PI_327_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +328 << 2), DENALI_PI_328_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +329 << 2), DENALI_PI_329_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +330 << 2), DENALI_PI_330_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +331 << 2), DENALI_PI_331_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +332 << 2), DENALI_PI_332_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +333 << 2), DENALI_PI_333_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +334 << 2), DENALI_PI_334_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +335 << 2), DENALI_PI_335_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +336 << 2), DENALI_PI_336_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +337 << 2), DENALI_PI_337_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +338 << 2), DENALI_PI_338_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +339 << 2), DENALI_PI_339_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +340 << 2), DENALI_PI_340_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +341 << 2), DENALI_PI_341_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +342 << 2), DENALI_PI_342_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +343 << 2), DENALI_PI_343_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +344 << 2), DENALI_PI_344_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +345 << 2), DENALI_PI_345_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +346 << 2), DENALI_PI_346_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +347 << 2), DENALI_PI_347_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +348 << 2), DENALI_PI_348_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +349 << 2), DENALI_PI_349_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +350 << 2), DENALI_PI_350_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +351 << 2), DENALI_PI_351_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +352 << 2), DENALI_PI_352_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +353 << 2), DENALI_PI_353_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +354 << 2), DENALI_PI_354_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +355 << 2), DENALI_PI_355_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +356 << 2), DENALI_PI_356_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +357 << 2), DENALI_PI_357_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +358 << 2), DENALI_PI_358_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +359 << 2), DENALI_PI_359_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +360 << 2), DENALI_PI_360_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +361 << 2), DENALI_PI_361_DATA);
    apb_write(PHY_APB_BASE_ADDR + (2048 +362 << 2), DENALI_PI_362_DATA);
}
