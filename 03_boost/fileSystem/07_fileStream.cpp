#include<boost/filesystem/fstream.hpp>
#include<iostream>

using namespace boost::filesystem;

int main()
{
	path p{"text.txt"};
	ofstream ofs{p};
	ofs << "Hello, World!\n";
}
