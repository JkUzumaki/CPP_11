#include<iostream>

class A
{
public:
	int xPublic;
protected:
	int xProtected;
private:
	int xPrivate;
};
class B: public A
{
public:
	void foo(A *a, B *b)
	{
		//a->xProtected = 0.0;
		b->xProtected = 0.0;
		this->xProtected = 0.0;
	}
};

int main()
{
	A a;
	B b;
	//b.xProtected = 0.0;
	b.foo(&a, &b);
	return 0;
}
