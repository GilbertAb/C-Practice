#include "Complex.h"

Complex::Complex(double realPart, double imaginaryPart) : realPart(realPart), imaginaryPart(imaginaryPart) {
}

void Complex::add(Complex number){
    setRealPart(this->getRealPart() + number.getRealPart());
    setImaginaryPart(this->getImaginaryPart() + number.getImaginaryPart());
}
void Complex::substract(Complex number){
    setRealPart(this->getRealPart() - number.getRealPart());
    setImaginaryPart(this->getImaginaryPart() - number.getImaginaryPart());
}
void Complex::print(){
    std::cout << '(' << realPart << ", " << imaginaryPart << ')' << std::endl;
}

double Complex::getRealPart(){
    return this->realPart;
}
void Complex::setRealPart(double realPart){
    this->realPart = realPart;
}
double Complex::getImaginaryPart(){
    return this->imaginaryPart;
}
void Complex::setImaginaryPart(double imaginaryPart){
    this->imaginaryPart = imaginaryPart;
}