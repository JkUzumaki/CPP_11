#include<iostream>
//Singlton class
class Ston
{
	static Ston *obj;
	Ston()
	{}
public:
	static Ston* getInstance()
	{
		if(obj == NULL){
			obj = new Ston();
			std::cout << "\nThe single object is created\n"; 
		}else{
			std::cout << "\nThe object is already present\n";
		}
	}
};
//Initializing the member 
Ston* Ston::obj = NULL;

int main()
{
	Ston *obj1 = Ston::getInstance();
	Ston *obj2 = Ston::getInstance();
	return 0;
}
