#include <iostream>
#include <ios>
#include <iomanip>
int main() {
    std::cout << std::flush;
    std::cout << std::fixed;
    double value {1.2};
    std::cout << value << std::endl;
    int age1;
    // std::cout << "Your age is (integer): " << std::endl;
    // std::cin >> age1;
    std::cout << std::endl;

    // std::setw(number):
    std::cout << "std::setw(number) and std::right (defualt): " << std::endl;
    std::cout << std::setw(10) << "LastName" << std::setw(10) << "FirstName" << std::setw(5) << "Age" << std::endl;
    std::cout << std::setw(10) << "Mousavi" << std::setw(10) << "Sam" << std::setw(5) << "28" << std::endl;
    std::cout << std::setw(10) << "Fadakar" << std::setw(10) << "Nora" << std::setw(5) << "27" << std::endl;

    std::cout << std::endl;
    std::cout << "std::setw(number) and std::left: " << std::endl;
    // std::setw(number) and std::left:
    int cWString {20};
    int cWInteger {10};
    std::cout << std::left;
    std::cout << std::setw(cWString) << "LastName" << std::setw(cWString) << "FirstName" << std::setw(cWInteger) << "Age" << std::endl;
    std::cout << std::setw(cWString) << "Mousavi" << std::setw(cWString) << "Sam" << std::setw(cWInteger) << "28" << std::endl;
    std::cout << std::setw(cWString) << "Gray" << std::setw(cWString) << "Daniel" << std::setw(cWInteger) << "48" << std::endl;
    std::cout << std::setw(cWString) << "Fadakar" << std::setw(cWString) << "Nora" << std::setw(cWInteger) << "27" << std::endl;

    std::cout << std::endl;
    std::cout << std::hex << std::showbase
              << "0x2a with uppercase: " << std::uppercase << 0x2a << '\n'
              << "0x2a with nouppercase: " << std::nouppercase << 0x2a << '\n'
              << "1e-10 with uppercase: " << std::uppercase << 1e-10 << '\n'
              << "1e-10 with nouppercase: " << std::nouppercase << 1e-10 << '\n';
}