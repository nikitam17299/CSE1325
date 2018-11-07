//Nikita Ashok Menon
//CSE-1325
//nam8454
//1001548454
//Professor George Rice
#include<iostream>
#include<cstdlib>
#include<exception>
#include<string>
#include<vector>
#include"Gas_vehicle.h"
#include"Electric_vehicle.h"
//#include"vehicle.cpp"
//#include"vehicle.h"
int main()
{


	std::vector<Electric_vehicle> evs = {
		Electric_vehicle{2014,"Telsa","Model S 85",Body_style::SEDAN,3.12,85},
		Electric_vehicle{2014,"Telsa","Model 3 LR", Body_style::SEDAN,4.13,75},
		Electric_vehicle{2018,"GM","Bolt",Body_style::HATCHBACK,3.58,60},
		Electric_vehicle{2018,"Nissan","LEAF SL", Body_style::HATCHBACK,3.88,40},
		};

	std::vector<Gas_vehicle> ice = {

		Gas_vehicle{2017,"Toyota","RAV4",Body_style::CROSSOVER,26,15.9},
		Gas_vehicle{2018,"Ford", "F-150",Body_style::TRUCK,21,36},
		Gas_vehicle{2018,"Nissan","Rogue",Body_style::HATCHBACK,29,14.5},
		Gas_vehicle{2018,"Chrysler","Pacifica",Body_style::MINIVAN,22,19},
	};

//int i;

for(Gas_vehicle& g: ice)
	{
						
		double gall=g.gallons_consumed(100);
		std::string s = g.vehicle_to_string();
		std::cout<<g.get_year()<<" ";
		std::cout<<g.get_make()<<" ";
		std::cout<<g.get_model()<<" ";
		std::cout<<s<<" costs per 100 miles "<<std::endl;
		std::cout<<"at $2  per gallon ->  "<<(gall*2)<<std::endl;
		std::cout<<"at $2.25 per gallon -> "<<(gall*2.25)<<std::endl;
		std::cout<<"at $2.50 per gallon -> "<<(gall*2.50)<<std::endl;
		std::cout<<"at $3 per gallon -> "<<(gall*3)<<std::endl;
		std::cout<<"at $4 per gallon -> "<<(gall*4)<<std::endl;

	}
	for(Electric_vehicle& e: evs)
	{	
		double k= e.kwh_consumed(100);
		std::string ss= e.vehicle_to_string();
		std::cout<<e.get_year()<<" ";
		std::cout<<e.get_make()<<" ";
		std::cout<<e.get_model()<<" ";	
		std::cout<<ss<<" costs per 100 miles"<<std::endl;

		std::cout<<"at $0.05 per kwh -> "<<(k*0.05)<<std::endl;
		std::cout<<"at $0.08 per kwh -> "<<(k*0.08)<<std::endl;
		std::cout<<"at $0.11 per kwh -> "<<(k*0.11)<<std::endl;
		std::cout<<"at $0.13 per kwh -> "<<(k*0.13)<<std::endl;
		std::cout<<"at $0.15 per kwh -> "<<(k*0.15)<<std::endl;	
	}





}
