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
	
	create_directory(p);
	// 
	//rename(p, "/home/jayakumar/work_space/C++/03_boost/fileSystem/Temp");
	//std::cout << "removed the input directory" << remove(argv[1]);	
	//	
	return 0;
}
