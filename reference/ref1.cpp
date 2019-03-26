#include<iostream>

int main()
{
	int a = 10;
	int& ref = a;
	int& ref1 = ref;
	int& ref2 = ref1;
	ref2++;
	std::cout << "a = " << a << std::endl;
	std::cout << "&ref = " << *(&ref) << " &a = " << &a << std::endl;
	return 0;
}
