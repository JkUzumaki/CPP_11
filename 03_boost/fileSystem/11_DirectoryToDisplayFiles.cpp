#include<boost/filesystem/fstream.hpp>
#include<boost/filesystem.hpp>
#include<string>
#include<iostream>

using namespace boost::filesystem;

int main(int argc, char* argv[])
{
	/*if(argc < 2){
		std::cout << "Usage: tut8 path\n";
		return 1;
	}
	*/
	//path p(argv[1]);
	// current_path() gives the current directory
	path p = current_path();
	// iterator to traverse the path
	directory_iterator iter(p);
	
	for(;iter != directory_iterator{}; iter++){
		//temp travels across each files
		path temp(*iter);
		//File extension is checked
		if(temp.extension() == ".cpp")
			std::cout << *iter << std::endl; 
	}	
	return 0;
}
