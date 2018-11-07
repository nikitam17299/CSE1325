#include<iostream>
#include"card.cpp"


using namespace std;

int main()
{
	int i;
	string ss="";

	for(i=0;i<=20;i++)
	{

		Card card;
		ss=card.card_to_string();
		cout<<ss<<" ";
	}

cout<<endl;

}

