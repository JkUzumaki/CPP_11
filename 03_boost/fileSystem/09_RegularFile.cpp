#include<boost/filesystem/fstream.hpp>
#include<boost/filesystem.hpp>
#include<string>
#include<iostream>

using namespace boost::filesystem;

int main(int argc, char* argv[])
{
	if(argc < 2){
		std::cout << "Usage: tut8 path\n";
		return 1;
	}
	path p(argv[1]);
	if(is_regular_file(p)){
		time_t t = last_write_time(p);
		// Ctime is used to print the last time the file was opened and modified 
		std::cout << "ctime(&t) " << ctime(&t) << std::endl;
	}	
	return 0;
}
