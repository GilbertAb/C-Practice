#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
    public:
        Rational(int numerator = 0, int denominator = 1);
        // Result is stored in reduced form
        void add(Rational number);
        void substract(Rational number);
        void multiply(Rational number);
        void divide(Rational number);
        // Print the rational
        void print();
        void printFloatingPointFormat();
        int getNumerator();
        void setNumerator(int);
        int getDenominator();
        void setDenominator(int);
    private:
        int numerator;
        int denominator;
        void reduceForm();
        bool divisibleByThree(int);

};

#endif