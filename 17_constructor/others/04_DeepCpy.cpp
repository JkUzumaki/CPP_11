#include<iostream>

class A
{
	int *ptr;
	int var;
public:
	A()
	{
		var = 100;
		ptr = &var;
	}
	A(const A &obj){
		var = obj.var;
		//ptr = new int();
		ptr = &var;
	}
	void set(int i){
		var = i;
	}
	void setPtr(int i){
		*ptr = i;
	}
	int* getPtr(){
		return ptr;
	}
	int getVar(){
		return var;
	}
};

int main()
{
	A a;
	A a1 = a;
	//Checking the value of the var
	std::cout << "\nThe value of var\n";
	std::cout << "a obj var: " << a.getVar() << std::endl;
	std::cout << "a1 obj var: " << a1.getVar() << std::endl;
	
	//Checking the value of the ptr
	std::cout << "\nThe value of Ptr\n";
	std::cout << "a obj PTR: " << *(a.getPtr()) << std::endl;
	std::cout << "a1 obj PTR: " << *(a1.getPtr()) << std::endl;
	
	//Changing the value of the var in object a 
	std::cout << "\nChanging the var value to 98 \n";
	a.set(98);
	
	//Checking the value of the ptr
	std::cout << "\nThe value of var\n";
	std::cout << "a obj var: " << a.getVar() << std::endl;
	std::cout << "a1 obj var: " << a1.getVar() << std::endl;
	
	//Checking the value of the ptr
	std::cout << "\nThe value of PTR\n";
	std::cout << "a object a value " << *(a.getPtr()) << std::endl;
	std::cout << "a1 object a value " << *(a1.getPtr()) << std::endl;
	
	//Changing the value of the var in object a 
	std::cout << "\nChanging the var value to 198 \n";
	a1.set(198);
	//a1.setPtr(-11);	
	//Checking the value of the ptr
	std::cout << "\nThe value of var\n";
	std::cout << "a obj var: " << a.getVar() << std::endl;
	std::cout << "a1 obj var: " << a1.getVar() << std::endl;
	
	//Checking the value of the ptr
	std::cout << "\nThe value of PTR\n";
	std::cout << "a object a value " << *(a.getPtr()) << std::endl;
	std::cout << "a1 object a value " << *(a1.getPtr()) << std::endl;
	return 0;
}

/*
	The copy constructor is used to refer the pointer to a point to the var 	inside the constructor so it's pointing to it seperately 
*/
