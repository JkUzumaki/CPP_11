#include<iostream>

int main()
{
	enum class data:int
	{
		one = 'a', two, three
	};
	//Implicit conversion is not possible
int var1 = static_cast<char>(data::one);
//	int var1 = (data::one);
	//data var1 = data::one;
	std::cout << "The value of var1 " << var1+1 << std::endl;
	return 0;
}
