#include<iostream>
#include<cstdlib>
#include<exception>
#include<string>
//#include"vehicle.cpp"
#include"Electric_vehicle.h"



Electric_vehicle::Electric_vehicle(int year,std::string model,std::string make,Body_style body_style,double miles_per_kwh,double max_kwh):Vehicle(model,make,year,body_style)
	{
		_miles_per_kwh=miles_per_kwh;
		_max_kwh=max_kwh;
	
		//Vehicle(model,make,year,body_style);
	}	
	
	double Electric_vehicle::kwh_consumed(double miles)
	{

		double kwh = miles/_miles_per_kwh;
		
		return kwh;
	}
