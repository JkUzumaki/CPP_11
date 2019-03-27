#include<iostream>
#include<climits>

enum struct Colour0: bool{
	red,
	blue,
};

enum Colour1{
	red = -5,
	blue,
	green
};

enum struct Colour2:char{
	red = 100,
	blue,
	green	
};

enum class Colour3: long long int{
	red = LLONG_MIN,
	blue,
	green
};

int main()
{
	std::cout << std::endl;
	std::cout << "sizeof(Colour0) = " <<sizeof(Colour0) << std::endl;
	std::cout << "sizeof(Colour1) = " <<sizeof(Colour1) << std::endl;
	std::cout << "sizeof(Colour2) = " <<sizeof(Colour2) << std::endl;
	std::cout << "sizeof(Colour3) = " <<sizeof(Colour3) << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "Colour0::red: " << static_cast<bool> (Colour0::red) << std::endl;
	std::cout << "red: " << red << std::endl;
	std::cout << "Colour2::red: " << static_cast<char> (Colour2::red) << std::endl;
	std::cout << "Colour3::red: " << static_cast<long long int> (Colour3::red) << std::endl;

	return 0;
}
