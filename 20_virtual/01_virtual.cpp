#include<iostream>
/*
Derived class cannot private member of the base class
*/
class Base
{
protected:
int a;
public:
int b;	
	Base(){
		a = 1;
		b = 2;
	}
};

class Derived: public Base
{
public:
	Derived() = default;

};

int main()
{
	Derived d;
	std::cout << "The a value " << d.a << "\n";	
	std::cout << "The b value " << d.b << "\n";	
	return 0;
}
