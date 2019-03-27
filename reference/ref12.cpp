#include<iostream>

void print(int& value)
{
	std::cout << "lvalue: " << value << std::endl;
}


void print(int&& value)
{
	std::cout << "rvalue: " << value << std::endl;
}

int getValue()
{
	int temp = 99;
	return temp;
}

int main()
{
	
	int ii = 11;
	int&& val = getValue(); 
	val++;
	print(ii);
	print(getValue());
	print(val);
	return 0;
}
