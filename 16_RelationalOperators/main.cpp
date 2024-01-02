#include <iostream>

int main() {
    double A {102.6};
    double B {10.6};


std::cout << "Number A and B are " << A << " and " << B << ", respectively." << std::endl;

std::cout << std::boolalpha;
std::cout << "Number A is smaller than B: " << (A<B)  << std::endl;
std::cout << "Number A is greater than B: " << (A>B)  << std::endl;
std::cout << "Number A is smaller/equal than/to B: " << (A<=B)  << std::endl;
std::cout << "Number A is greater/equal than/to B: " << (A>=B)  << std::endl;
std::cout << "Number A is equal to B: " << (A==B)  << std::endl;
std::cout << "Number A is NOT equal to B: " << (A!=B)  << std::endl;

}