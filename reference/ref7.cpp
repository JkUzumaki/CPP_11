#include<iostream>

void printIt(const int&x)
{
	std::cout << "x: " << x << "\n";
}

int main()
{
	int a = 1;
	printIt(a);

	const int b = 2;
	printIt(b);
	
	printIt(3);
	
	printIt(2+b);

	return 0;
}
