#include<iostream>
/*
C++11
Here forward declaration is being used which didnt work in C++98
*/

//Prototype needs the type of enum
enum class Selection;
	
void make(Selection s)
{
	std::cout << "selection::one " << static_cast<int>(s) << std::endl;
}

enum class Selection
{
	None=100,
	One,
	Two
};

int main()
{
	Selection num = Selection::One;
	make(num);
	return 0;
}

