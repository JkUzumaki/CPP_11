//Compile time cast
#include<iostream>
int main()
{
	float f = 97.5;
	int a = f;
	char b = static_cast<char>(f);
	std::cout << " b : " << b << std::endl;
	return 0;
}
