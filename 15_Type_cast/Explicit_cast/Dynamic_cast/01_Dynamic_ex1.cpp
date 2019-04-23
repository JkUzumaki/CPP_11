#include<iostream>

class A
{
public:
	virtual void f()
	{
		std::cout << "A::f()\n";
	}
};

class B: public A
{
public:
	void f()
	{
		std::cout << "B::f()\n";
	}
};

int main()
{
	A a;
	B b;
	a.f();
	b.f();
	
	A *Pa = &a;
	B *Pb = &b;
	Pa->f();
	Pb->f();

	//Base class knows the derived class obj
	//Dynamic_cast is always successful when we cast to one of its base class
	Pa = &b;
	//Derived class dosen't know the base obj
	//Pb = &a;		
	Pb = dynamic_cast<B*>(&a);
	return 0;
}
