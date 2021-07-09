#include "zppm.hpp"
int main(void)
{
//инициализируем автоматы mexo
	zppm::begin();
//наслаждаемся
	for(;;)
	{
		zppm::frontend_loop();
	}
}
