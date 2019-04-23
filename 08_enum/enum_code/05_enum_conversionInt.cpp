#include<iostream>
/*
Here process function was supposed to run with int parameter, not selection.
But our program run with selection as parameter and no warning was shown.
So implicit conversion is taking place
*/
enum Selection: char
{
	None = 98,
	Single = 99,
	Multiple = 100
};

void process(int value)
{
	std::cout << "The value " << value << std::endl;
}

int main()
{
	process(None);
	process(Single);
	process(Multiple);
	return 0;
}
