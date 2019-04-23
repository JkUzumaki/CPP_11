#include<iostream>
#include<memory>
// Class Test
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

//Fun function
void Fun( auto_ptr<Test>(p1) )
{
	std::cout << "p->m_a " << p->m_a << std::endl;
}

//Main function
int main()
{
	std::auto_ptr<Test> p (new Test(5));
	Fun(p);
	std::cout << "p->m_a " << p->m_a << std::endl;
	return 0;
}
