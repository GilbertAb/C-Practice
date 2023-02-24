// Print a String backwards

#include <iostream>
#include <string>

std::string stringReverse (std::string str, unsigned int startSubscript);

int main () {
    std::string testStr = "Carambola";
    std::cout << stringReverse(testStr, 0);
    return 0;
}

std::string stringReverse (std::string str, unsigned int startSubscript) {
    std::string reversedString = "";
    
    // Base case (end reached)
    if (startSubscript == str.size()) {
        return reversedString;
    }
    // Recursive call
    reversedString = stringReverse(str, startSubscript + 1);
    reversedString += str[startSubscript];

    return reversedString;
}