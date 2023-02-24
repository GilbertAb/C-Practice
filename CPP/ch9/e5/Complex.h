#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
    public:
        Complex(double realPart = 0.0, double imaginaryPart = 0.0);
        void add(Complex number);
        void substract(Complex number);
        void print();
        double getRealPart();
        void setRealPart(double realPart);
        double getImaginaryPart();
        void setImaginaryPart(double imaginaryPart);
    private:
        const double i = sqrt(-1); 
        double realPart;
        double imaginaryPart;
};

#endif