#include<iostream>

class Base
{
public:
	Base()
	{}
	virtual void foo()
	{
		std::cout << "Base foo \n";
	}
};

class Derived: public Base
{
public:
	Derived()
	{}
	void foo()
	{
		std::cout << "Derived foo \n";
	}
};

int main()
{
	Base b ;//= new Base();
	Derived *d = dynamic_cast<Derived>&b;

	//d->foo();
	return 0;
}
