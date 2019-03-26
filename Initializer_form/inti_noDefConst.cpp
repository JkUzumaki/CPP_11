#include<iostream>

class A
{
	int i;
public:
	A(int );
};

A::A(int arg)
{
	i = arg;
	std::cout << "A's constructor called: value of i: " << i << std::endl;
}

class B
{
	A a;
public:
	B(int);
};

B::B(int x): a(x)
{
	std::cout << "B's constructor called \n";
}

int main()
{
	B obj(7890);
	return 0;
}
