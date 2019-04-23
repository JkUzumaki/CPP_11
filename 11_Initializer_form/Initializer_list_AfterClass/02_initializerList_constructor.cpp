#include<iostream>
#include<initializer_list>
#include<vector>

class Test
{
	std::vector <int> T_vec;
public:
	Test(const std::initializer_list<int>& v)
	{	//intializer_list needs std to perform
		for(std::initializer_list<int>::iterator itr = v.begin();
			itr != v.end(); ++itr)
		{
			T_vec.push_back(*itr);	
		}
	}

	void display()
	{
		std::cout << "The display function\n";
		for(auto i: T_vec)
			std::cout << i << " ";
		std::cout << "\n";
	}
};
/////////////////////////////////////////////////////////////////////

int main()
{
	Test obj1 = {1, 2, 3, 4, 5};
	obj1.display();
	
	Test obj2 {10, 20, 30, 40, 50};
	obj2.display();
	
	std::cout << "\n";	
	return 0;
}
