#include <iostream>
#include <iomanip>

int main() {
    std::showpoint;
    std::setprecision(10);
    for (int i {}; i<11; ++i){
        std::cout << "Loop 1 number: " << i << std::endl; 
    }

    for (double ii {1.1}; ii<11; ii=ii+0.1){
        std::cout << "Loop 2 (double) number: " << ii << std::endl; 
    }

    // NOTE size_t is a type
    for (size_t ii1 {1}; ii1>11; ++ii1){
        std::cout << "Loop 3 (size_t) number: " << ii1 << std::endl; 
    }

    for (double ii {1.1}; ii>-11; ii=ii-0.0001){
        std::cout << "Loop 4 (double and minus) number: " << ii << std::endl; 
    }

    // initialize itrator outside the for loop
    double j{2.1};
    for (j; j>-11; j=j-0.01){
        std::cout << "Loop 5 (double and minus) number: " << j << std::endl; 
    }
    std::cout << "final value of loop 5 iterrator is: " << j << std::endl; 
    

}