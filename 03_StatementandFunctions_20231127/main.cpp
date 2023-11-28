#include <iostream>
#include <compare>
 
// Statements and Functions

int addNumers(int A, int B){
    int sum = A + B; // THIS is and statement which finishes with semicolon
    std::cout << "This is the summation: " << sum << std::endl;
};

int main(int argc, char **argv){
    int value1 = 12;
    int value2 = 15;
    // Also variables can be assigned in following form
    int value1 {12};
    addNumers(value1, value2);
    return 0;
}

