#ifndef __VEHICLE_H
#define __VEHICLE_H

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

	public:

Vehicle(std::string make,std::string model,int year,Body_style body_style);
Vehicle();
std::string get_make();


std::string get_model();


Body_style get_body_style();

int get_year();

std::string vehicle_to_string();

};

#endif
