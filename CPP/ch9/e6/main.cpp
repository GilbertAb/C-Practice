#include <iostream>
#include "Rational.h"

int main() {
    Rational num1 = {15,7};
    Rational num2 = {20, 6};
    // Numbers
    std::cout<< "Number 1" <<std::endl;
    num1.print();
    num1.printFloatingPointFormat();
    std::cout<< "\nNumber 2" <<std::endl;
    num2.print();
    num2.printFloatingPointFormat();
    // Add
    std::cout<< "\nAdd" <<std::endl;
    num1.add(num2);
    num1.print();
    num1.printFloatingPointFormat();
    num1.setNumerator(15);
    num1.setDenominator(7);
    // Substract
    std::cout<< "\nSubstract" <<std::endl;
    num1.substract(num2);
    num1.print();
    num1.printFloatingPointFormat();
    num1.setNumerator(15);
    num1.setDenominator(7);
    // Multiply
    std::cout<< "\nMultiply" <<std::endl;
    num1.multiply(num2);
    num1.print();
    num1.printFloatingPointFormat();
    num1.setNumerator(15);
    num1.setDenominator(7);
    // Divide
    std::cout<< "\nDivide" <<std::endl;
    num1.divide(num2);
    num1.print();
    num1.printFloatingPointFormat();
    
    return 0;
}