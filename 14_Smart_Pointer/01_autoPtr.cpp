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

int main()
{
	std::auto_ptr<Test> p (new Test(5));
	std::cout << "p->m_a " << p->m_a << std::endl;
	return 0;
}
