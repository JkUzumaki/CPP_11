#include<iostream>
#include<array>
#include<vector>

class NoexceptCopy
{
public:
	std::array<int, 5> arr {{1, 2, 3, 4, 5}};
};

class NonNoexceptCopy
{
public:
	std::vector<int> v{1, 2, 3, 4, 5};
};

template <typename T>
T copy(T const& src)  noexcept(noexcept(T(src)))
{
	return src;
}

int main()
{
	NoexceptCopy noexceptCopy;
	NonNoexceptCopy nonNoexceptCopy;

	std::cout << "std::boolalpha: " << std::boolalpha << std::endl;

	std::cout << "noexcept(copy(noexceptCopy)): " << 
		noexcept(copy(noexceptCopy)) << std::endl;

	std::cout << "noexcept(copy(NonexceptCopy)) : " <<
		noexcept(copy(nonNoexceptCopy)) << std::endl;

	std::cout << "\n";
}
