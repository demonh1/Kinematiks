#include <iostream>
#include <stdio.h>

#include "SampleRobot.h"

#define TIME_STEP 40


int main() {

	std::auto_ptr<SampleRobot> naoSample(new SampleRobot());
	int timeStep =naoSample->getBasicTimeStep();

	
	while(1)
	{

/*@breif ����������������� ���� ��������� Webots
@detailed ��������� ������ ���������� ������ timeStep �����������
���� ������� ����� ������ �� ������ ����� ������
@paramin �������� � �������� word basicTimeStep 40
*/

	naoSample->run();
	naoSample->step(timeStep); 
	
	}

	
	return 0;
}