/*
здесь переопределяются параметры MEXO_..., 
управляющие поведением 
всех компонент mexo 
*/


#if (!defined(__mexo_option)) && defined(__mexo_common_h)
#define __mexo_option
#else
#error error of using mexo_option.h
#endif

#define MEXO_SYSCLOCK_ENABLE 0

//mexo working in acp interrupt
#define MEXO_LOCK_ENABLE 0 

#define MEXO_WATCH_DOG_ENABLE 1


#ifdef IMITATION_MODEL
	#define MEXO_DEBUG_SIGNAL_ENABLE 0
	#define MEXO_VARTEBLE_LEVEL MEXO_VARTEBLE_LEVEL_FULL
#else
	//mexo can  can kill message queue and buffer data
	#define MEXO_GUARD_ENABLE 1
	#define MEXO_DEBUG_SIGNAL_ENABLE 1
	#define MEXO_VARTEBLE_LEVEL MEXO_VARTEBLE_LEVEL_SETUP
#endif


#define MEXO_SLOT_COUNT 16
#define POSITINER_MAX_ERR  MEXO_LONG_SIGNAL_T(0.001)

#include "board_common.h"

#define MEXO_DEBUG_ADC (MEXO_DEBUG_VERB_USER+1)
