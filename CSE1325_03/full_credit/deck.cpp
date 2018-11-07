#include<iostream>
#include<vector>
#include"card.cpp"

using namespace std;

class Deck{


	vector <Card> deck;

	public:
	
	Deck(int cards = 10){	

	int i;	
	for(i=0;i<=cards;i++)
	{	
		//Card card;
		deck.push_back(Card{});	
	}

	}	   

		Card deal()
	{
	
		
			if(deck.size()==0)
			{
				throw Deck_empty();
			}
			Card card = deck[deck.size()-1];
			deck.pop_back();
			return card;

		}
	
	class Deck_empty:public exception{
	public:
const char * what() const throw()
{
return "Deck empty";
}

};
};
