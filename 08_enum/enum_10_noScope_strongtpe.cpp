#include<iostream>

int main()
{
	// c++11 strong typed enum has their own scope
	enum class A1 {A, B, C};
	enum class A2 {A, B, C};
	std::cout << "A1::A value is " << A1::A << std::endl;
	return 0;
}
