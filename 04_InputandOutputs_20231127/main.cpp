#include <iostream>
#include <fstream> // getline function doesnt work without it
// input and output
int addNumers(int A, int B){
    int sum = A + B;
    std::cout << "This is the summation: " << std::endl;
    return sum;
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
    std::string fullName;
    std::cout << "Enter youEr Age:" << std::endl;
    std::getline(std::cin, fullName);  //THIS Line doesnt work properly!!!!
    std::cin >> age;
    std::cout << "Hello " << fullName << " you are " << age << " years old!" << std::endl;

    std::cerr << "Error Message" << std::endl;
    std::clog << "Log Message" << std::endl;
    return 0;
}