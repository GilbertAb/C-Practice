// Palindromes
// Check wether a string is palindrome or not, with a recursive function
#include <iostream>
#include <string>

bool testPalindrome(std::string palindrome, int leftLetter, int rightLetter);

int main () {
    std::string testStr = "able was i ere i saw elba";
    bool test = testPalindrome(testStr, 0, testStr.size()-1);

    std::cout << test << std::endl;

    return 0;
}

bool testPalindrome(std::string palindrome, int leftLetter, int rightLetter) {
    bool isPalindrome = false;
    // Base case (Comparing same letter)
    if (leftLetter == rightLetter) {
        isPalindrome = true;
        return isPalindrome;
    }
    // Recursive call
    // If are the same letters, then check the next letters
    if (palindrome[leftLetter] == palindrome[rightLetter]) {
        isPalindrome = testPalindrome(palindrome, leftLetter + 1, rightLetter -1);
        return isPalindrome;
    } else {
        // Two letters don't match
        // Not palindrome
        return isPalindrome;
    }
}
