#ifndef INTEGER_SET_H
#define INTEGER_SET_H

#include <array>
#include <iostream>

const unsigned int SET_SIZE = 100;

class IntegerSet {
    public:
        IntegerSet();
        IntegerSet(std::array<unsigned int, SET_SIZE> set);
        void unionOfSets(IntegerSet);
        void intersection(IntegerSet);
        void insertElement(unsigned int);
        void deleteElement(unsigned int);
        void printSet();
        bool isEqualTo(IntegerSet otherSet);

    private:
        std::array<bool, SET_SIZE> set;
        std::array<bool, SET_SIZE> getSet();
};
#endif