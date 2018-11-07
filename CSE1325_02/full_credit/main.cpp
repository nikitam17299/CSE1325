#include<iostream>

#include "polygon.cpp"

using namespace std;

int main()
{

	Polygon polygon;

	double side_length=0.0;

	int n=10;

	int i,count=0;

	for(i=0;i<n;i++)

	{

		cout<<"Enter the length of a side: ";

		cin>>side_length;

		if(side_length<=0)
		{

			break;
		}
cout<<endl;

count=polygon.get_sides();

polygon.add_side(side_length);


}

polygon.get_perimeter();


}
