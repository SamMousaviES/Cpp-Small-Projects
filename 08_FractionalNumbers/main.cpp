#include <iostream>
#include <iomanip> // it is for  std::setprecision(20);

int main() {

    std::cout << " " << std::endl; 
    std::cout << " " << std::endl; 
    std::cout << "Define and sizing:" << std::endl; 
    float value1 {1};
    double value2 {-300};
    long double value3 {-500};

    std::cout << "value1: " << value1 << std::endl; 
    std::cout << "value2: " << value2 << std::endl; 
    std::cout << "value3: " << value3 << std::endl; 
    std::cout << "sizeof value1: " << sizeof(value1) << std::endl;
    std::cout << "sizeof value2: " << sizeof(value2) << std::endl;
    std::cout << "sizeof value3: " << sizeof(value3) << std::endl;



    // ERROR compile problem becuase the number of digits are more than 7 for float
    // float value4 {132452354};
    // std::cout << "value4: " << value4 << std::endl; 
    // std::cout << "sizeof value4: " << sizeof(value4) << std::endl;

    std::cout << " " << std::endl; 
    std::cout << " " << std::endl; 
    std::cout << "SCIENTIFIC Notation:" << std::endl; 

    // Set the percision
    std::cout << std::setprecision(20); // from #include <iomanip> liberary 

    // SCIENTIFIC Notation
    double value5 {192400023};
    double value6 {1.92400023e8};
    double value7 {1.924e8};
    double value8 {0.00000000003498};
    double value9 {3.498e-11};

    std::cout << "value5: " << value5 << std::endl; 
    std::cout << "value6: " << value6 << std::endl; 
    std::cout << "value7: " << value7 << std::endl; 
    std::cout << "value8: " << value8 << std::endl; 
    std::cout << "value9: " << value9 << std::endl; 

    std::cout << "sizeof value5-9: " << sizeof(value9) << std::endl;

    std::cout << " " << std::endl; 
    std::cout << " " << std::endl; 
    std::cout << "Devide By Zero:" << std::endl; 
    // Devide By Zero
    double number10 {5.6};
    double number11 {}; // same as =0
    double number12 {};

    double result1 {number10/number11};
    std::cout << "Devide a fractional number By Zero: " << result1 << std::endl; 
    double result2 {number11/number12};
    std::cout << "Devide Zero' By Zero: " << result2 << std::endl; 

    std::cout << " " << std::endl; 
    std::cout << " " << std::endl; 
    std::cout << "use suffixes to dermine if it is a float number:" << std::endl; 
    // use suffix to dermine if it is a float number
    float number1 {0.12345678901234567890f};
    double number2 {0.12345678901234567890};
    long double number3 {0.12345678901234567890L};
    float number4 {123456789.12345678901234567890f};
    std::cout << "Real number         : 0.12345678901234567890" << std::endl; 
    std::cout << "float number1       : " << number1 << std::endl; 
    std::cout << "double number2      : " << number2 << std::endl; 
    std::cout << "long double number3 : " << number3 << std::endl; 
    std::cout << "" << std::endl; 
    std::cout << "Real number         : 123456789.12345678901234567890f" << std::endl; 
    std::cout << "float number4       : " << number4 << std::endl; 



}