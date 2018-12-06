/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_acf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 04 22 2013 kh.hung
 * [ALPS00580843] [MT6572tdv1_phone[lca]][music][Symbio][Free test] ­µ?Œœ©ñŸ¹Œœ©ñ­µ?ªº?­µ?€j?€p¡A€£?©w
 * Use default DRC setting.
 * 
 * Review: http://mtksap20:8080/go?page=NewReview&reviewid=59367
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_ACF_DEFAULT_H
#define AUDIO_ACF_DEFAULT_H



#if defined(MTK_AUDIO_BLOUD_CUSTOMPARAMETER_V5)
/* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
 #define BES_LOUDNESS_ACF_L_HPF_FC       800
#define BES_LOUDNESS_ACF_L_HPF_ORDER    4
#define BES_LOUDNESS_ACF_L_BPF_FC       4000, 500, 2000, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_L_BPF_BW       1421, 284, 1421, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_L_BPF_GAIN     6 << 8, -6 << 8, 6 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8
#define BES_LOUDNESS_ACF_L_LPF_FC       0
#define BES_LOUDNESS_ACF_L_LPF_ORDER    0
#define BES_LOUDNESS_ACF_R_HPF_FC       800
#define BES_LOUDNESS_ACF_R_HPF_ORDER    4
#define BES_LOUDNESS_ACF_R_BPF_FC       4000, 500, 2000, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_R_BPF_BW       1421, 284, 1421, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_R_BPF_GAIN     6 << 8, -6 << 8, 6 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8
#define BES_LOUDNESS_ACF_R_LPF_FC       0
#define BES_LOUDNESS_ACF_R_LPF_ORDER    0
	
#define BES_LOUDNESS_ACF_SEP_LR_FILTER  0

#define BES_LOUDNESS_ACF_WS_GAIN_MAX    0
#define BES_LOUDNESS_ACF_WS_GAIN_MIN    0
#define BES_LOUDNESS_ACF_FILTER_FIRST   0

#define BES_LOUDNESS_ACF_NUM_BANDS      0
#define BES_LOUDNESS_ACF_FLT_BANK_ORDER 0
#define BES_LOUDNESS_ACF_DRC_DELAY      0
#define BES_LOUDNESS_ACF_CROSSOVER_FREQ 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_SB_MODE        0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_SB_GAIN        0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_GAIN_MAP_IN    \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_GAIN_MAP_OUT   \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0,                  \
        0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_ATT_TIME       \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_REL_TIME       \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_ACF_HYST_TH        \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0,               \
        0, 0, 0, 0, 0, 0

#define BES_LOUDNESS_ACF_LIM_TH     0
#define BES_LOUDNESS_ACF_LIM_GN     0
#define BES_LOUDNESS_ACF_LIM_CONST  0
#define BES_LOUDNESS_ACF_LIM_DELAY  0

#elif defined(MTK_AUDIO_BLOUD_CUSTOMPARAMETER_V4)              
/* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
    #define BES_LOUDNESS_HSF_COEFF \
    0x07DA170A, 0xF054253E, 0x07D1C95A, 0x7D56C298, 0x00000000, \
	0x07D6C2CB, 0xF05B867E, 0x07CDBD5F, 0x7D19C2D2, 0x00000000, \
	0x07C751CE, 0xF07DBC74, 0x07BAFE49, 0x7BFFC3DA, 0x00000000, \
	0x07B4AD39, 0xF0A6FF56, 0x07A46981, 0x7AA6C515, 0x00000000, \
	0x07AE1CEE, 0xF0B5836A, 0x079C79B2, 0x7A2CC583, 0x00000000, \
	0x078FC91E, 0xF0F882BF, 0x0777E4C0, 0x77F1C777, 0x00000000, \
	0x076B705A, 0xF148A5E6, 0x074C3E63, 0x7538C9C0, 0x00000000, \
	0x075EB726, 0xF164A91C, 0x073D0346, 0x7441CA88, 0x00000000, \
	0x07247309, 0xF1E4AE1A, 0x06F7957D, 0x6FC0CE05, 0x00000000, \
\
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, \
	0x08000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000 
   

    /* Compensation Filter BPF coeffs: default all pass filter      */ 
    #define BES_LOUDNESS_BPF_COEFF \
    0x3FD481A8,0x3EFF7E57,0xC12C0000, \ 
    0x3FD081DA,0x3EE97E25,0xC1460000, \ 
    0x3FBE82D7,0x3E817D28,0xC1C00000, \ 
    0x3FA98440,0x3E037BBF,0xC2520000, \ 
    0x3FA184CE,0x3DD77B31,0xC2860000, \ 
    0x3F7E87BD,0x3D0C7842,0xC3740000, \ 
