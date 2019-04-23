#include<iostream>

int main()
{
	int value=5;
	// pointer to the variable value
	int* const ptr = &value;
	// reference to the variable value
	int &ref = value;
	// modify value by pointer 
	*ptr = 500;
	std::cout << "The value " << value << "\n";
	// modify value by reference
	ref += 500;
	std::cout << "The value " << value << "\n";
}
