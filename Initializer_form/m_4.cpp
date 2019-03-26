#include<iostream>

class C
{
public:
	std::string s {"abc"};
	double d = 0;
	char * p {nullptr};
	int y[5] {1, 2, 3, 4, 5};
	C();
};

//Declaring constructor outside the scope
C::C()
{}

int main()
{
	C c;
	for (int i = 0; i < 5; i++)
		std::cout << "y[" << i << "] "<< c.y[i] << "\n";
//	Below statement is having the c.p being refered to a nullptr
//	std::cout << "char c.p " << c.p << std::endl;
	std::cout << "double d " << c.d << std::endl;
	std::cout << "string s " << c.s << std::endl;
	return 0;
}

