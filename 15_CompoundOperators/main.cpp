#include <iostream>

int main() {

    int value {105};
    std::cout << "The value is: " << value << std::endl;
    value +=5;
    std::cout << "value + 5 is: " << value << std::endl;
    std::cout << std::endl;

    std::cout << "The value is: " << value << std::endl;
    value -=5;
    std::cout << "value - 5 is: " << value << std::endl;
    std::cout << std::endl;

    std::cout << "The value is: " << value << std::endl;
    value *=5;
    std::cout << "value * 5 is: " << value << std::endl;
    std::cout << std::endl;

    std::cout << "The value is: " << value << std::endl;
    value /=5;
    std::cout << "value / 5 is: " << value << std::endl;
    std::cout << std::endl;

    std::cout << "The value is: " << value << std::endl;
    value %=5;
    std::cout << "value % 5 is (residual): " << value << std::endl;
    std::cout << std::endl;






}