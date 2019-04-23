#include<iostream>

int main()
{
	float num = 400.5;
	int denom = 4;
	auto data = static_cast <double> (num / denom);
	std::cout << data << "\n";
	return 0;
}
