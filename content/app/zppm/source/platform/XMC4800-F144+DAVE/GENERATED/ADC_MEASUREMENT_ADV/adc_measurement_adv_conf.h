/*********************************************************************************************************************
* DAVE APP Name : ADC_MEASUREMENT_ADV       APP Version: 4.0.14
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/* @cond
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
 *
 */

#ifndef ADC_MEASUREMENT_ADV_CONF_H
#define ADC_MEASUREMENT_ADV_CONF_H

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/

#include "ADC_QUEUE/adc_queue.h" 

/**********************************************************************************************************************
 * MACROS
 **********************************************************************************************************************/


/* If a queue request source is used by any of the ADC_MEASUREMENT_ADV APP 
 * Instances this macro is generated*/
#define ADC_MEASUREMENT_ADV_QUEUE_USED (1U)

/* If synchronous conversion is used by any of the ADC_MEASUREMENT_ADV APP
 * Instances this macro is generated*/
#define ADC_MEASUREMENT_ADV_SYNC_USED (1U)

/* If synchronous conversion is not used by all the ADC_MEASUREMENT_ADV APP
 * Instances this macro is generated. Needed for optimization of the code.*/
#define ADC_MEASUREMENT_ADV_SYNC_NOT_ALL_USED (1U)

/* If event configuration is used by any of the ADC_MEASUREMENT_ADV APP
 * Instances this macro is generated.*/
#define ADC_MEASUREMENT_ADV_MUX_USED (1U)

/* If event configuration is not used by all the ADC_MEASUREMENT_ADV APP
 * Instances this macro is generated. Needed for optimization of the code.*/
#define ADC_MEASUREMENT_ADV_MUX_NOT_ALL_USED (1U)

/* If SHS gain apart from 1:1 is needed and an alias channel is used by one of 
 * the ADC_MEASUREMENT_ADV APP Instances this macro is generated. Needed for correct configuration of the gain value.*/
#define ADC_MEASUREMENT_ADV_SHS_GAIN_ALIAS (1U)

/* If FIFO is not used by any of the ADC_MEASUREMENT_ADV APP
 * Instances this macro is generated. The Result register configuration holds only one config structure.*/
#define ADC_MEASUREMENT_ADV_RESULT_REG (1U)

/* If queue request source is need by using ADC_QUEUE APP in any of the ADC_MEASUREMENT_ADV APP
 * Instances this macro is generated.*/
#define ADC_MEASUREMENT_ADV_ADC_QUEUE_USED (1U)

/* If Start after initialization is used by any of the ADC_MEASUREMENT_ADV APP
 * Instances this macro is generated.*/
#define ADC_MEASUREMENT_ADV_START_ADC (1U)


 /* Channel and result related macros for the instance ADC_MEASUREMENT_ADV_0*/
#define ADC_MEASUREMENT_ADV_0_GROUP_PTR  ((XMC_VADC_GROUP_t*)(void*) VADC_G0)

#define ADC_MEASUREMENT_ADV_0_i_phase_u  (ADC_MEASUREMENT_ADV_0_i_phase_u_handle)
#define ADC_MEASUREMENT_ADV_0_i_phase_u_RES  (VADC_G0->RES[4])

#define ADC_MEASUREMENT_ADV_0_i_phase_w  (ADC_MEASUREMENT_ADV_0_i_phase_w_handle)
#define ADC_MEASUREMENT_ADV_0_i_phase_w_RES  (VADC_G1->RES[15])

#define ADC_MEASUREMENT_ADV_0_i_phase_v  (ADC_MEASUREMENT_ADV_0_i_phase_v_handle)
#define ADC_MEASUREMENT_ADV_0_i_phase_v_RES  (VADC_G2->RES[1])

#define ADC_MEASUREMENT_ADV_0_i_power  (ADC_MEASUREMENT_ADV_0_i_power_handle)
#define ADC_MEASUREMENT_ADV_0_i_power_RES  (VADC_G0->RES[5])

#define ADC_MEASUREMENT_ADV_0_v_power  (ADC_MEASUREMENT_ADV_0_v_power_handle)
#define ADC_MEASUREMENT_ADV_0_v_power_RES  (VADC_G1->RES[0])

#define ADC_MEASUREMENT_ADV_0_i_break  (ADC_MEASUREMENT_ADV_0_i_break_handle)
#define ADC_MEASUREMENT_ADV_0_i_break_RES  (VADC_G2->RES[2])

#define ADC_MEASUREMENT_ADV_0_tempsens  (ADC_MEASUREMENT_ADV_0_tempsens_handle)
#define ADC_MEASUREMENT_ADV_0_tempsens_RES  (VADC_G0->RES[15])

