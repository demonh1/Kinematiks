#include "SampleRobot.h"


SampleRobot::SampleRobot()
{
	 sensors = std::tr1::shared_ptr<Sensors>(new Sensors());
}


SampleRobot::~SampleRobot()
{
}

void SampleRobot::run()
{
	std::vector<float> anglesServo;

	//sensors->mBodySensors["RHipPitch"]->setPosition(-90*RAD_OVER_DEG);

	sensors->getReadyServoByName(JOINT_STRINGS[14])->setPosition(-90*RAD_OVER_DEG);
	sensors->getArrayServoSensors(anglesServo,RLEG_SERVOS);
  std::cout<<"angles";
 for (unsigned int i=0;i<anglesServo.size();i++)
 {

	 std::cout<<" "<<anglesServo[i]*MMath::DEG_OVER_RAD;
 }
	std::cout<<std::endl;

 	std::cout<<"coord"<<Kinematics::forwardKinematics(Kinematics::RLEG_CHAIN,anglesServo)<<"/coord"<<std::endl;
 
}
