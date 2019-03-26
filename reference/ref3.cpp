#include<iostream>

void change(int &ref)
{
	ref = 101;
}
int main()
{
	int n = 11;
	std::cout << "n " << n << "\n";
	change(n);
	std::cout << "n " << n << "\n";
	return 0;	
}
