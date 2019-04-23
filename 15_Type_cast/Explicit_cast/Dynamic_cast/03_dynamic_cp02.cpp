#include<iostream>

class Base
 {
	virtual void fun(){}
 };


class Derived : public Base { };

int main() 
{
	Base b;
	Derived d;
	//Will WORK
	// dynamic_cast is successful, when we cast a class to its base class
	Base *pb = dynamic_cast<Base*>(&d);      	// #1
	// We have made the base class polymorphic
	// But dynamic_cast fails and produces null pointer
	Derived *pd = dynamic_cast<Derived*>(&b); 	// #2

	return 0;
}
