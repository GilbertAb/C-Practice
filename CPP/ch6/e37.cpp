// Iterative fibonacci
#include <iostream>

void fibonacci(unsigned int n);

int main() {
    unsigned int n = 0;
    std::cout << "Enter the nth fibonacci to search: ";
    std::cin >> n;
    
    fibonacci(n);

    return 0;
}

void fibonacci(unsigned int n) {
    unsigned int penultimateFibonacci = 0;
    unsigned int lastFibonacci = 1;
    unsigned int auxNum = 0;
    std::cout << penultimateFibonacci << std::endl;
    std::cout << lastFibonacci << std::endl;

    for(int nth = 0; nth <= n; nth++) {
        auxNum = lastFibonacci;
        lastFibonacci += penultimateFibonacci;
        std::cout << lastFibonacci << std::endl;
        penultimateFibonacci = auxNum;
    }
}