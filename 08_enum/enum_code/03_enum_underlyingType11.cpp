#include<iostream>
/*
Here we are specfying the type as unsigned int and printing the value
we are printing the value associated with it!
this UNDERLYING TYPE SPECIFYING is available only in C++11 
*/
namespace Select
{
	enum Select: unsigned int
	{
		Zero = 0,
		One = 1,
		Two = 'd'
	};
}
	
int main()
{ 
	std::cout << "Select::two " << Select::Two << std::endl;
	return 0;

}

