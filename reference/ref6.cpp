#include<iostream>

int main()
{
	int x = 5;
	const int &ref1 = x;
	
	const int y = 7;
	const int &ref2 = y;
	
	const int &ref3 = 6;

	std::cout << "The value of x: " << ref1 << std::endl;
	std::cout << "The value of y: " << ref2 << std::endl;
	std::cout << "The ref3: " << ref3 << std::endl;
}
