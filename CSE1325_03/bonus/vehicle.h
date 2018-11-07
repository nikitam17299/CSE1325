#include<iostream>
#include<string>
#include<cstdlib>
#include<exception>

enum class Body_style{SEDAN,HATCHBACK,MINIVAN,TRUCK,SUV,CROSSOVER};

class Vehicle{

	std::string _make;
	std::string _model;
	int _year;

	Body_style _body_style;

Vehicle(std::string make,std::string model,int year,Body_style body_style)

{
	_make=make;
	_model=model;
	_year=year;
	_body_style=body_style;
}

std::string get_make()
{
	return _make;
}


std::string get_model()
{
	return _model;
}


Body_style get_body_style()
{
	return _body_style;
}

int get_year()
{
	return _year;
}

std::string vehicle_to_string()
{
	
	int year=get_year();
	std::string s_year=std::to_string(year);
	std::string make=get_make();
	std::string model=get_model();
	Body_style b_body_style=get_body_style();
	std::string bb_body_style;
	switch(b_body_style)
	{
	case Body_style::SEDAN: bb_body_style="SEDAN"; break;
	case Body_style::HATCHBACK: bb_body_style="HATCHBACK"; break;
	case Body_style::MINIVAN: bb_body_style="MINIVAN"; break;
	case Body_style::TRUCK: bb_body_style="TRUCK"; break;
	case Body_style::SUV: bb_body_style="SUV";break;
	case Body_style::CROSSOVER: bb_body_style="CROSSOVER"; break;
	default: bb_body_style="Error"; break;
	}
	return (s_year+make+model+bb_body_style);
	
	
}


};