#define ADC_MEASUREMENT_ADV_0_dummy_G1CH6  (ADC_MEASUREMENT_ADV_0_dummy_G1CH6_handle)
#define ADC_MEASUREMENT_ADV_0_dummy_G1CH6_RES  (VADC_G1->RES[3])

#define ADC_MEASUREMENT_ADV_0_dummy_G2CH6  (ADC_MEASUREMENT_ADV_0_dummy_G2CH6_handle)
#define ADC_MEASUREMENT_ADV_0_dummy_G2CH6_RES  (VADC_G2->RES[0])

#ifndef VADC_QUEUE_GROUP_0_POSITION_0
#define VADC_QUEUE_GROUP_0_POSITION_0 (0U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

#ifndef VADC_QUEUE_GROUP_0_POSITION_1
#define VADC_QUEUE_GROUP_0_POSITION_1 (1U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

#ifndef VADC_QUEUE_GROUP_0_POSITION_2
#define VADC_QUEUE_GROUP_0_POSITION_2 (2U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

 /* Channel and result related macros for the instance ADC_MEASUREMENT_ADV_1*/
#define ADC_MEASUREMENT_ADV_1_GROUP_PTR  ((XMC_VADC_GROUP_t*)(void*) VADC_G2)

#define ADC_MEASUREMENT_ADV_1_i_phase_w  (ADC_MEASUREMENT_ADV_1_i_phase_w_handle)
#define ADC_MEASUREMENT_ADV_1_i_phase_w_RES  (VADC_G2->RES[10])

#define ADC_MEASUREMENT_ADV_1_v_power  (ADC_MEASUREMENT_ADV_1_v_power_handle)
#define ADC_MEASUREMENT_ADV_1_v_power_RES  (VADC_G2->RES[7])

#define ADC_MEASUREMENT_ADV_1_dummy_G1CH6  (ADC_MEASUREMENT_ADV_1_dummy_G1CH6_handle)
#define ADC_MEASUREMENT_ADV_1_dummy_G1CH6_RES  (VADC_G2->RES[3])

#ifndef VADC_QUEUE_GROUP_2_POSITION_0
#define VADC_QUEUE_GROUP_2_POSITION_0 (0U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

#ifndef VADC_QUEUE_GROUP_2_POSITION_1
#define VADC_QUEUE_GROUP_2_POSITION_1 (1U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

#ifndef VADC_QUEUE_GROUP_2_POSITION_2
#define VADC_QUEUE_GROUP_2_POSITION_2 (2U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

 /* Channel and result related macros for the instance ADC_MEASUREMENT_ADV_2*/
#define ADC_MEASUREMENT_ADV_2_GROUP_PTR  ((XMC_VADC_GROUP_t*)(void*) VADC_G3)

#define ADC_MEASUREMENT_ADV_2_i_phase_v  (ADC_MEASUREMENT_ADV_2_i_phase_v_handle)
#define ADC_MEASUREMENT_ADV_2_i_phase_v_RES  (VADC_G3->RES[4])

#define ADC_MEASUREMENT_ADV_2_i_break  (ADC_MEASUREMENT_ADV_2_i_break_handle)
#define ADC_MEASUREMENT_ADV_2_i_break_RES  (VADC_G3->RES[9])

#define ADC_MEASUREMENT_ADV_2_dummy_G2CH6  (ADC_MEASUREMENT_ADV_2_dummy_G2CH6_handle)
#define ADC_MEASUREMENT_ADV_2_dummy_G2CH6_RES  (VADC_G3->RES[8])

#ifndef VADC_QUEUE_GROUP_3_POSITION_0
#define VADC_QUEUE_GROUP_3_POSITION_0 (0U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

#ifndef VADC_QUEUE_GROUP_3_POSITION_1
#define VADC_QUEUE_GROUP_3_POSITION_1 (1U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif

#ifndef VADC_QUEUE_GROUP_3_POSITION_2
#define VADC_QUEUE_GROUP_3_POSITION_2 (2U)
#else
#error "Redefined the same Queue position. Please change the queue position to a different value in the UI editor of the APP"
#endif


#define ADC_MEASUREMENT_ADV_MAJOR_VERSION (4U) /**< Major version number of ADC_MEASUREMENT_ADV APP*/
#define ADC_MEASUREMENT_ADV_MINOR_VERSION (0U) /**< Minor version number of ADC_MEASUREMENT_ADV APP*/
#define ADC_MEASUREMENT_ADV_PATCH_VERSION (14U) /**< Patch version number of ADC_MEASUREMENT_ADV APP*/

  
#endif /* _ADC_MEASUREMENT_ADV_CONF_H_ */
