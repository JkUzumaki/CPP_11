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
	
	try
  	{
   	   file_status s = status(p);
    	   std::cout << "is_directory : " << is_directory(s) << '\n';
           //Status just mentions the value but file_size call gives the error status
	   std::cout<<"file size "<<file_size(p)<<std::endl;
  	}
  	catch (filesystem_error &e)
  	{
    	   std::cerr << "e.what() : " << e.what() << '\n';
  	}
	return 0;
}
