#include "zppm.hpp"
#include "core/robosd_common.hpp"
#include <stdlib.h>
#include <stdio.h>
#include <DAVE.h>                 //Declarations from DAVE Code Generation (includes SFR declaration)

extern "C"{

extern const PWM_SVM_GPIO_t PWM_SVM_0_AT_Pin;

extern const PWM_SVM_GPIO_t PWM_SVM_0_AB_Pin;

extern const PWM_SVM_GPIO_t PWM_SVM_0_BT_Pin; 

extern const PWM_SVM_GPIO_t PWM_SVM_0_BB_Pin;

extern const PWM_SVM_GPIO_t PWM_SVM_0_CT_Pin;

extern const PWM_SVM_GPIO_t PWM_SVM_0_CB_Pin;

extern const DIGITAL_IO_t DIGITAL_IO_PWM_AT;

extern const DIGITAL_IO_t DIGITAL_IO_PWM_AB;

extern const DIGITAL_IO_t DIGITAL_IO_PWM_BT;

extern const DIGITAL_IO_t DIGITAL_IO_PWM_BB;
	
extern const DIGITAL_IO_t DIGITAL_IO_PWM_CT;

extern const DIGITAL_IO_t DIGITAL_IO_PWM_CB;

extern const XMC_CCU8_SLICE_EVENT_CONFIG_t PWM_SVM_0_TrapConfig_ERU;
}


void zppm::periphery_begin(void){
	DAVE_STATUS_t status;
	__disable_irq ();	
	ROBO_APP_ASSERT( DAVE_Init()==DAVE_STATUS_SUCCESS ); 
	//Что мы здесь творим?
	for ( int count = 0U; count < PWM_SVM_NUMBERPHASE; count++)
	{
		XMC_CCU8_SLICE_ConfigureEvent(
			PWM_SVM_0.phase_ptr[count]->slice_ptr
			, XMC_CCU8_SLICE_EVENT_2,
			&PWM_SVM_0_TrapConfig_ERU
		);
	}
//	DIGITAL_IO_SetOutputLow(&DIGITAL_IO_LED_ERR);
//	DIGITAL_IO_SetOutputHigh(&DIGITAL_IO_ENC_ABS);

//	DIGITAL_IO_SetOutputLow(&DIGITAL_IO_OUTA);
//	DIGITAL_IO_SetOutputLow(&DIGITAL_IO_OUTB);
//	DIGITAL_IO_SetOutputLow(&DIGITAL_IO_OUTC);
//	DIGITAL_IO_SetOutputLow(&DIGITAL_IO_OUTD);
}

void zppm::periphery_start(void){
	__enable_irq ();
	XMC_UART_CH_EnableDataTransmission(UART_0.channel);
	PWM_SVM_Start(&PWM_SVM_0);
}

void zppm::periphery_backend_loop(void){
}

void zppm::periphery_frontend_loop(void){
}

void zppm::periphery_priority_loop(void){
}


