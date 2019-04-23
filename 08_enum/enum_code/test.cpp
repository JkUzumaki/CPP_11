#include<iostream>

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
	std::cout << var << std::endl;
	return 0;

}

