#include<iostream>

class Dog
{
public:
	int age;
	std::string name;
};
/*
Aggregate initialization

The d1 object will automatically assign the value based on the order of data
member in the class
*/
int main()
{
	Dog d1 = {5, "Henry"};
	std::cout << "d1.age = " << d1.age << std::endl;
	std::cout << "d1.name = " << d1.name << std::endl;
	return 0;
}
