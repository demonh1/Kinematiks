#ifndef SAMPLEROBOT_H
#define SAMPLEROBOT_H
#include <webots/Robot.hpp>
#include "ForwardKinematics.h"
#include "Sensors.h"
#include "MMath.h"
#include <vector>
class Sensors;
using namespace webots;
class SampleRobot : public Robot
{
public:
	SampleRobot();
	~SampleRobot();

/**@breif ������� ���� ����������
@detailed ����������� ���� ���������
�� ���������� ���� ���������*/

	void run();

private:
	std::tr1::shared_ptr<Sensors> sensors;

};

#endif //SAMPLEROBOT_H