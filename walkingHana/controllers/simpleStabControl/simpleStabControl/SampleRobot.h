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

/**@breif главный цикл выполнения
@detailed бесконечный цикл действует
на протяжении всей программы*/

	void run();

private:
	std::tr1::shared_ptr<Sensors> sensors;

};

#endif //SAMPLEROBOT_H