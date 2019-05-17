#include <iostream>
#include <boost/filesystem.hpp>
using namespace std;
using namespace boost::filesystem;

int main()
{
  /*if (argc < 2)
  {
    cout << "Usage: tut2 path\n";
    return 1;
  }*/

  path p{"//home//jayakumar//work_space//C++//03_boost//fileSystem//03_tut02.cpp"};  // avoid repeated path construction below

   cout<<p.root_name()<<endl;
    cout << file_size(p)<< endl;
 cout<<is_directory(p)<<endl;
cout<<is_regular_file(p)<<endl;
    if (is_regular_file(p)){        // is path p a regular file?
      cout << p << " size is " << file_size(p) << '\n';

    cout << "2"<< endl;
    }else if (is_directory(p))      // is path p a directory?
     { cout << p << " is a directory\n";

    cout << "3"<< endl;
    }else
     { cout << p << " exists, but is not a regular file or directory\n";
    cout << "4"<< endl;
}
  return 0;
}
