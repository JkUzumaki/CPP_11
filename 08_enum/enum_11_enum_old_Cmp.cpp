#include<iostream>
int main()
{
	enum varA
	{
		v1, v2, v3
	};
	
	enum varB
	{
		V1, V2, V3
	};	
	varA::v1 = 100;
	if((v1 == V1))// && (v2 == V2) && (v3 == V3))
		std::cout << "Hello comparison is working\n";
}
