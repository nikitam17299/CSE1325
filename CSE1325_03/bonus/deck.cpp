#include<iostream>
#include<vector>
//#include"card.cpp"
#include"deck.h"

using namespace std;
	
Deck::Deck(int cards){	

	int i;	
	for(i=0;i<=cards;i++)
	{	
		//Card card;
		deck.push_back(Card{});	
	}

	}	   

Card Deck:: deal()
	{
	
		
			if(deck.size()==0)
			{
				cerr<<"Deck Empty"<<endl;
			}
			Card card = deck[deck.size()-1];
			deck.pop_back();
			return card;

		}
	
//	class Deck_empty:public exception{
//	public:
// Deck_empty::const char * what () const throw()
	
//{
//return "Deck empty";
//}


