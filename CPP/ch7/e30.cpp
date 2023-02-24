// Print an array
// Print an array using a recursive function

#include <iostream>
#include <array>

const unsigned int ARRAY_SIZE = 10;

void printArray (std::array<int, ARRAY_SIZE> arr, unsigned int startSubscript, unsigned int endSubscript);

int main () {
    std::array<int, ARRAY_SIZE> arr = {2,4,6,8,10,12,14,16,18,20};
    printArray(arr, 0, arr.size());
    return 0;
}

void printArray (std::array<int, ARRAY_SIZE> arr, unsigned int startSubscript, unsigned int endSubscript) {
    // Base case (end reached)
    if (startSubscript == endSubscript) {
        std::cout << "|";
    } else {
        // Recursive call (end not reached)
        std::cout << "|" << arr[startSubscript];
        printArray(arr, startSubscript + 1, endSubscript);
    }
}