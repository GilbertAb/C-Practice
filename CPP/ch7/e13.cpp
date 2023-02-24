// Duplicate elimination with array
// Read 20 numbers (each between 10 and 100, inclusive)
// Validate and store in the array only if isn't a duplicate number already read
// After reading all the values, display the unique values

#include <iostream>
#include <array>

const size_t arraySize = 20;

int findNumberInArray(std::array<int, arraySize> numbersArray, int number);

int main() {
    std::array<int, arraySize> numbersArray = {};
    unsigned int number = 0;
    for (int num = 0; num < arraySize; num++) {
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (!findNumberInArray(numbersArray, number) && number > 9 && number < 101) {
            numbersArray[num] = number;
        }
    }
    // Print
    for (int num : numbersArray) {
        if (num != 0) {
            std::cout << num << std::endl;
        }
    }
    return 0;
}

int findNumberInArray(std::array<int, arraySize> numbersArray, int number) {
    int found = 0;
    for (int num : numbersArray) {
        if(num == number) {
            found = 1;
            break;
        }
    }
    return found;
}
