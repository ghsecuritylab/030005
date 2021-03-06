/****************************************************************************** 
* 
* Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved. 
* 
* This program is free software; you can redistribute it and/or modify it 
* under the terms of version 2 of the GNU General Public License as 
* published by the Free Software Foundation. 
* 
* This program is distributed in the hope that it will be useful, but WITHOUT 
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or 
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for 
* more details. 
* 
* You should have received a copy of the GNU General Public License along with 
* this program; if not, write to the Free Software Foundation, Inc., 
* 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA 
* 
* 
******************************************************************************/

#ifndef __INC_HAL8192CE_PHY_IMG_H
#define __INC_HAL8192CE_PHY_IMG_H

/*Created on  2011/10/ 5,  8: 2*/

/*
#if (DM_ODM_SUPPORT_TYPE == ODM_MP)
	#include <Mp_Precomp.h>
#elif (DM_ODM_SUPPORT_TYPE == ODM_CE)
	#include "../odm_types.h"
#endif
*/

//#include "../Mp_Precomp.h"

#if (RTL8192CE_HWIMG_SUPPORT == 1)

#define Rtl8192CEPHY_REG_2TArrayLength 372
extern const u4Byte Rtl8192CEPHY_REG_2TArray[Rtl8192CEPHY_REG_2TArrayLength];
#define Rtl8192CEPHY_REG_1TArrayLength 372
extern const u4Byte Rtl8192CEPHY_REG_1TArray[Rtl8192CEPHY_REG_1TArrayLength];
#define Rtl8192CEPHY_ChangeTo_1T1RArrayLength 1
extern const u4Byte Rtl8192CEPHY_ChangeTo_1T1RArray[Rtl8192CEPHY_ChangeTo_1T1RArrayLength];
#define Rtl8192CEPHY_ChangeTo_1T2RArrayLength 1
extern const u4Byte Rtl8192CEPHY_ChangeTo_1T2RArray[Rtl8192CEPHY_ChangeTo_1T2RArrayLength];
#define Rtl8192CEPHY_ChangeTo_2T2RArrayLength 1
extern const u4Byte Rtl8192CEPHY_ChangeTo_2T2RArray[Rtl8192CEPHY_ChangeTo_2T2RArrayLength];
#define Rtl8192CEPHY_REG_Array_PGLength 48
extern const u4Byte Rtl8192CEPHY_REG_Array_PG[Rtl8192CEPHY_REG_Array_PGLength];
#define Rtl8192CEPHY_REG_Array_MPLength 4
extern const u4Byte Rtl8192CEPHY_REG_Array_MP[Rtl8192CEPHY_REG_Array_MPLength];
#define Rtl8192CERadioA_2TArrayLength 282
extern const u4Byte Rtl8192CERadioA_2TArray[Rtl8192CERadioA_2TArrayLength];
#define Rtl8192CERadioB_2TArrayLength 282
extern const u4Byte Rtl8192CERadioB_2TArray[Rtl8192CERadioB_2TArrayLength];
#define Rtl8192CERadioA_1TArrayLength 282
extern const u4Byte Rtl8192CERadioA_1TArray[Rtl8192CERadioA_1TArrayLength];
#define Rtl8192CERadioB_1TArrayLength 1
extern const u4Byte Rtl8192CERadioB_1TArray[Rtl8192CERadioB_1TArrayLength];
#define Rtl8192CERadioB_GM_ArrayLength 1
extern const u4Byte Rtl8192CERadioB_GM_Array[Rtl8192CERadioB_GM_ArrayLength];

#else

#define Rtl8192CEPHY_REG_2TArrayLength 1
extern const u1Byte Rtl8192CEFwPHY_REG_2TArray[Rtl8192CEPHY_REG_2TArrayLength];
#define Rtl8192CEPHY_REG_1TArrayLength 1
extern const u1Byte Rtl8192CEFwPHY_REG_1TArray[Rtl8192CEPHY_REG_1TArrayLength];
#define Rtl8192CEPHY_ChangeTo_1T1RArrayLength 1
extern const u1Byte Rtl8192CEFwPHY_ChangeTo_1T1RArray[Rtl8192CEPHY_ChangeTo_1T1RArrayLength];
#define Rtl8192CEPHY_ChangeTo_1T2RArrayLength 1
extern const u4Byte Rtl8192CEPHY_ChangeTo_1T2RArray[Rtl8192CEPHY_ChangeTo_1T2RArrayLength];
#define Rtl8192CEPHY_ChangeTo_2T2RArrayLength 1
extern const u4Byte Rtl8192CEPHY_ChangeTo_2T2RArray[Rtl8192CEPHY_ChangeTo_2T2RArrayLength];
#define Rtl8192CEPHY_REG_Array_PGLength 1
extern const u4Byte Rtl8192CEPHY_REG_Array_PG[Rtl8192CEPHY_REG_Array_PGLength];
#define Rtl8192CEPHY_REG_Array_MPLength 1
extern const u4Byte Rtl8192CEPHY_REG_Array_MP[Rtl8192CEPHY_REG_Array_MPLength];
#define Rtl8192CERadioA_2TArrayLength 1
extern const u4Byte Rtl8192CERadioA_2TArray[Rtl8192CERadioA_2TArrayLength];
#define Rtl8192CERadioB_2TArrayLength 1
extern const u4Byte Rtl8192CERadioB_2TArray[Rtl8192CERadioB_2TArrayLength];
#define Rtl8192CERadioA_1TArrayLength 1
extern const u4Byte Rtl8192CERadioA_1TArray[Rtl8192CERadioA_1TArrayLength];
#define Rtl8192CERadioB_1TArrayLength 1
extern const u4Byte Rtl8192CERadioB_1TArray[Rtl8192CERadioB_1TArrayLength];
#define Rtl8192CERadioB_GM_ArrayLength 1
extern const u4Byte Rtl8192CERadioB_GM_Array[Rtl8192CERadioB_GM_ArrayLength];


/*
#define Rtl8192CEAGCTAB_2TArrayLength 320
extern u4Byte Rtl8192CEAGCTAB_2TArray[Rtl8192CEAGCTAB_2TArrayLength];
#define Rtl8192CEAGCTAB_1TArrayLength 320
extern u4Byte Rtl8192CEAGCTAB_1TArray[Rtl8192CEAGCTAB_1TArrayLength];
*/


#endif //#if (RTL8192CE_HWIMG_SUPPORT == 1)

#endif //__INC_HAL8192CE_FW_IMG_H
