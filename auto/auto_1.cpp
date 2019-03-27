#include<iostream>
#include<typeinfo>
float add(float x, int y)
{
	return x + y;
}

int main()
{
	auto sum = add(1.5, 4);
	std::cout << "Sum of 1.5 and 4 :" << sum << std::endl;
	std::cout << "The type of sum is : " << typeid(sum).name() << std::endl;
	return 0;
}
