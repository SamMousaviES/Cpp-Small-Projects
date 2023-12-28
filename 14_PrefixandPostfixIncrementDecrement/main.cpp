#include <iostream>

int main() {
    
    int valueP {10};
    std::cout << "for Incerement" << std::endl;
    // NOTE
    std::cout << valueP++ << std::endl; //print 10
    std::cout << valueP << std::endl; //print 11

    valueP = 10;
    std::cout << ++valueP << std::endl; //print 11

    int valueM {10};
    std::cout << "for Decrement" << std::endl;
    // NOTE
    std::cout << valueM-- << std::endl; //print 10
    std::cout << valueM << std::endl; //print 9

    valueM = 10;
    std::cout << --valueM << std::endl;//print 9
}