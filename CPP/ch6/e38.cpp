// Towers of Hanoi
#include <iostream>

void hanoi(unsigned int currentDisk, unsigned int initialPeg, unsigned int targetPeg, unsigned int temporaryPeg);

int main() {
    hanoi(3, 1, 3, 2);
    return 0;
}

void hanoi(unsigned int currentDisk, unsigned int initialPeg, unsigned int targetPeg, unsigned int temporaryPeg) {
    if (currentDisk == 0) {
        //std::cout << initialPeg << "->" << targetPeg << std::endl;
        return;
    }
    hanoi(currentDisk - 1, initialPeg, temporaryPeg, targetPeg);
    std::cout << currentDisk << "->" << targetPeg << std::endl;
    hanoi(currentDisk -1, temporaryPeg, targetPeg, initialPeg);
}