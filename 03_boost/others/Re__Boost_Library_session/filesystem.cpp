#include <iostream>

#include <boost/filesystem.hpp>

#include <ctime>

using namespace std;

 

using namespace boost::filesystem;

 

int main(int argc, char* argv[])

{

  cout << "File size - " << boost::filesystem::file_size("main.cpp") << '\n';

  return 0;

}

 
