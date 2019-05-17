#include<iostream>
using namespace std;

class Base
{
public:
	virtual ~Base(){
		std::cout << "Base Destructor\n";
	}
};

class Derived: public Base
{
public:
	~Derived(){
		std::cout << "Derived Destructor\n";
	}
};

int main()
{
	//Derived * bptr = new Base();
	Base *bptr = new Derived();
	delete bptr;
}
