#include<iostream>
#include<string>
#include<exception>
#include<cstdlib>
//#include"Gas_vehicle.h"
//#include"vehicle.cpp"
#include"Gas_vehicle.h"
Gas_vehicle::Gas_vehicle(int year,std::string model,std::string make,Body_style body_style,double miles_per_gallon,double max_gallons):Vehicle(model,make,year,body_style)
	{
		_miles_per_gallon=miles_per_gallon;
		_max_gallons=max_gallons;

	}

//Gas_vehicle::Gas_vehicle()
//{

//}	
	double Gas_vehicle::gallons_consumed(double miles)
	{

		double gallons=(miles/_miles_per_gallon);

		return gallons;
	}

	

