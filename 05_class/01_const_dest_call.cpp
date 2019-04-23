#include<iostream>

class Base
{
public:
	Base()
	{std::cout << "Base Constructor\n";}

	~Base()
	{std::cout << "Base Destructor\n";}
};
class Derived1: public Base
{
public:
	Derived1()
	{std::cout << "D1 Constructor\n";}

	~Derived1()
	{std::cout << "D1 Destructor\n";}
};
class Derived2: public Derived1
{
public:
	Derived2()
	{
		std::cout << "D2 Constructor\n";
	}

	~Derived2()
	{
		std::cout << "D2 Destructor\n";
	}
};

int main()
{
	Derived2 a;
	return 0;
}
