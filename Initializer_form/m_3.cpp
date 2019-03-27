#include<iostream>

class C
{
public:
	int x{10};
	int y[5];// {10, 20, 30, 40, 50};
	C():y({10,20,30, 40, 50}){}
};

int main()
{
	C c;
	std::cout << "x: " << c.x << std::endl; 
	for (int i = 0; i < 5; i++)
		std::cout << "y = " << c.y[i] << "\n";
	return 0;
}

