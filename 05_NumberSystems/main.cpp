#include <iostream>
#include <compare>

int main() {
    int num1 = 15; // Decimal
    int num2 = 017; // Octal
    int num3 = 0x0F; // Hexadecimal
    int num4 = 0b00001111; // Binary (after C++ 14)

    std::cout << "Decimal:" << num1 << std::endl; 
    std::cout << "Octal:" << num2 << std::endl; 
    std::cout << "Hexadecimal:" << num3 << std::endl; 
    std::cout << "Binary:" << num4 << std::endl; 

    return 0;
}