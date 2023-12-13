#include <iostream>

int main() {
    auto A{31};
    auto B{10};
    

    // addition
    std::cout << "A + B = " << A + B << std::endl;

    // substract
    std::cout << "A - B = " << A - B << std::endl;
    // multiply
    std::cout << "A * B = " << A * B << std::endl;
    // devision
    std::cout << "A / B = " << A / B << " Be Caution!!!" <<  std::endl;
    // mudulus
    std::cout << "A % B = " << A % B << " A and B should be int" <<  std::endl;
}