#include <iostream>
#include <cmath>

int main() {

    int sizeX1 {30};
    int sizeX2 {10};
    int sizeX3 {20};

    double scoresDouble[sizeX1][sizeX2][sizeX3];
    int scoresInt[sizeX1][sizeX2][sizeX3];
    int counter {0};
    for (int i1 = 0; i1 < sizeX1; ++i1) {
        for (int i2 = 0; i2 < sizeX2; ++i2) {
            for (int i3 = 0; i3 < sizeX3; ++i3) {
                scoresDouble[i1][i2][i3] = static_cast<double>((i1 * i2) / (-1.1*(i3+1)));
                std::cout << "loop number: " << i1 << ", " <<  i2 << ", " << i3 << ", the value is: " << scoresDouble[i1][i2][i3] << std::endl; 
                scoresInt[i1][i2][i3] = (i1 * i2) / (-1.1*(i3+1));
                std::cout << "loop number: " << i1 << ", " <<  i2 << ", " << i3 << ", the value is: " << scoresInt[i1][i2][i3] << std::endl; 
                ++counter;

            }
        }
    };

    // int count {sizeof(scores)/sizeof(scores[0])};
    std::cout << "counter: " << counter << std::endl; 
    std::cout << "scores size: " << sizeX1*sizeX2*sizeX3 << std::endl; 
    return 0;
}
