#include<iostream>
#include<string>
#include<cstdlib>
#include<exception>
#include"vehicle.h"	
	
Vehicle::Vehicle(std::string make,std::string model,int year,Body_style body_style)

{
	_make=make;
	_model=model;
	_year=year;
	_body_style=body_style;
}

Vehicle::Vehicle()
{
	
}
std::string Vehicle::get_make()
{
	return _make;
}


std::string Vehicle::get_model()
{
	return _model;
}


Body_style Vehicle::get_body_style()
{
	return _body_style;
}

int Vehicle::get_year()
{
	return _year;
}



std::string Vehicle::vehicle_to_string()
{
	
	Body_style b_body_style=get_body_style();
	switch(b_body_style)
	{
	case Body_style::SEDAN: return "SEDAN"; break;
	case Body_style::HATCHBACK: return "HATCHBACK"; break;
	case Body_style::MINIVAN: return "MINIVAN"; break;
	case Body_style::TRUCK: return "TRUCK"; break;
	case Body_style::SUV: return "SUV";break;
	case Body_style::CROSSOVER: return "CROSSOVER"; break;
//	default: bb_body_style="Error"; break;
	}
//	return (s_year+" "+s_make+" "+s_model+" "+bb_body_style+" ");
	
	
}


