
// C++ code to demonstrate tuple, get() and make_pair() 
#include<iostream> 
#include<tuple> // for tuple 

int main() 
{ 
    // Declaring tuple 
    //std::tuple <data_type1, data_type2, data_type3> tuple_name = std::make_tuple(data1, data2, data3);
    //std::tuple <char, int, float> geek = std::make_tuple('a', 10, 15.5); 
    std::tuple <char, int, float> geek('a', 10, 15.5); 
    std::tuple <char, int, float> geek1('z', 90, 16.75); 
  
    // Assigning values to tuple using make_tuple() 
    //geek = make_tuple('a', 10, 15.5); 

    // Printing initial tuple values using get() 
    std::cout << "The initial values of tuple01 are : "; 
    std::cout << std::get<0>(geek) << " " << std::get<1>(geek); 
    std::cout << " " << std::get<2>(geek) << std::endl; 
    std::cout << "The initial values of tuple02 are : "; 
    std::cout << std::get<0>(geek1) << " " << std::get<1>(geek1); 
    std::cout << " " << std::get<2>(geek1) << std::endl; 

    // Swaping the elements of the tuple
    geek.swap(geek1);
    std::cout << "After swapping" << std::endl;
     // Printing modified tuple values 
    std::cout << "The swaped values of tuple01 are : "; 
    std::cout << std::get<0>(geek) << " " << std::get<1>(geek); 
    std::cout << " " << std::get<2>(geek) << std::endl; 
    std::cout << "The swaped values of tuple02 are : "; 
    std::cout << std::get<0>(geek1) << " " << std::get<1>(geek1); 
    std::cout << " " << std::get<2>(geek1) << std::endl; 
   
 
    std::cout << "\nThe size of the tuple is: ";
	// auto : makes compiler intefer types
	// decltype : makes compiler evaluate expression
    std::cout << std::tuple_size<decltype(geek)>::value  << " size denote the number of elements in tuple" << std::endl;  
    return 0; 
} 

