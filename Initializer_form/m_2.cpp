#include<iostream>

class C
{
public:
	int x;	
	C(){
		x = 123;
	}
};

int main()
{
	C c;
	std::cout << "c.x = " << c.x << "\n";
	return 0;
}

