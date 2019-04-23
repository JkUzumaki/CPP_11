#include<iostream>

class Base
 {
	virtual void fun(){}
 };


class Derived : public Base { };

int main() 
{
	Base *pBDerived = new Derived;
	Base *pBBase = new Base;
	Derived *pd;

	pd = dynamic_cast<Derived*>(pBDerived);	//#1
	pd = dynamic_cast<Derived*>(pBBase);	//#2 
	return 0;
}
