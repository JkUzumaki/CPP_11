#include<iostream>
/*
enum OldEnum
{
	one = 1,
	ten = 10,
	hundered = 100,
	thousand = 1000
};
*/
enum struct NewEnum
{
	one = 'a',
	ten = 'b',
	hundered = 'c',
	thousand = 'd'	
};

int main()
{
	std::cout << "\n";
	int one = 90;
	std::cout << "one " << one << std::endl;
//	std::cout << "OLD C++11= " << 2*thousand + 0* hundered + 1 * ten + 1* one << std::endl;
	/*
	std::cout << "NEW C++11 = " << 2 * static_cast<int> (NewEnum::thousand) +
				   0 * static_cast<int> (NewEnum::hundered) +
				   1 * static_cast<int> (NewEnum::ten) +
				   1 * static_cast<int> (NewEnum::one) <<std::endl;
	*/
	std::cout << "NEW _C++11 = " << 2 *  static_cast<char> (NewEnum::thousand) +
				   0 *  static_cast<char> (NewEnum::hundered) +
				   1 *  static_cast<char> (NewEnum::ten) +
				   1 *  static_cast<char> (NewEnum::one) <<std::endl;
	return 0;	
}
