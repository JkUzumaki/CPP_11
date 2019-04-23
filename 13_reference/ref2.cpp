#include<iostream>

int main()
{
	int a = 10;
	int b = 0;
	int &ref = a;
	ref = b;
	b++;
	std::cout << "a = " << a << " ref = " << ref << std::endl;
	std::cout << "b " << b << "\n";
	return 0 ;
}
