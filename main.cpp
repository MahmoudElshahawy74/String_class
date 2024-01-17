#include "string_class.hpp"
#include <iostream>

int main() {
    // Example usage
    MyString str1("Hello");
    MyString str2 = str1; // Copy constructor

    MyString str3;
    str3 = str1; // Copy assignment operator

    MyString str4("World");
    MyString str5 = std::move(str4); // Move constructor

    MyString str6("Guys !");
    MyString str7;
    str7 = std::move(str6); // Move assignment operator

    std::cout << "str1: " << str1.c_str() << std::endl;
    std::cout << "str2: " << str2.c_str() << std::endl;
    std::cout << "str3: " << str3.c_str() << std::endl;

    // std::cout << "str4: " << str4.c_str() << std::endl; // After move, str4 is a valid but its ptr point to null
    std::cout << "str5: " << str5.c_str() << std::endl; 

    // std::cout << "str6: " << str6.c_str() << std::endl; // After move, str6 is a valid but its ptr point to null    
    std::cout << "str7: " << str7.c_str() << std::endl;

    return 0;
}