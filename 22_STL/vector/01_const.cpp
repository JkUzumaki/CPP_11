#include <iostream>
#include <vector>

class Sample
{
// Copy Constructor should not be private if we are inserting it's
// objects in std::vector
public:
Sample(const Sample & obj)
{
std::cout<<"Sample :: Copy Constructor"<<std::endl;
}
//public:
Sample()
{
std::cout<<"Sample :: Default Constructor"<<std::endl;
}
Sample & operator=(const Sample & obj)
{
std::cout<<"Sample :: Assignment Operator"<<std::endl;
}
};
int main()
{
std::vector<Sample> vecOfSamples;
Sample obj;
vecOfSamples.push_back(obj);
return 0;
}
