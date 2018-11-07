#ifndef __GASVEHICLE_H
#define __GASVEHICLE_H

#include<iostream>
#include<string>
#include<exception>
#include<cstdlib>
#include"vehicle.h"

class Gas_vehicle: public Vehicle {

	double _miles_per_gallon;
	double _max_gallons;

	public:

	Gas_vehicle(int year,std::string model,std::string make,Body_style body_style, double miles_per_gallon,double max_gallons);
Gas_vehicle();

	double gallons_consumed(double miles);
};
#endif
