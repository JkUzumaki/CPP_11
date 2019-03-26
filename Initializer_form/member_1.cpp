#include<iostream>

class C
{
public:
	int x = 192;	
	C(){}
};

int main()
{
	C c;
	std::cout << "c.x = " << c.x << "\n";
	return 0;
}

