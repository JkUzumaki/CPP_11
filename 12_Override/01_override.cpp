#include<iostream>

class Base
{
public:
	void fun(){
		std::cout << "Base::fun \n";
	}
};

class Derived: public Base
{
public:
	void fun(){
		std::cout << "Derived::fun \n";
	}		
};

int main()
{
	Base b;
	//b.fun();
	Base::fun();
	return 0;
}
