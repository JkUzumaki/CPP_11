#include<iostream>

class Dog
{
int age;
std::string name;
public:
	Dog(const std::initializer_list<int> & vec)
	{
		age =* (vec.begin()++);
	//	name =* (vec.begin());
	}

/*
	Dog(int age, std::string name)
	{
		this->age = age;
		this->name = name;
		std::cout << "The age " << this->age << " name is " << this->name << "\n";
	}
*/

};

int main()
{
	Dog d1  {5};//, "Hello"};
	return 0;
}
