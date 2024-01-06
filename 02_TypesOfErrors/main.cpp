#include <iostream>
#include <compare>
 
// TYPE OF ERRORS
// 1 Compile Time error
// 2 Run time error

int main(int argc, char **argv) {
    // Compile Time error
    std::cout << "Hello World" << std::endl
    // Run time error
    int value = 7/0;
    std::cout << "Value: " << value << std::endl;

    return 0;
}

