#include "zppm.hpp"
int main(void)
{
//�������������� �������� mexo
	zppm::begin();
//������������
	for(;;)
	{
		zppm::frontend_loop();
	}
}
