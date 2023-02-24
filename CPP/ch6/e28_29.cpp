/*  PSEUDOCODE

    Determine perfect numbers between 1 and 1000
    -------------------------------
    A. Initialize variables
    B. Find and print the perfect numbers between 1 and 1000
    -------------------------------
    A.
    Initialize perfect to zero
    B.
    Because the program checks 1000 numbers, Counter controlled repetition
    Initialize number to one
    While number is less or equal to 1000
        Check if number is perfect
        Initialize sum of divisors to zero
        While divisor_number is less than number
            if number module divisor is equal to zero
                Add divisor to sum of divisors 
        If sum of divisors is equal to number
            print number
*/
#include <iostream>

const unsigned long int MAX_PERFECT_NUMBER = 10000;
const unsigned long int MAX_PRIME_NUMBER = 100;

void perfect(unsigned long int number);
int isPrime(unsigned long int number);

int main() {
    // Perfect numbers
    for (unsigned long int number = 1; number <= MAX_PERFECT_NUMBER; number++) {
        perfect(number);
    }

    unsigned long int prime = 0;
    // Prime numbers
    for (unsigned long int number = 1; number <= 100; number++) {
        if (isPrime(number) == 0) {
            std::cout << number << std::endl;
        }
    }
    
    return 0;
}

void perfect(unsigned long int number) {
    int sum_of_divisors = 0;
    for (unsigned long int divisor = 1; divisor <= number/2; divisor++) {
        if ((number % divisor) == 0) {
            sum_of_divisors += divisor;
        }
    }
    if (sum_of_divisors == number) {
        std::cout << number << std::endl;
    }
}

int isPrime(unsigned long int number) {
    int is_prime = 0;
    
    for (unsigned long int num = 1; num <= number/2 +1; num++) {
        if (number % num == 0 && num != 1) {
            is_prime = 1;
            break;
        }
    }
    
    return is_prime;
}
