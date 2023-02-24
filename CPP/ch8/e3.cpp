#include <iostream>

int main() {
    //a)
    double numbers[10] = {0,0,1,1,2,2,3,3,4,4};
    //b)
    double * nPtr = nullptr;
    //c)
    for (int i = 0; i < 10; i++) {
        std::cout << numbers[i] << "-";
    }
    std::cout<<std::endl;
    //d)
    nPtr = numbers;
    nPtr = &numbers[0];
    //e)
    for (int i = 0; i < 10; i++) {
        std::cout << *(nPtr + i) << "-";
    }
    std::cout<<std::endl;
    //f)
    for (int i = 0; i < 10; i++) {
        std::cout << *(numbers + i) << "-";
    }
    std::cout<<std::endl;
    //g)
    for (int i = 0; i < 10; i++) {
        std::cout << nPtr[i] << "-";
    }
    std::cout<<std::endl;
    //h)
    std::cout << numbers[4] << std::endl;
    std::cout << numbers + 4 << std::endl;
    std::cout << nPtr[4] << std::endl;
    std::cout << nPtr + 4 << std::endl;
    //i)
    std::cout << nPtr + 8 << std::endl;
    //j)
    nPtr += 5;
    nPtr -= 4;
    std::cout << *(nPtr + 8) << std::endl;

    return 0;
}