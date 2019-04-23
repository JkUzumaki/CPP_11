#include<iostream>

enum week {Sun, Mon, Tue, Wed, Thu, Fri, Sat};

int main()
{
	week today;
	today = Wed;
	std::cout << "Day : " << today+1 <<"\n";
	return 0;	
}
