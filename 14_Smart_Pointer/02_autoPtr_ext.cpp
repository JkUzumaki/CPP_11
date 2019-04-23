#include<iostream>
#include<memory>

class Test
{
public:
	Test(int a = 0): m_a(a)
	{}
	~Test()
	{
		std::cout << "Calling Destructor\n";
	}
	int m_a;
};

void Fun()
{
	int a = 0, b = 5, c;
	if( a== 0)
		throw "Invalid divisor\n";
	c = b/a;
}

int main()
{
	try
	{
		std::auto_ptr<Test> p (new Test(5));
		Fun();
		std::cout << "p->m_a " << p->m_a << std::endl;
	}
	catch(...)
	{
		std::cout << "Something has gone wrong\n";
	}
	return 0;
}
