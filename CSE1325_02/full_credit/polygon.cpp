#include<iostream>

using namespace std;
class Polygon{

	double perimeter=0.0;

	int sides=0;

	public:
		
		double add_side(double length)
		{
			perimeter+=length;
			return perimeter;
		}	
		
		
		int get_sides()

		{
		
			sides++;

		
			return (sides-1);

		}
				
		double get_perimeter(){
		
		int no_of_sides=get_sides();
	
	cout<<"The perimeter of the "<<no_of_sides<<"-sided polygon is "<<perimeter;
cout<<endl;
		}

	
};
