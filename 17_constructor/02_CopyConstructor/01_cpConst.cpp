#include<iostream> 
using namespace std; 

class Test 
{ 
private:
	int a;
public: 
	//Test(const Test &t) 
	/*Test(Test t) 
	{
		a = t.a;
	} */
	Test()	
	{ 
		a = 120;
	}
	int display()
	{
		return a ;
	}
	void set(int var)
	{
		a = var;
	} 
}; 

int main() 
{ 
	Test t1; 
	cout << "t1.a " << t1.display() << endl;
	//Test t2 = fun(); 
	Test t2 = t1; 
	cout << "T2.a " << t2.display() << endl;
	t2.set(99);
	cout << "t1.a " << t1.display() << endl;
	cout << "T2.a " << t2.display() << endl;
	return 0; 
} 

