#ifndef __ELECTRICVEHICLE_H
#define __ELECTRICVEHICLE_H
#include<iostream>
#include<cstdlib>
#include<exception>
#include<string>
#include"vehicle.h"

class Electric_vehicle : public Vehicle {

	double _miles_per_kwh;
	double _max_kwh;

	public:

	Electric_vehicle(int year,std:: string make,std:: string model, Body_style body_style,double miles_per_kwh,double max_kwh);	
	
	double kwh_consumed(double miles);
};
#endif
