// Coin Tossing simulation
#include <iostream>
#include <cstdlib>
#include <ctime>

enum TOSS {HEADS, TAILS};

int flip();

int main() {
    unsigned int toss = 0;
    unsigned int heads_total = 0;
    unsigned int tails_total = 0;

    // Initialize generator
    std::srand(static_cast<unsigned int>(time(0)));
    // Toss the coin 100 times
    for (unsigned int toss_counter = 0; toss_counter < 100; toss_counter++) {
        toss = flip();
        if(toss == HEADS) {
            heads_total++;
            std::cout << "Heads" << std::endl;
        } else {
            tails_total++;
            std::cout << "Tails" << std::endl;
        }
    }
    std::cout << "Total:\nHeads: " << heads_total << "Tails: " << tails_total << std::endl;
    return 0;
}
int flip() {
    unsigned int toss = 0;
    // Single toss
    toss = rand() % 2;
    if (toss == HEADS) {
        return HEADS;
    } else {
        return TAILS;
    }
}