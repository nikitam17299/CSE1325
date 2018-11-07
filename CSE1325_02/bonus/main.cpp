#include<iostream>

#include "polygon.cpp"

using namespace std;

int main()
{

	Polygon polygon;

	double side_length=0.0;

	double apothem ;
	int n=10;

	int i,count=0;

		while(i!=10)
	{

		cout<<"Enter the length of a side: ";

		cin>>side_length;

		if(side_length<=0)
		{

			break;
		}
cout<<endl;

	 
	
			
	polygon.add_side(side_length);

			
	
		count=polygon.get_sides();
		
		i++;
	}

if(i==10)

{
	cout<<"Sorry you have reached the maximum number of sides that you can enter"<<endl;
}

cout<<endl;

	cout<<"Enter the apothem for the regular polygon: ";
	cin>>apothem;

cout<<endl;

double perimeter;

	perimeter=polygon.get_perimeter();

	cout<<"The perimeter of the "<<count<<" -sided polygon is "<<perimeter<<endl;
cout<<endl;

double area;

area=polygon.get_area(apothem);




cout<<"The area of the "<<count<<" -side polygon is "<<area<<endl; 

}
