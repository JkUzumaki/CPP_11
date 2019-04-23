#include<iostream>
/*
enum1 data must be of enum1 type same applies to enum2

*/
enum class enum1
{
	None = 100,
	Single,
	Multiple
};

enum class enum2
{
	None = 1,
	Single,
	Multiple
};

int main()
{
	enum1 var1 = enum1::Multiple;
	enum2 var2 = enum2::Multiple;
	std::cout << "enum1 Multiple " << static_cast<char>(var1) << std::endl;
	std::cout << "enum2 Multiple " << static_cast<bool>(var2) << std::endl;
	return 0;
}
