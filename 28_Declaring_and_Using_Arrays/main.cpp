#include <iostream>

int main() {

    int size {100};
    int i{};
    int scores [size];
    for (i; i<size;++i) {
        scores[i]=i*2;
        std::cout << "loop number " << i << ", the value is: " << scores[i] << std::endl; 
    };
    


    double scores1 [5] {1.2, 3.3, 2.4, 5.6, 5.4}; // {1.2, 3.3, 2.4, 5.6, 5.4}

    double scores2 [5] {1.2, 3.3, 2.4}; // {1.2, 3.3, 2.4, 0, 0}

}