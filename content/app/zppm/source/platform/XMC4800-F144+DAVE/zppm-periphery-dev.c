#include <DAVE.h>

const PWM_SVM_GPIO_t PWM_SVM_0_AT_Pin =
{
	.port = (XMC_GPIO_PORT_t *)PORT5_BASE, 
	.pin  = 11U
};

const PWM_SVM_GPIO_t PWM_SVM_0_AB_Pin =
{
	.port = (XMC_GPIO_PORT_t *)PORT5_BASE, 
	.pin = 8U
};

const PWM_SVM_GPIO_t PWM_SVM_0_BT_Pin =
{
	.port = (XMC_GPIO_PORT_t *)PORT5_BASE, 
	.pin = 10U
}; 

const PWM_SVM_GPIO_t PWM_SVM_0_BB_Pin =
{
	.port = (XMC_GPIO_PORT_t *)PORT2_BASE, 
	.pin = 15U
};

const PWM_SVM_GPIO_t PWM_SVM_0_CT_Pin =
{
	.port = (XMC_GPIO_PORT_t *)PORT5_BASE, 
	.pin = 9U
}; 

const PWM_SVM_GPIO_t PWM_SVM_0_CB_Pin =
{
	.port = (XMC_GPIO_PORT_t *)PORT2_BASE, 
	.pin = 14U
};

const DIGITAL_IO_t DIGITAL_IO_PWM_AT =
{
	.gpio_port = XMC_GPIO_PORT5,
	.gpio_pin = 11U,
	.gpio_config = {
	.mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
	.output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_MEDIUM_EDGE,},
	.hwctrl = XMC_GPIO_HWCTRL_DISABLED
};

const DIGITAL_IO_t DIGITAL_IO_PWM_AB =
{
	.gpio_port = XMC_GPIO_PORT5,
	.gpio_pin = 8U,
	.gpio_config = {
	.mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
	.output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_MEDIUM_EDGE,},
	.hwctrl = XMC_GPIO_HWCTRL_DISABLED
};

const DIGITAL_IO_t DIGITAL_IO_PWM_BT =
{
	.gpio_port = XMC_GPIO_PORT5,
	.gpio_pin = 10U,
	.gpio_config = {
	.mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
	.output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_MEDIUM_EDGE,},
	.hwctrl = XMC_GPIO_HWCTRL_DISABLED
};

const DIGITAL_IO_t DIGITAL_IO_PWM_BB =
{
	.gpio_port = XMC_GPIO_PORT2,
	.gpio_pin = 15U,
	.gpio_config = {
	.mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
	.output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_MEDIUM_EDGE,},
	.hwctrl = XMC_GPIO_HWCTRL_DISABLED
};

const DIGITAL_IO_t DIGITAL_IO_PWM_CT =
{
	.gpio_port = XMC_GPIO_PORT5,
	.gpio_pin = 9U,
	.gpio_config = {
	.mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
	.output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_MEDIUM_EDGE,},
	.hwctrl = XMC_GPIO_HWCTRL_DISABLED
};

const DIGITAL_IO_t DIGITAL_IO_PWM_CB =
{
	.gpio_port = XMC_GPIO_PORT2,
	.gpio_pin = 14U,
	.gpio_config = {
	.mode = XMC_GPIO_MODE_OUTPUT_PUSH_PULL,
	.output_level = XMC_GPIO_OUTPUT_LEVEL_LOW,
	.output_strength = XMC_GPIO_OUTPUT_STRENGTH_STRONG_MEDIUM_EDGE,},
	.hwctrl = XMC_GPIO_HWCTRL_DISABLED
};

const XMC_CCU8_SLICE_EVENT_CONFIG_t PWM_SVM_0_TrapConfig_ERU =
{
	.mapped_input  = XMC_CCU8_SLICE_INPUT_J,
	.edge          = XMC_CCU8_SLICE_EVENT_EDGE_SENSITIVITY_NONE,
	.level         = XMC_CCU8_SLICE_EVENT_LEVEL_SENSITIVITY_ACTIVE_HIGH,
	.duration      = XMC_CCU8_SLICE_EVENT_FILTER_DISABLED
};
	
