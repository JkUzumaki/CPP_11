#include <iostream>
#include <string>
#include <memory>
#include <sstream>
using namespace std;

class MyClass {
      private:
           static int count;
           string name;
      public:
           MyClass() {
                 ostringstream stringStream(ostringstream::ate);
                 stringStream << 'Object';
                 stringStream << ++count;
                 name = stringStream.str();
                 cout << 'nMyClass Default constructor - ' << name << endl;
           }
           ~MyClass() {
                 cout << 'nMyClass destructor - ' << name << endl;
           }

           MyClass ( const MyClass &objectBeingCopied ) {
                 cout << 'nMyClass copy constructor' << endl;
           }

           MyClass& operator = ( const MyClass &objectBeingAssigned ) {
                 cout << 'nMyClass assignment operator' << endl;
           }

           void sayHello( ) {
                cout << 'Hello from MyClass ' << name << endl;
           }
};

int MyClass::count = 0;

int main ( ) {

   auto_ptr<MyClass> ptr1( new MyClass() );
   auto_ptr<MyClass> ptr2( new MyClass() );

   return 0;

}
