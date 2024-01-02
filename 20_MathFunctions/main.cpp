#include <iostream>
#include <cmath>
int main() {
    double A {3.1415};
    double B {-45.0};
    double E {2.7};
    
    std::cout << "A: " << A << ", B: " << B << ", E: " << E << std::endl; 
    std::cout << "floor A: " << std::floor(A) << std::endl; 
    std::cout << "ceil A: " << std::ceil(A) << std::endl; 
    std::cout << "abs B: " << std::ceil(B) << std::endl; 
    std::cout << "exp 1: " << std::exp(1) << std::endl; 
    std::cout << "log E: " << std::log(E) << std::endl; 
    std::cout << "log10 10: " << std::log10(10) << std::endl; 
    std::cout << "pow A^2: " << std::pow(A,2) << std::endl; 
    std::cout << "sqrt A: " << std::sqrt(A) << std::endl; 
    std::cout << "round A: " << std::round(A) << std::endl; 
    std::cout << "sin A: " << std::sin(A) << std::endl; 
    std::cout << "cos A: " << std::cos(A) << std::endl; 
    std::cout << "tan A: " << std::tan(A) << std::endl; 
}