#include<iostream>

class Test
{
	int &t;
public:
	Test(int &t): t(t) {}
	int getT(){
		return t;
	}
};

int  main()
{
	int x = 20;
	Test t1(x);
	std::cout << t1.getT() << std::endl;
	std::cout << t1.getT() << std::endl;
	x = 30;
	std::cout << t1.getT() << std::endl;
	return 0;
}
