#include <iostream>
#include <iomanip>

int main() {
    std::showpoint;
    std::setprecision(10);

    int i{};
    while (i<10){
        std::cout << "while loop number: " << i << std::endl; 
        ++i;
    }
    std::cout << "final value of while loop iterrator is: " << i << std::endl; 
    
    int j{};
    do {
        std::cout << "do-while loop number: " << j << std::endl; 
        ++j;
    }while (20<10);
    std::cout << "final value of do-while loop iterrator is: " << j << std::endl; 
    

}