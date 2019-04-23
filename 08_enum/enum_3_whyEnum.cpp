#include<iostream>

enum suit
{
	club =0,
	diamonds = 10,
	hearts = 20,
	spades = 3
} cards;

int main()
{
	cards = diamonds;
	std::cout << "Size of enum variable " << sizeof(cards) << " bytes\n";
	return 0;
}
