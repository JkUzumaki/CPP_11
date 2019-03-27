#include<iostream>

int getValue()
{
	int ii = 100;
	return ii;
}

void printReference(int& value)
{
	std::cout << "const int& value " << value << std::endl;
}

void printReference(int&& value)
{
	std::cout << "RVALUE int&& value " << value << std::endl;
}

int main()
{
	int&& i = getValue();
	i++;
	std::cout << i << std::endl;
	std::cout << getValue() << std::endl;
	int data = getValue();
	
	printReference(data );
	printReference(i);
	printReference(10);
	return 0;
}
