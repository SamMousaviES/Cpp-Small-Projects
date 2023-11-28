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
    addNumers(value1, value2);
    return 0;
}