// Find the minimum value in an array
// Using a recursive function

#include <iostream>
#include <array>

const unsigned int ARRAY_SIZE = 10;

int recursiveMinimum (std::array<int, ARRAY_SIZE> arr, unsigned int startSubscript, unsigned int endSubscript);


int main () {
    std::array<int, ARRAY_SIZE> arr = {32,18,6,8,16,22,14,10,4,20};
    std::cout << recursiveMinimum(arr, 0, arr.size() - 1);

    return 0;
}

// End subscript must be array.size() - 1
int recursiveMinimum (std::array<int, ARRAY_SIZE> arr, unsigned int startSubscript, unsigned int endSubscript) {
    // Base case (end of array)
    if (startSubscript == endSubscript) {
        return arr[startSubscript];
    }
    // Recursive call 
    int minimum = recursiveMinimum(arr, startSubscript + 1, endSubscript);
    if (arr[startSubscript] < minimum) {
        minimum = arr[startSubscript];
    }
    return minimum;
}