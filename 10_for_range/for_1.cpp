#include<iostream>
#include<vector>
int main()
{
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(-30);
	vec.push_back(40);
	
	for (auto i: vec)
		std::cout << "value: " << i << "\n" ;
	return 0;
}