/*

//силовой преобразователь переходит в режим динамического торможения - ШИМ, соответствующий 0
//(верхнии и нижние ключи всех фаз синхронно работают с 50% шим)

void zppm_periphery_begin(void){


		
		zppm_pwm_power_off();
		zppm_position_query();
		zppm_shared.pwm.umax = 4059; //без 36 тиков для deadtime
		zppm_shared.pwm.zero =2048;
}

void zppm_periphery_loop(void){    

}

//void can_on_receive( uint16_t _id, uint8_t * _data, uint8_t _len ){
//}

#if MEXO_DEBUG_SIGNAL_ENABLE == 1

#endif

#if MEXO_GUARD_ENABLE == 1

void * mexo_ev_guard_enter(void){
	//uint32_t prim = __get_PRIMASK();
	//__disable_irq();
	return 0;//(void *) prim;
}

void mexo_ev_guard_leave(void * _context){
	//int32_t prim = (uint32_t)_context;
	//if(!prim) 
		//__enable_irq();
}
#endif



void mexo_ev_debugSignalOn(void){
		DIGITAL_IO_SetOutputHigh(&DIGITAL_IO_OUTA);	
}

void mexo_ev_debugSignalOff(void){
			DIGITAL_IO_SetOutputLow(&DIGITAL_IO_OUTA);	
}
#endif


//если в serial есть данные вернуть ROBO_ANSW_YES иначе ROBO_ANSW_NO

robo_size_t board_serial_available(void){
	static volatile uint32_t loc_status = 0;
	loc_status = XMC_UART_CH_GetStatusFlag(UART_0.channel);

  if(
		loc_status & ((uint32_t)XMC_UART_CH_STATUS_FLAG_ALTERNATIVE_RECEIVE_INDICATION |                             // UART receiver buffer full 
                (uint32_t)XMC_UART_CH_STATUS_FLAG_RECEIVE_INDICATION)
	)
  {
		return  1;        
	} else {
		return  0;
	}
}


//количество байт, которые можно записать в serial

robo_size_t board_serial_space(void){
	if (((uint32_t)XMC_USIC_CH_GetTransmitBufferStatus(UART_0.channel)) != (uint32_t)XMC_USIC_CH_TBUF_STATUS_BUSY)  // UART is transmitting data or transmit register full (UART busy)
  {   
		return 1;
  } else {
		return 0;
	}
}


//получить байт из serial

uint8_t  board_serial_get(void){
	XMC_UART_CH_ClearStatusFlag(UART_0.channel, ((uint32_t)XMC_UART_CH_STATUS_FLAG_RECEIVE_INDICATION | (uint32_t)XMC_UART_CH_STATUS_FLAG_ALTERNATIVE_RECEIVE_INDICATION));    
	return (uint8_t)UART_0.channel->RBUF;
}

//записать байт из serial

void board_serial_put(uint8_t _data){
  UART_0.channel->TBUF[0U] = _data;
}

//все данные в serial и fifo затереть

void board_serial_reset(void){
}

//получить пакет из serial (если поддержтивается буферизация, иначе - просто заглушка)

robo_size_t board_serial_packet_get(uint8_t * _packet, robo_size_t _max_size){
	return 0;
}

//отправить пакет в serial (если поддержтивается буферизация, иначе - просто заглушку)

robo_result_t board_serial_packet_put(uint8_t * _packet, robo_size_t _size){
	return ROBO_ERROR;
}




//включаются драйверы, величина стартового ШИМ зависит от конкретных драйверов. 
//скорее всего понадобится подтянуть обмотки либо к земле, либо к питанию, но скорее всего к земле

void zppm_pwm_power_boot(void){
    CCU80_CC80->CR1S = CCU80_CC81->CR1S = CCU80_CC82->CR1S = 0;
	  XMC_GPIO_SetMode(PWM_SVM_0_AT_Pin.port, PWM_SVM_0_AT_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3);
    XMC_GPIO_SetMode(PWM_SVM_0_AB_Pin.port, PWM_SVM_0_AB_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3);
    XMC_GPIO_SetMode(PWM_SVM_0_BT_Pin.port, PWM_SVM_0_BT_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3);
    XMC_GPIO_SetMode(PWM_SVM_0_BB_Pin.port, PWM_SVM_0_BB_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3);
    XMC_GPIO_SetMode(PWM_SVM_0_CT_Pin.port, PWM_SVM_0_CT_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3);
		XMC_GPIO_SetMode(PWM_SVM_0_CB_Pin.port, PWM_SVM_0_CB_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL_ALT3); 
}

void zppm_pwm_power_on(void){
	
    CCU80_CC80->CR1S = CCU80_CC81->CR1S = CCU80_CC82->CR1S = 2048;
    PWM_SVM_0.global_ptr->GCSS |= 0x1111U;
}
//вызывается, когда инвертор в рабочем состоянии. В массиве _pwm требуемые значения ШИМ
uint16_t                adc_timer_offset = 0;
void zppm_pwm_set(unsigned int  * _pwm){
	   CCU80_CC80->CR1S = *_pwm++;
    CCU80_CC81->CR1S =  *_pwm++;
    CCU80_CC82->CR1S =  *_pwm;
    
    PWM_SVM_0.global_ptr->GCSS |= 0x1111U;
    
    CCU80_CC80->TIMER = adc_timer_offset;
    CCU80_CC81->TIMER = adc_timer_offset;
    CCU80_CC82->TIMER = adc_timer_offset;
}



//надо сделать так, чтобы все ключи выключились сразу, потому что возможно это происходит в аварийном режиме
После выключения силовой преобразователь некоторое заданное время находится в покое, его нельзя включить сразу

void zppm_pwm_power_off(void){
	CCU80_CC80->CR1S = CCU80_CC81->CR1S = CCU80_CC82->CR1S = 4097;
	PWM_SVM_0.global_ptr->GCSS |= 0x1111U;


	XMC_GPIO_SetMode(PWM_SVM_0_AT_Pin.port, PWM_SVM_0_AT_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
	XMC_GPIO_SetOutputLow(PWM_SVM_0_AT_Pin.port, PWM_SVM_0_AT_Pin.pin);

	XMC_GPIO_SetMode(PWM_SVM_0_AB_Pin.port, PWM_SVM_0_AB_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
	XMC_GPIO_SetOutputLow(PWM_SVM_0_AB_Pin.port, PWM_SVM_0_AB_Pin.pin);

	XMC_GPIO_SetMode(PWM_SVM_0_BT_Pin.port, PWM_SVM_0_BT_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
	XMC_GPIO_SetOutputLow(PWM_SVM_0_BT_Pin.port, PWM_SVM_0_BT_Pin.pin);

	XMC_GPIO_SetMode(PWM_SVM_0_BB_Pin.port, PWM_SVM_0_BB_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
	XMC_GPIO_SetOutputLow(PWM_SVM_0_BB_Pin.port, PWM_SVM_0_BB_Pin.pin);

	XMC_GPIO_SetMode(PWM_SVM_0_CT_Pin.port, PWM_SVM_0_CT_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
	XMC_GPIO_SetOutputLow(PWM_SVM_0_CT_Pin.port, PWM_SVM_0_CT_Pin.pin);

	XMC_GPIO_SetMode(PWM_SVM_0_CB_Pin.port, PWM_SVM_0_CB_Pin.pin, XMC_GPIO_MODE_OUTPUT_PUSH_PULL);
	XMC_GPIO_SetOutputLow(PWM_SVM_0_CB_Pin.port, PWM_SVM_0_CB_Pin.pin);
}


//в большей степени это ритуальная функция
сигнал о том, что силовой преобразователь выключен полностью. Теперь можно его включать

void zppm_pwm_power_shutdown(void){

}

#if MOTOR_POS_SENCE_TYPE ==  MOTOR_POS_SENCE_ABS_SSI_32
//отправить запрос позиции

int zppm_position_query_error_flag = 0;
int zppm_position_query_total_count = 0;
#define SSI_DATA_LEN sizeof(uint32_t)
union{
	uint8_t memo[SSI_DATA_LEN];
	uint32_t  value;
} SSI_Data;

void zppm_position_query(void){
	SSI_Data.value = 0xCCCCCCCC;
	SPI_MASTER_Transfer(&SPI_MASTER_2_SSI, SSI_Data.memo, SSI_Data.memo, SSI_DATA_LEN);
}

//получить позициюю. Если данные по позиции недоступны- возвращать ROBO_ERROR,  иначе ROBO_SUCCESS

robo_result_t  zppm_position_get(uint32_t * _position){
	
	return ROBO_SUCCESS;
}
#endif


void adc_handler(){
	mexo_debSignalOn(MEXO_DEBUG_ADC);
	zppm_shared.adc_raw[0] = ADC_MEASUREMENT_ADV_GetResult(&ADC_MEASUREMENT_ADV_0_i_phase_u);
  zppm_shared.adc_raw[1] = ADC_MEASUREMENT_ADV_GetResult(&ADC_MEASUREMENT_ADV_0_i_phase_v);
  zppm_shared.adc_raw[2] = ADC_MEASUREMENT_ADV_GetResult(&ADC_MEASUREMENT_ADV_0_i_phase_w);
	
	mexo_debSignalOff(MEXO_DEBUG_ADC);
	zppm_periodic_loop();
}

*/

