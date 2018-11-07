#include<iostream>
//#include"card.cpp"
#include"deck.cpp"

using namespace std;

int main()
{	
	Deck d;

	try 
	{
		d.deal();	
	}	

	catch(exception& e)
	{
		cerr<<"Exception"<<endl;
	}
	
	Deck deck_t{20};

	Deck deck_tt;


	
	int i;


try{	  
	for(i=0;i<=11;i++)
	{		deck_tt.deal();
	}

	cerr<<"Throw is not working"<<endl;
	
}
	
catch(exception& e)
{
}	
	}
