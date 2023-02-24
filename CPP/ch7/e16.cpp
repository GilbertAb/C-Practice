// Dice rolling
// Program that simulates the rolling of a dice

#include <iostream>
#include <array>
//#include <random>

inline unsigned int rollDice();

const unsigned int POSSIBLE_SUMS = 11;

int main() {
    unsigned int rolls = 0;
    std::cout << "Enter the amount of rolls: ";
    std::cin >> rolls;

    std::array<int, POSSIBLE_SUMS> sumFreq = {};

    unsigned int roll = 0;
    unsigned int roll2 = 0;
    for (unsigned int r = 0; r < rolls; r++) {
        roll = rollDice();
        roll2 = rollDice();
        
        sumFreq[roll + roll2 - 2] += 1;
    }
    for (int s = 0; s < sumFreq.size(); s++) {
        std::cout << s+2 << "\t" << sumFreq[s] << std::endl;
    }
    return 0;
}

inline unsigned int rollDice() {
    return 1 + std::rand() % 6;
}