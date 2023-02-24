#include <iostream>
unsigned int greatestCommonDivisor(unsigned int x, unsigned int y);

int main() {
    unsigned int x = 0;
    unsigned int y = 0;

    std::cout << "Enter the two numbers\nEnter the largest number first: ";
    std::cin >> x >> y; 

    std::cout << greatestCommonDivisor(x, y);

    return 0;
}

unsigned int greatestCommonDivisor(unsigned int x, unsigned int y) {
    if (y == 0) {
        return x;
    } else {
        return greatestCommonDivisor(y, x % y);
    }
}