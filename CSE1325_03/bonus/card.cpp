#include<iostream>
#include<exception>
#include<cstdlib>
#include<string>
#include "card.h"
using namespace std;
//enum Suit{U,T,A};

	
Card::Card(Suit suit,int rank)
{

  if(rank>9||rank<0)
		cerr<<"Suit out of range"<<endl;
	if(suit>2||suit<0)
		cerr<<"Not a suit"<<endl;

	
}

	Card::Card() 	
	{
		int rank=rand()%10;
		_Rank=rank;
	
		int s =rand()%3;
		Suit suit_w = (Suit) s;
		_suit=suit_w;
	}
Suit Card::suit_s()
	{
		
	 return _suit;
	}


int Card::rank()
	{
			
		return _Rank;
	}
	
	string Card::card_to_string()
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



