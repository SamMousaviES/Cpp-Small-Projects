#include <iostream>

int main() {
    // This HW is about Logical Operators like AND, OR, NOT (&&, ||, !)
    bool A {true};
    bool B {false};

    std::cout << std::boolalpha;
    std::cout << "A is: " << A << std::endl;
    std::cout << "B is: " << B << std::endl;

    std::cout << "(A && B) = " << (A && B) << std::endl;
    std::cout << "(A || B) = " << (A || B) << std::endl;
    std::cout << "(!A) = " << (!A) << std::endl;
    std::cout << "(!B) = " << (!B) << std::endl;
}