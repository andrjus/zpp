
/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015, Infineon Technologies AG
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
 * 2014-06-16:
 *     - Initial version<br>
 * 2015-08-28:
 *     - Added CLOCK_XMC1_Init conditionally
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "DAVE.h"

/***********************************************************************************************************************
 * API IMPLEMENTATION
 **********************************************************************************************************************/

/*******************************************************************************
 * @brief This function initializes the APPs Init Functions.
 *
 * @param[in]  None
 *
 * @return  DAVE_STATUS_t <BR>
 ******************************************************************************/
DAVE_STATUS_t DAVE_Init(void)
{
  DAVE_STATUS_t init_status;
  
  init_status = DAVE_STATUS_SUCCESS;
     /** @Initialization of APPs Init Functions */
     init_status = (DAVE_STATUS_t)CLOCK_XMC4_Init(&CLOCK_XMC4_0);

  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_LED_ERR */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_LED_ERR); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of UART APP instance UART_0 */
	 init_status = (DAVE_STATUS_t)UART_Init(&UART_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of PWM_SVM APP instance PWM_SVM_0 */
	 init_status = (DAVE_STATUS_t)PWM_SVM_Init(&PWM_SVM_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INTERRUPT_ADC */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INTERRUPT_ADC); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of CAN_NODE APP instance CAN_NODE_0 */
	 init_status = (DAVE_STATUS_t)CAN_NODE_Init(&CAN_NODE_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INTERRUPT_CAN */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INTERRUPT_CAN); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_HALL_U */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_HALL_U); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_HALL_W */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_HALL_W); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_HALL_V */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_HALL_V); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of SPI_MASTER APP instance SPI_MASTER_0_FLASH */
	 init_status = (DAVE_STATUS_t)SPI_MASTER_Init(&SPI_MASTER_0_FLASH); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of ADC_MEASUREMENT_ADV APP instance ADC_MEASUREMENT_ADV_0 */
	 init_status = (DAVE_STATUS_t)ADC_MEASUREMENT_ADV_Init(&ADC_MEASUREMENT_ADV_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of ADC_MEASUREMENT_ADV APP instance ADC_MEASUREMENT_ADV_1 */
	 init_status = (DAVE_STATUS_t)ADC_MEASUREMENT_ADV_Init(&ADC_MEASUREMENT_ADV_1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of ADC_MEASUREMENT_ADV APP instance ADC_MEASUREMENT_ADV_2 */
	 init_status = (DAVE_STATUS_t)ADC_MEASUREMENT_ADV_Init(&ADC_MEASUREMENT_ADV_2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of E_EEPROM_XMC4 APP instance E_EEPROM_XMC4_0 */
	 init_status = (DAVE_STATUS_t)E_EEPROM_XMC4_Init(&E_EEPROM_XMC4_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INTERRUPT_0 */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INTERRUPT_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of SPI_MASTER APP instance SPI_MASTER_1_RES */
	 init_status = (DAVE_STATUS_t)SPI_MASTER_Init(&SPI_MASTER_1_RES); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of SPI_MASTER APP instance SPI_MASTER_2_SSI */
	 init_status = (DAVE_STATUS_t)SPI_MASTER_Init(&SPI_MASTER_2_SSI); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_ENC_ABS */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_ENC_ABS); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_LED_RUN */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_LED_RUN); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_OUTA */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_OUTA); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_OUTB */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_OUTB); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_OUTC */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_OUTC); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_OUTD */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_OUTD); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_INA */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_INA); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_INB */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_INB); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_INC */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_INC); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_IND */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_IND); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_DETECTOR APP instance EVENT_DETECTOR_STO1 */
	 init_status = (DAVE_STATUS_t)EVENT_DETECTOR_Init(&EVENT_DETECTOR_STO1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_DETECTOR APP instance EVENT_DETECTOR_STO2 */
	 init_status = (DAVE_STATUS_t)EVENT_DETECTOR_Init(&EVENT_DETECTOR_STO2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_STO1 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_STO1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of DIGITAL_IO APP instance DIGITAL_IO_STO2 */
	 init_status = (DAVE_STATUS_t)DIGITAL_IO_Init(&DIGITAL_IO_STO2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_GENERATOR APP instance EVENT_GENERATOR_0 */
	 init_status = (DAVE_STATUS_t)EVENT_GENERATOR_Init(&EVENT_GENERATOR_0); 
   }  
  return init_status;
} /**  End of function DAVE_Init */

