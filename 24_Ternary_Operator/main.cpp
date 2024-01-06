#include <iostream>

int main() {
    int max {};

    int a {22};
    int b {15};
    bool result {a>b ? true:false};
    max = result?a:b;
    std::cout << "Maximum is: " << max << std::endl; 
    return 0;
}