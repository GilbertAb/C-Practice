// The Sieve of Eratosthenes

#include <iostream>
#include <array>

const unsigned int SIEVE_SIZE = 1000;

int main () {
    std::array<unsigned int, SIEVE_SIZE> sieve;
    // Initialize to one
    for (unsigned int& num : sieve) {
        num = 1;
    }
    // Calculate Sieve
    for (int number = 2; number < SIEVE_SIZE; number++) {
        if (sieve[number] == 1) {
            for ( int multiple = number + 1; multiple < SIEVE_SIZE; multiple++) {
                // Set multiples to zero
                if (multiple % number == 0) {
                    sieve[multiple] = 0;
                }
            }
        }
    }
    // Print the prime numbers using the sieve
    for (int num = 2; num < SIEVE_SIZE; num++) {
        if (sieve[num] == 1) {
            std::cout << num << "-";
        }
    }

    return 0;
}
