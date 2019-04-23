#include<iostream>

//this function can throw leak or exception
void fn1()  //noexcept(false)
{

}

//this function can throw leak or exception
//If it leaks the whole program crashes
void fn2() noexcept //noexcpet(true)
{

}

//this function can throw leak or exception
//If it leaks the whole program crashes
void fn3() noexcept(true)   //noexcept
{

}

//this function can throw leak or exception
void fn4() noexcept(false)
{

}

int main()
{
    std::cout << std::boolalpha;
    //constexpr means exp is evaluated at compile time
    constexpr bool does_fn1_throw = noexcept(fn1());  // fn() is a compile time exp, fn1 is not called
    constexpr bool does_fn2_throw = noexcept(fn2());
    constexpr bool does_fn3_throw = noexcept(fn3());
    constexpr bool does_fn4_throw = noexcept(fn4());

    std::cout << "does fn1 not throw exception? " << does_fn1_throw << std::endl;  // if true then it throw or leak exp
    std::cout << "does fn2 not throw exception? " << does_fn2_throw << std::endl;  // if true then it throw or leak exp
    std::cout << "does fn3 not throw exception? " << does_fn3_throw << std::endl;  // if true then it throw or leak exp
    std::cout << "does fn4 not throw exception? " << does_fn4_throw << std::endl;  // if true then it throw or leak exp
}