#include "core/robosd_system.hpp"
namespace robo{

	#if ROBO_APP_ENV_TYPE == ROBO_APP_TYPE_KEIL

	time_us_t period_us_ = 1000;
	time_us_t us_ = 0;
	time_ms_t ms_ = 0;
	time_us_t us_acc_ = 0;
	system::context current_context_ = system::context::frontend;
	int locked_ = 0;

	void tick(void){
		us_+=period_us_;
		us_acc_+=period_us_;
		if(us_acc_>=1000){
			us_acc_-=1000;
			ms_++;
		}
	}

	void  system::env::abort(void) {
		//::abort();
		while(true){
		}
	}
	
	void * system::env::critical_enter(void) {
		return nullptr;
	}
	
	void system::env::critical_leave(void * /*context_*/) {
	}
	
	

	bool system::env::is_frontend(void) {
		return current_context_==context::frontend;
	}

	bool system::env::is_backend(void) {
		return current_context_==context::backend;
	}
	

	void* system::env::enter(void) {
		uint32_t prim = __get_PRIMASK();
		__disable_irq();
		return (void *) prim;
		
	}
	
	void system::env::leave(void* _context) {
		int32_t prim = (uint32_t)_context;
		if(!prim) 
			__enable_irq();
	}
	

	void system::env::lock(void) {
		__disable_irq();
		ROBO_APP_ASSERT(locked_ == false);			
		locked_ = true;
	}
	void system::env::unlock(void) {
		ROBO_APP_ASSERT(locked_ == true);			
		locked_ = false;
		__enable_irq();
	}
	

