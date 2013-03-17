#ifndef MMATH_H
#define MMATH_H
#include <cmath>

namespace MMath{

	static const double M_PI = acos((long double) -1);
	static const double PI = M_PI;
	static const double DEG_OVER_RAD = 180.0 / M_PI;//в градусы
	static const double RAD_OVER_DEG = M_PI / 180.0;//в радианы
	static const float M_PI_FLOAT = static_cast<float>(M_PI);
	
	inline static void toDeg(double *_rad)
	{
		
		double deg=DEG_OVER_RAD+(*_rad);
		*_rad=deg;

	}

	inline static void sincosf(float _x, float * _sinx, float * _cosx) {
		*_sinx = std::sin(_x);
		*_cosx = std::cos(_x);
	}
}
#endif