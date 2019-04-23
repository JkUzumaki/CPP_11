#include<iostream>

class Base
 {
 };


class Derived : public Base { };

int main() 
{
	Base b;
	Derived d;
	//Will WORK
	// dynamic_cast is successful, when we cast a class to its base class
	Base *pb = dynamic_cast<Base*>(&d);      	// #1
	//Wont WORK
	// dynamic_cast gives compilation error
	Derived *pd = dynamic_cast<Derived*>(&b); 	// #2

	return 0;
}
