#include "Complex.h"

int main() {
    Complex num1 = {3,2};
    Complex num2 = {1,7};
    
    std::cout<< "Number 1" << std::endl;
    num1.print();
    std::cout<< "Number 2" << std::endl;
    num2.print();

    std::cout<< "Addition" << std::endl;
    num1.add(num2);
    num1.print();

    num1.setRealPart(3);
    num1.setImaginaryPart(2);

    std::cout<< "Substraction" << std::endl;
    num1.substract(num2);
    num1.print();

    return 0;
}