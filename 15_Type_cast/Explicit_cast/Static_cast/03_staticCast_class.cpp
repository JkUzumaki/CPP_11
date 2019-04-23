#include<iostream>
#include<string>

class Int
{
private:
	int x;
public:
	Int(int x_in = 0):x{x_in}
	{
		std::cout << "Conv constructor called\n";
	}
	operator std::string()
	{
		std::cout << "Conv Operator\n";
		return std::to_string(x);
	}
};

int main()
{
	Int obj(3);
	std::string str = obj;
	obj = 20;
	std::string str2 = static_cast<std::string> (obj);
	obj = static_cast<Int> (30);
	return 0;
}
