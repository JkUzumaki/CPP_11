#include<iostream>

class A
{
public:	
	A(int a){}
	A(double) = delete;
	A& operate=(const A&) = delete;
};

int main()
{
	A a(10);
	A b(3.14);
	a = b;
	return 0;
}
