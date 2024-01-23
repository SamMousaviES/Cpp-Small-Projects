#include <iostream>
#include <iomanip>

int main() {
    std::showpoint;
    std::setprecision(10);

    int i{};
    while (i<=10){
        std::cout << "while loop number: " << i << std::endl; 
        ++i;
    }
    std::cout << "final value of loop iterrator is: " << i << std::endl; 
    

}