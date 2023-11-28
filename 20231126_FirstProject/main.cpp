#include <iostream>
#include <compare>

int main() {
    auto comparisonResult = 30 <=> 20;
    bool isGreaterThan = comparisonResult > 0;

    std::cout << isGreaterThan << std::endl; // This will print 1 (true) because 30 is greater than 20
    return 0;
}
