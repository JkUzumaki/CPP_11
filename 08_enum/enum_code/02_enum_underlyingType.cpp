#include<iostream>
/*
Here we are extracting the data from the enum and printing and we are giving 
different values to all the data in enum and enum is within Select namespace
Here Select in Select::One is not denoting enum it is denoting the namespace
*/
	namespace Select
	{
		enum Select
		{
			Zero = 0,
			One = 1,
			Two = 0xFFFF0000U
		};
	}
	
int main()
{ 
	std::cout << "Select::two " << Select::One << std::endl;
	return 0;

}

