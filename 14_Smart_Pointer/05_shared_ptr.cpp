#include<iostream>
#include<memory>
using namespace std;

class Base
{
public:
	~Base(){
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
	shared_ptr<Base> i ( new Derived());
}
