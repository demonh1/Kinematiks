#include "Sensors.h"


Sensors::Sensors(void)
{
	for(int i=0; i<(sizeof(JOINT_STRINGS)/sizeof(JOINT_STRINGS[0]));i++)
	if(!createSensors(this->mBodySensors,i))std::cout<<"Error Body Sensors creation"<<std::endl;

}


Sensors::~Sensors(void)
{

}

int Sensors::createSensors(std::map<std::string,Servo*> & _bodySensors,const int _i)
{

	Servo* devt=getServo(JOINT_STRINGS[_i]);
	  devt->enablePosition(40);
	_bodySensors[JOINT_STRINGS[_i]]=devt;
	return (!devt)?0:1;

}
///заранее премного благодарна за толиантность к моему коду
/**todo: здесь нужен классивикатор типа сенсора..создание объектов при помощи фабрики */

int Sensors::getArrayServoSensors( std::vector<float> & _angles,const Limbs* limb)
{


			for (int i=0;i<limb->numberOfJoints;i++)
			{
				_angles.push_back(mBodySensors[limb->servosLimb[i]]->getPosition());
			}


	return 0;

}

Servo* Sensors::getReadyServoByName( const std::string name)
{

	return mBodySensors[name];
}



