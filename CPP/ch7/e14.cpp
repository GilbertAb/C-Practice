// Duplicate elimination with array
// Read 20 numbers (each between 10 and 100, inclusive)
// Validate and store in the array only if isn't a duplicate number already read
// After reading all the values, display the unique values

#include <iostream>
#include <vector>

//const size_t arraySize = 20;

int findNumberInVector(std::vector<int> numbersVector, int number);

int main() {
    std::vector<int> numbersVector = {};
    unsigned int number = 0;
    for (int num = 0; num < 5; num++) {
        std::cout << "Enter a number: ";
        std::cin >> number;
        if (!findNumberInVector(numbersVector, number) && number > 9 && number < 101) {
            numbersVector.push_back(number);
        }
    }
    // Print
    for (int num : numbersVector) {
        std::cout << num << std::endl;
    }
    return 0;
}

int findNumberInVector(std::vector<int> numbersVector, int number) {
    int found = 0;
    for (int num : numbersVector) {
        if(num == number) {
            found = 1;
            break;
        }
    }
    return found;
}
