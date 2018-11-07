#include<iostream>
#include<exception>
#include<cstdlib>
#include<string>

using namespace std;
enum Suit{U,T,A};
class Card{
	
	
	
	int _Rank;

	Suit _suit;

	public:	

	Card(Suit suit,int rank)
{

  if(rank>9||rank<0)
		cerr<<"Suit out of range"<<endl;
	if(suit>2||suit<0)
		cerr<<"Not a suit"<<endl;

	
}

	Card() 	
	{
		int rank=rand()%10;
		_Rank=rank;
	
		int s =rand()%3;
		Suit suit_w = (Suit) s;
		_suit=suit_w;
	}

	Suit suit_s()
	{
		
	 return _suit;
	}


	int rank()
	{
			
		return _Rank;
	}

	string card_to_string()
	{
		int num=rank();
		char cc;
		
		Suit c = suit_s();
		if(c==0)
		{	
		   cc='U';
		}	

		else if(c==1)
		{
		  cc='T';
		}	

		else if(c==2)
		{
		  cc='A';
		}	

		string n = to_string(num);
		return cc+n;
		

	}


};

