#include <iostream>

using namespace std;
class Emp{
    int id;
    string name;
    public:
    Emp(int id,string name){
       this->id=id;
       this->name=name;
    }
    void updateEmp(int id,string name){
        this->id=id;
       this->name=name;
    }
    void display(){
        std::cout << id<< "  "<<name << std::endl;
    }
};
int main()
{
    Emp e1(123,"emp_1");
    e1.display();
    Emp e2=e1;
    e2.display();
    e1.updateEmp(124,"emp_2");
    //e2.updateEmp(102,"Suresh");
    e1.display();
    e2.display();
    return 0;
}
