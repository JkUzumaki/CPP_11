#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/filesystem.hpp>
using std::cout;
using namespace boost::filesystem;

int main(int argc, char* argv[])
{
  if (argc < 2)
  {
    cout << "Usage: tut4 path\n";
    return 1;
  }

  path p (argv[1]);

  try
  {
	// checks if the path exist
    if (exists(p))
    {
	// is it a regular file
      if (is_regular_file(p))
        cout << p << " size is " << file_size(p) << '\n';
	// is it a directory
      else if (is_directory(p))
      {
        cout << p << " is a directory containing:\n";
	// vector taking path as input
        std::vector<path> v;
	// auto && means, It accept any initializer regardless of whether its a lvalue or rvalue
	// expression while preserving its constness
        for (auto&& x : directory_iterator(p))
          v.push_back(x.path()); 
	//Sorting the vector entries
        std::sort(v.begin(), v.end());  
	int i = 1;
        for (auto&& x : v){
          cout <<i <<  "    " << x.filename() << '\n';
	  i++;
	}
      }
      else
        cout << p << " exists, but is not a regular file or directory\n";
    }
    else
      cout << p << " does not exist\n";
  }
	
  catch (const filesystem_error& ex)
  {
    cout << ex.what() << '\n';
  }

  return 0;
}
