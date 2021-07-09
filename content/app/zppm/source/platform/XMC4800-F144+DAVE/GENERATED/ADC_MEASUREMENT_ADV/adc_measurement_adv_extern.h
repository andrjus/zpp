/*********************************************************************************************************************
* DAVE APP Name : ADC_MEASUREMENT_ADV       APP Version: 4.0.14
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/*
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015-2016, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2015-10-09:
 *     - Initial version for DAVEv4.<BR>
 *
 * 2015-10-20:
 *     - Documentation updated.<BR>
 *
 * 2015-12-15:
 *     - Added support for XMC4300 devices.<BR>
 *
 * 2016-01-18:
 *     - 1.Internal consumption of request source.<BR>
 *     - 2.Support for synchronized conversion reduced from 8 master channels to 4 .<BR>
 *     - 3.Converted the SetBoundary() API from public API to private API .<BR>
 *     - 4.Updated all APIs for the Internal consumption of request source.<BR>
 * 
 *
 * 2016-02-05:
 *     - Documentation updated.<BR>
 * 
 * 2016-03-18:
 *     - Added consumption of the GLOBAL ICLASS -1 for Sync. Conversions.<BR>
 *     - Added consumption of the result register-0 for subtraction mode.<BR>
 *     - Removed ADC_MEASUREMENT_ADV_SetUniformConversion().<BR>
 *     - New API ADC_MEASUREMENT_ADV_SetIclass() added to configure the GLOBAL ICLASS for Slaves. <BR>
 *
 * 2016-04-26:
 *     - The synchronized conversion in a master slave configuration is currently not supported.<BR>
 *
 * 2016-06-17:
 *     - The synchronized conversion is supported.<BR>
 *     - Modified the Sync initialization sequence to configure the EVAL bits in the slave groups.<BR>
 *
 * 2016-08-18:
 *     - Minimum sample time at low frequencies changed to incorporate Errata ADC_AI.H006 and ADC_AI.H007.
 *
 * @endcond
 *
 */

   
#ifndef ADC_MEASUREMENT_ADV_EXTERN_H
#define ADC_MEASUREMENT_ADV_EXTERN_H

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
 
/**********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 * EXTERN DECLARATIONS
 ***********************************************************************************************************************/


extern const ADC_MEASUREMENT_ADV_t ADC_MEASUREMENT_ADV_0;

extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_i_phase_u_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_i_phase_w_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_i_phase_v_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_i_power_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_v_power_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_i_break_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_tempsens_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_dummy_G1CH6_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_0_dummy_G2CH6_handle;
extern const ADC_MEASUREMENT_ADV_t ADC_MEASUREMENT_ADV_1;

extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_1_i_phase_w_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_1_v_power_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_1_dummy_G1CH6_handle;
extern const ADC_MEASUREMENT_ADV_t ADC_MEASUREMENT_ADV_2;

extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_2_i_phase_v_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_2_i_break_handle;
extern const ADC_MEASUREMENT_ADV_CHANNEL_t  ADC_MEASUREMENT_ADV_2_dummy_G2CH6_handle;
#endif /* ADC_MEASUREMENT_ADV_EXTERN_H */

