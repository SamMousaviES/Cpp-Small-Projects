#include <iostream>
#include <limits>

int main() {
    std::cout << "short type:\nlowest:" << std::numeric_limits<short>::lowest() <<  "min:" << std::numeric_limits<short>::min() << ", max:" << std::numeric_limits<short>::max() << std::endl; 
}