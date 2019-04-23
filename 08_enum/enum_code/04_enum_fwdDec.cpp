#include<iostream>
/*
This will not WORK
Because
The compiler does not know underlying size and thus size of the enumerator
As a result it cannot compile this piece of code.
*/
enum Selection;
	
void make(Selection s)
{
	std::cout << "selection::one " << One << std::endl;
}

enum Selection
{
	None,
	One,
	Two
};

int main()
{
	Selection num;
	make(num);
	return 0;
}

