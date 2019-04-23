#include<iostream>
/*
THIS PROGRAM WON'T RUN

Here we are type casting char to int*, its illegal
*/
int main()
{
	int a = 10;
	char c = 'a';
	
	int* q = (int*) &c;
	std::cout << "*q " << *q << std::endl; 
	//Integer pointer can contain the address of int
	//	Here we are assigning the char address to int
	//int* p = static_cast<int*> (&c);
	return 0;
}
