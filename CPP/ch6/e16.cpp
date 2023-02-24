#include <iostream>
#include <cstdlib>

int main() {
    unsigned int seed = 0;
    std::cout << "Enter the seed: ";
    std::cin >> seed;

    std::srand(seed); // Seed the random number generator

    // number = shifting value + rand() % scalingFactor;
    // shifting value = lowerbound
    // scaling factor =  upperbound + 1 - shifting value

    // 1 <= n <= 2
    int n = 1 + rand() % 2;
    std::cout << n << std::endl;
    // 1 <= n <= 100
    n = 1 + rand() % 100;
    std::cout << n << "\n" << std::endl;
    // 0 <= n <= 9
    n = 0 + rand() % 10;
    std::cout << n << std::endl;
    // 1000 <= n <= 1112
    n = 1000 + rand() % 112;
    std::cout << n << std::endl;
    // -1 <= n <= 1
    n = -1 + rand() % 3;
    std::cout << n << std::endl;
    // -3 <= n <= 11
    n = -3 + rand() % 15;
    std::cout << n << std::endl;
    
    return 0;
}