#include <iostream>
#include <compare>

int main() {
    short unsigned int value1 {1};
    long signed int value2 {-300};
    long long signed int value3 {-500};

    // unsigned int value2 {-300}; // ERROR
    

    std::cout << "value1: " << value1 << std::endl; 
    std::cout << "value2: " << value2 << std::endl; 
    std::cout << "value3: " << value3 << std::endl; 
    std::cout << "sizeof value1: " << sizeof(value1) << std::endl;
    std::cout << "sizeof value2: " << sizeof(value2) << std::endl;
    std::cout << "sizeof value3: " << sizeof(value3) << std::endl;
}