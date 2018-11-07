#include<iostream>

using namespace std;
class Polygon{

	double lengths[10];

	int sides=0;

	public:
		int i=0;

		int get_sides()
		{
			sides++;

			return (sides);
	
		}	
		

		double add_side(double side)
		{
					

			
									
			lengths[i]=side;
			
			i++;

			return 0.0;
		
		}	
		
		
	
		double get_perimeter(){
		
		

		int i=0;

		int n = get_sides();
		double perimeter = 0.0;
		for(i=0;i<=n;i++)
		{
			perimeter+=lengths[i];
		}	


		return perimeter;
		}

		
	double get_area(double apothem)
		{

			double perimeter=get_perimeter();

			double area = 0.5*apothem*perimeter;

		

		}

};
