#include<iostream>

class C
{
public:
	int y[5] {10, 20, 30, 40, 50};
	C(){}
};

int main()
{
	C c;
	for (int i = 0; i < 5; i++)
		std::cout << "y = " << c.y[i] << "\n";
	return 0;
}

