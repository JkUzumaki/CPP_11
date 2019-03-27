#include<iostream>

void f(int& i)
{
	std::cout << "lvalue ref : " << i << "\n";
}

void f(int&& i)
{
	std::cout << "rvalue ref: " << i << "\n";
}

int main()
{
	int i = 77;
	f(i);
	f(99);
	f(std::move(i));
	f(i);
	f(10);
	return 0;
}
