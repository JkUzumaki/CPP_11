#include <iostream>
#include <string>
#include <memory>
#include <sstream>
using namespace std;

class C;

class A {
      private:
           shared_ptr<C> ptr;
      public:
           A() {
                 cout << "A constructor" << endl;
           }

           ~A() {
                 cout << "A destructor" << endl;
           }

           void setObject ( shared_ptr<C> ptr ) {
                this->ptr = ptr;
           }
};

class B {
      private:
           shared_ptr<C> ptr;
      public:
           B() {
                 cout << "B constructor " << endl;
           }

           ~B() {
                 cout << "B destructor " << endl;
           }
 
           void setObject ( shared_ptr<C> ptr ) {
                this->ptr = ptr;
           }
};

class C {
      private:
           shared_ptr<A> ptr1;
           shared_ptr<B> ptr2;
      public:
           C(shared_ptr<A> ptr1, shared_ptr<B> ptr2) {
                   cout << "C constructor " << endl;
                   this->ptr1 = ptr1;
                   this->ptr2 = ptr2;
           }

           ~C() {
                   cout << "C destructor " << endl;
           }
};

int main ( ) {
                shared_ptr<A> a( new A() );
                shared_ptr<B> b( new B() );
                shared_ptr<C> c( new C( a, b ) );

                a->setObject ( shared_ptr<C>( c ) );
                b->setObject ( shared_ptr<C>( c ) );

                return 0;
}
