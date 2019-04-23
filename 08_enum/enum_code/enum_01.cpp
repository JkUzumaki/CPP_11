#include<iostream>
/*
When two enum of same value name are used it creates a error in C99 std
To overcome this we use namespace and keeping the enum inside it

*/
	namespace cat1{
		enum Select
		{
			Zero,
			One,
			Two = 100
		};
	}
	
	namespace cat2{
		enum Choose{
			Hello,
			World,
			Zero
		};
	}

int main()
{
	cat1::Select var = cat1::Two;
	cat2::Choose var1 = cat2::Zero;
	std::cout << var << "\n" << var1 << std::endl;
	return 0;

}

