#include "Rational.h"

Rational::Rational(int numerator, int denominator) : numerator(numerator),denominator(denominator) {
    /*this->numerator = numerator;
    this->denominator = denominator;*/
    reduceForm();
}

void Rational::add(Rational number) {
    setNumerator( getNumerator()*number.getDenominator() + getDenominator() * number.getNumerator());
    setDenominator(getDenominator() * number.getDenominator());
    reduceForm();
}
void Rational::substract(Rational number) {
    setNumerator( getNumerator()*number.getDenominator() - getDenominator() * number.getNumerator());
    setDenominator(getDenominator() * number.getDenominator());
    reduceForm();
}
void Rational::multiply(Rational number) {
    setNumerator(getNumerator() * number.getNumerator());
    setDenominator(getDenominator() * number.getDenominator());
    reduceForm();
}
void Rational::divide(Rational number) {
    setNumerator(getNumerator() * number.getDenominator());
    setDenominator(getDenominator() * number.getNumerator());
    reduceForm();
}
// PrRational::int the rational
void Rational::print() {
    std::cout << getNumerator() << "/" << getDenominator() << std::endl;
}
void Rational::printFloatingPointFormat() {
    std::cout << static_cast<float>(getNumerator())/getDenominator() << std::endl;
}

int Rational::getNumerator() {
    return this->numerator;
}
void Rational::setNumerator(int numerator) {
    this->numerator = numerator;
}
int Rational::getDenominator() {
    return this->denominator;
}
void Rational::setDenominator(int denominator) {
    if (denominator != 0) {
        this->denominator = denominator;
    } else {
        std::cerr << "Denominator can't be zero"<<std::endl;
    }
}

void Rational::reduceForm() {
    bool not_reduced = false;
    while (not_reduced == false) {
        if (getNumerator() % 2 == 0 && getDenominator() % 2 == 0) {
            setNumerator(getNumerator()/2);
            setDenominator(getDenominator()/2);
        } else if (divisibleByThree(getNumerator()) && divisibleByThree(getDenominator())) {
            setNumerator(getNumerator()/3);
            setDenominator(getDenominator()/3);
        }
        else if (getNumerator() % 5 == 0 && getDenominator() % 5 == 0)
        {
            setNumerator(getNumerator()/5);
            setDenominator(getDenominator()/5);
        } else {
            not_reduced = true;
        }
    }
}

bool Rational::divisibleByThree(int number) {
    int sumOfDigits = 0;
    if (number < 0) {
        number *= -1;
    }
    while (number > 0) {
        sumOfDigits += number % 10;
        number = number/10;
    }

    return sumOfDigits % 3 == 0;
}