\
    0x3FD481C0,0x3EFF7E3F,0xC12C0000, \ 
    0x3FD081F5,0x3EE97E0A,0xC1460000, \ 
    0x3FBE830B,0x3E817CF4,0xC1C00000, \ 
    0x3FA9849C,0x3E037B63,0xC2520000, \ 
    0x3FA1853A,0x3DD77AC5,0xC2860000, \ 
    0x3F7E8889,0x3D0C7776,0xC3740000, \
\
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \         
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \     
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \         
\    
 	0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \         
\
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000, \ 
    0x40000000,0x00000000,0x00000000     
    
    #define BES_LOUDNESS_LPF_COEFF \
    0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000,\ 
	0x40000000, 0x00000000, 0x00000000 

    #define BES_LOUDNESS_WS_GAIN_MAX  0x399A
           
    #define BES_LOUDNESS_WS_GAIN_MIN  0x2666
           
    #define BES_LOUDNESS_FILTER_FIRST  0
           
    #define BES_LOUDNESS_GAIN_MAP_IN \
    -45, -35, -19, -18,  0
   
    #define BES_LOUDNESS_GAIN_MAP_OUT \            
    0, 12, 12, 12, 0

	#define BES_LOUDNESS_ATT_TIME	164
	#define BES_LOUDNESS_REL_TIME	16400
#else
	 /* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
    #define BES_LOUDNESS_HSF_COEFF \
    0x7DA1709,0xF054253E,0x7D1C95A,0x7D56C298, \
    0x7D6C2CA,0xF05B867F,0x7CDBD5F,0x7D19C2D1, \
    0x7C751CD,0xF07DBC74,0x7BAFE48,0x7BFEC3DA, \
    0x7B4AD39,0xF0A6FF57,0x7A46980,0x7AA5C515, \
    0x7AE1CEE,0xF0B5836B,0x79C79B1,0x7A2BC583, \
    0x78FC91E,0xF0F882BF,0x777E4BF,0x77F0C777, \
    0x76B705A,0xF148A5E6,0x74C3E63,0x7537C9BF, \
    0x75EB726,0xF164A91C,0x73D0346,0x7440CA88, \
    0x7247308,0xF1E4AE1B,0x6F7957D,0x6FC0CE05   

    /* Compensation Filter BPF coeffs: default all pass filter      */ 
    #define BES_LOUDNESS_BPF_COEFF \
    0x3FD481A8,0x3EFF7E57,0xC12C0000, \ 
    0x3FD081DA,0x3EE97E25,0xC1460000, \ 
    0x3FBE82D7,0x3E817D28,0xC1C00000, \ 
    0x3FA98440,0x3E037BBF,0xC2520000, \ 
    0x3FA184CE,0x3DD77B31,0xC2860000, \ 
    0x3F7E87BD,0x3D0C7842,0xC3740000, \ 
\
    0x3FD481C0,0x3EFF7E3F,0xC12C0000, \ 
    0x3FD081F5,0x3EE97E0A,0xC1460000, \ 
    0x3FBE830B,0x3E817CF4,0xC1C00000, \ 
    0x3FA9849C,0x3E037B63,0xC2520000, \ 
    0x3FA1853A,0x3DD77AC5,0xC2860000, \ 
    0x3F7E8889,0x3D0C7776,0xC3740000, \ 
\
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
\
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0, \ 
    0x0,0x0,0x0       
    
    #define BES_LOUDNESS_DRC_FORGET_TABLE \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000, \
    0x00000000, 0x00000000   

    #define BES_LOUDNESS_WS_GAIN_MAX  0
           
    #define BES_LOUDNESS_WS_GAIN_MIN  0
           
    #define BES_LOUDNESS_FILTER_FIRST  0
           
    #define BES_LOUDNESS_GAIN_MAP_IN \
    0, 0, 0, 0,  0
              
    #define BES_LOUDNESS_GAIN_MAP_OUT \            
    0, 0, 0, 0, 0   
#endif
#endif
