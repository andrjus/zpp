#if (!defined(__robo_app_tunning_hpp)) && defined(__robosd_common_hpp)
#define __robo_app_tunning_hpp
#else
#error error of using robo_app_tunning.hpp
#endif

#include "stddef.h"

#define ROBO_APP_SYSTEM_ENABLED	1
#define ROBO_APP_TYPE_KEIL			101
#define ROBO_APP_ENV_TYPE				ROBO_APP_TYPE_KEIL
#define ROBO_MODULE_ENABLED			0
#define ROBO_APP_ALLOC_TYPE			ROBO_APP_TYPE_KEIL