#ifndef __zppm_h
#define __zppm_h
#include "board_common.hpp"

class zppm {
	private:
		
		static void app_begin(void);
		static void app_backend_loop(void);
		static void app_frontend_loop(void);
		static void app_priority_loop(void);

		static void periphery_begin(void);
		static void periphery_backend_loop(void);
		static void periphery_frontend_loop(void);
		static void periphery_priority_loop(void);
		static void periphery_start(void);
	
	public:
		static void begin(void){
			periphery_begin();
			app_begin();
			periphery_start();
		}
		static void backend_poll(void){
			app_backend_loop();
			periphery_backend_loop();			
		}
/*
1 - вызывать в отдельном прерывании, если другие realtime  задачи.
например, сетевой протокол манчестер
2 - вызывать в прерывании от ADC, чтобы не плодить сущности
*/
		static void frontend_loop(void){
			periphery_frontend_loop();
			app_frontend_loop();
		}

//вызывать в прерывании от ACP
		static void priority_poll(void){
			periphery_priority_loop();
			app_priority_loop();
		}
};

#endif
