#include <iostream>
using namespace std;

class Card{
	public:
		int card_number;
		string card_holder;
};

//typeof alias CardPtr to for Card*
typedef Card* CardPtr; //CardPtr is an alias of Card*

//fun part
typedef double DB; //DB is an alias of double 
typedef int ROY;

int main(){
	//create a new card object
	Card my_card;
	DB num = 7823659283;
	ROY ph = 000;
	
	my_card.card_number = 12345;
	my_card.card_holder = "Alice";
	CardPtr Ptr_to_Card = &my_card;
	
	cout<<"Card Number: "<<Ptr_to_Card->card_number<<endl;
	cout<<"Card Holder: "<<Ptr_to_Card->card_holder<<endl;
	cout<<num<<endl;
	cout<<ph<<endl;
	
	return 0;
}