#include <iostream>
#include <typeinfo>

int main() {
    auto var1 {12}; //
    auto var2 {13.0}; //
    auto var3 {14.0f}; //
    auto var4 {15.0l}; //
    auto var5 {'e'}; //

    // int modifier
    auto var6 {123u}; // unsigned
    auto var7 {123ul}; // unsigned long
    auto var8 {123ll}; // long long
    
    std::cout << "sizeof var1: " << sizeof(var1) << std::endl;
    std::cout << "sizeof var2: " << sizeof(var2) << std::endl;
    std::cout << "sizeof var3: " << sizeof(var3) << std::endl;
    std::cout << "sizeof var4: " << sizeof(var4) << std::endl;
    std::cout << "sizeof var5: " << sizeof(var5) << std::endl;
    std::cout << "sizeof var6: " << sizeof(var6) << std::endl;
    std::cout << "sizeof var7: " << sizeof(var7) << std::endl;
    std::cout << "sizeof var8: " << sizeof(var8) << std::endl;

    var1 = 100;
    std::cout << "var1 after re-assignement: " << var1 << std::endl;
    return 0;
}