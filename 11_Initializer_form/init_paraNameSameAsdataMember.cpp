#include<iostream>

class A
{
	int i;
public:
	A(int);
	int getI() const{ return i;}
};

A::A(int i):i(i)
{}

int main()
{
	A a(19);
	std::cout << a.getI() << std::endl;
	return 0;
}
