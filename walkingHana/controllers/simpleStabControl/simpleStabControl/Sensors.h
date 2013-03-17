#ifndef SENSORS_H
#define SENSORS_H

#include <webots/Robot.hpp>
#include <webots/Servo.hpp>
#include <iostream>
#include <map>
#include "Kinematics.h"
#include "SampleRobot.h"
#include <vector>

using namespace Kinematics;
using namespace webots;
//typedef Servo* WBDevicePtr;

class Sensors:public Robot
{
public:
	Sensors();
	~Sensors(void);

	/**@breif ������� ��������
	�� �������� �������� � ������� 
	���� webots, ��������� � ����
	@param ��������� � ��������� ����� ������ mBodySensors
	@return 1 -�����*/

	int createSensors(std::map<std::string,Servo*> &,const int);
	int getArrayServoSensors( std::vector<float> & ,const Limbs*);
	Servo* getReadyServoByName(const std::string );
	
private:
	std::map<std::string,Servo*>mBodySensors;
};

#endif
