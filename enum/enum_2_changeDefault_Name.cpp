#include<iostream>

enum seasons {Spring = 34, summer = 4, autumn = 9, winter = 32};

int main()
{
	seasons s;
	s = summer;
	std::cout << "Summer : " << s <<"\n";
	return 0;	
}
