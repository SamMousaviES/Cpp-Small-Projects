#include <iostream>
#include <compare>
 
// input and output
int addNumers(int A, int B){
    int sum = A + B;
    std::cout << "This is the summation: " << sum << std::endl;
};

int main(int argc, char **argv){
    int value1;
    int value2;
    std::cout << "Input your first number: " << std::endl;
    std::cin >> value1;
    std::cout << "Input your first number: " << std::endl;
    std::cin >> value2;
    std::cout << "The Summation is: " << addNumers(value1, value2) << std::endl;

    int age;
    int fullName;
    std::cout << "Enter your Age:" << std::endl;
    std::cin >> age;
    std::getline(std::cin, fullName);
    std::cout << "Hello " << fullName << " you are " << age << " years old!" << std::endl;

    std::cerr << "Error Message" << std::endl;
    std::clog << "Log Message" << std::endl;
    return 0;
}