	void system::env::fall(void) {
		ROBO_APP_ASSERT(current_context_==context::frontend);
		current_context_=context::backend;
	}
	
	void system::env::comeback(void) {
		ROBO_APP_ASSERT(current_context_==context::backend);
		current_context_=context::frontend;
	}
	
	time_us_t system::env::time_us(void) {
		return us_;
	}
	
	time_us_t system::env::realtime_us(void) {
		return us_;
	}
	
	time_ms_t system::env::time_ms(void) {			
		return ms_;
	}
	
	random_t system::env::rand(random_t _max) {
		return SysTick->VAL % _max;
	}
	
	void system::env::wakeup(void) {
	}
	
	time_us_t system::env::period_us(void) {
		return period_us_;
	}
	
	void system::env::sleep(void) {
	}
	
	
	void system::env::print( cstr  _s){
	}
	
#if ROBO_APP_ALLOC_ENABLED == 1
	void* system::env::mem_alloc(size_t _size) {
		return malloc(_size);
	}
	void system::env::mem_free(void * _memo) {
		free(_memo);
	}
#endif

	size_t system::env::sprintf(char_t* _dst, size_t _max_sz, cstr _format, va_list _args) {

	#if ROBO_UNICODE_ENABLED == 1
			//size_t sz = vswprintf(_dst, _max_sz, _format, _args);
		size_t sz = vswprintf(_dst, _max_sz, _format, _args);
	#else
			size_t sz = vsprintf(_dst, _format, _args);
	#endif
			if (sz < _max_sz-1) {
				_dst[sz] = 0;
			}
			return sz;

		}
#endif
}