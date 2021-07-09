/*переопределять конкретные параметры так
#undef YOUR_PARAMETR
#define YOUR_PARAMETR  PARAMETR_VALUE
*/
#if (!defined(__board_option)) && defined(__board_common_h)
#define __board_option
#else
#error error of using board_option.h
#endif

/* определять опции так
#define YOUR_OPTION  YOUR_OPTION_VALUE
*/

