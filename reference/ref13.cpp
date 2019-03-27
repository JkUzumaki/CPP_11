#include<iostream>

int main()
{
	std::string str1 {"Hi"};
	std::string str2 {"Hello"};
	std::string &&ref = str1 + str2;
	
	std::cout << "ref " << ref << std::endl;
	return 0;
}
