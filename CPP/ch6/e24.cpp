#include <iostream>

int quotient(int,int);
int remainder(int,int);

int main() {
    unsigned int number = 0;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    int divisor = 10;

    while(quotient(number, divisor) > 0) {
        std::cout << remainder(number, divisor) << " ";
        number = quotient(number, divisor);
    }
    std::cout << remainder(number, divisor);

    return 0;
}

int quotient(int a, int b) {
    return a / b;
}

int remainder(int a, int b) {
    return a % b;
}