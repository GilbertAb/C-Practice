// Recursive exponentiation
#include <iostream>
int pow (unsigned int base, unsigned int exponent);

int main () {
    unsigned int base = 0;
    unsigned int exponent = 0;

    std::cout << "Type the base: ";
    std::cin >> base;
    std::cout << "Type the exponent: ";
    std::cin >> exponent;

    std::cout << "Pow: " << pow(base, exponent) << std::endl;

    return 0;
}

int pow (unsigned int base, unsigned int exponent) {
    if (exponent == 1) {
        return base;
    } else {
        return base * pow(base, exponent - 1);
    }
}