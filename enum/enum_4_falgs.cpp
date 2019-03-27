#include<iostream>

enum designFlags{
	BOLD = 1,
	ITALICS = 2,
	UNDERLINE = 4
};

int main()
{
	int myDesign = BOLD | UNDERLINE;
	std::cout << "myDesign : " << myDesign << std::endl;
	if(myDesign & ITALICS)
		std::cout << "The code is in Itialics " << myDesign << std::endl; 
	else
		std::cout << "Check\n";
	return 0;
}
