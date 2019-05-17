#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <iostream>
#include <fstream>

using namespace boost::archive;

void save()
{
	// Create a file of name archive.txt 
	std::ofstream file {"archive.txt"};
	// Input the data to the archive txt file
	text_oarchive oa{file};
	int i = 1;
	oa << i;
}

void load()
{	//Open the archive.txt file
	std::ifstream file{"archive.txt"};
	// Read the data from the file
	text_iarchive ia{file};
	int i = 0;
	ia >> i;
	// Print the data
	std::cout << "i :" << i << "\n";
}

int main()
{
	save();
	load();
	return 0;
}
