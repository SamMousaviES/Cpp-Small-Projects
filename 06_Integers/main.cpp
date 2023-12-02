#include <iostream>
#include <compare>

int main() {
int A; // contain garbaged value
int d {10};  // Braced initialization
int c = 15; //Assignment initialization
int dom {c + d};
// int bad {c1 + c2}; //ERROR Becuase c1 and c2 are not defiend befor
// int narrowing {2.9}; //ERROR or WARNING
int narrowingF (2.9); // Functional initialization
int narrowingA = 2.9; // Assignment initialization

std::cout << "A is contain garbaged value: " << A << std::endl;
std::cout << "d is Braced initialization: " << d << std::endl;
std::cout << "c is Assignment initialization: " << c << std::endl;
std::cout << "dom: " << dom << std::endl;
// std::cout << bad << std::endl;
std::cout << "narrowingF (narrowing cnversation) Functional initialization of a float number: " << narrowingF << std::endl;
std::cout << "narrowingA (narrowing cnversation) Assignment initialization of a float number: " << narrowingA << std::endl;

std::cout << "sizeof int itself: " << sizeof(int) << std::endl;  //Size of variable
std::cout << "sizeof int dom: " << sizeof(dom) << std::endl;

return 0;
}