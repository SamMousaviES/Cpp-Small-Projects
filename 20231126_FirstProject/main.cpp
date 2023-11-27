#include <iostream>
#include <compare>
/* 
int main() {
    auto comparisonResult = 30 <=> 20;
    bool isGreaterThan = comparisonResult > 0;

    std::cout << isGreaterThan << std::endl; // This will print 1 (true) because 30 is greater than 20
    return 0;
}

// One line comment

/_* 
This is a multiple line of comments 
Comment block  (without (_))
*_/
*/


/* 
// TYPE OF ERRORS
// 1 Compile Time error
// 2 Run time error

int main(int argc, char **argv) {
    // Compile Time error
    std::cout << "Hello World" << std::endl;
    // Run time error
    int value = 7/0;
    std::cout << "Value: " << value << std::endl;

    return 0;
}
*/

// Statements and Functions
/*
int addNumers(int A, int B){
    int sum = A + B;
    std::cout << "This is the summation: " << sum << std::endl;
};

int main(int argc, char **argv){
    int value1 = 12;
    int value2 = 15;
    addNumers(value1, value2);
    return 0;
}
*/

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