#include<iostream>

int main()
{
	enum data
	{
		one, two, three
	};
	//Implicit data conversion
	//	Here the enum of data type is implicitly converted to integer
	int var1 = three;
	std::cout << "The value of var1 " << var1 << std::endl;
	return 0;
}
