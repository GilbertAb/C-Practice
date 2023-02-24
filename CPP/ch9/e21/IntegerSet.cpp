#include "IntegerSet.h"

IntegerSet::IntegerSet() {
    this->set = {};
}
IntegerSet::IntegerSet(std::array<unsigned int, SET_SIZE> set) {
    this->set = {};
    for (unsigned int num : set) {
        this->set[num] = true;
    }
}
void IntegerSet::unionOfSets(IntegerSet otherSet) {
    for (unsigned int num = 0; num < SET_SIZE; ++num) {
        if (otherSet.getSet()[num]) {
            this->set[num] = true;
        }
    }
}
void IntegerSet::intersection(IntegerSet otherSet) {
    for (unsigned int num = 0; num < SET_SIZE; ++num) {
        if (this->set[num] && otherSet.getSet()[num]) {
            this->set[num] == true;
        } else {
            this->set[num] = false;
        }
    }
}
void IntegerSet::insertElement(unsigned int element) {
    this->set[element] = true;
}
void IntegerSet::deleteElement(unsigned int element) {
    this->set[element] = false;
}

void IntegerSet::printSet() {
    bool isEmpty = true;
    std::cout << "[";
    for (unsigned int num = 0; num < SET_SIZE; ++num) {
        if (this->set[num]) {
            std::cout << num << ",";
            isEmpty = false;
        }
    }
    if (isEmpty) {
        std::cout << "---";
    }
    std::cout << "]" << std::endl;
}

bool IntegerSet::isEqualTo(IntegerSet otherSet) {
    bool isEqual = true;
    for (unsigned int num = 0; num < SET_SIZE; ++num) {
        if (this->set[num] != otherSet.getSet()[num]) {
            isEqual = false;
            break;
        }
    }
    return isEqual;
}

std::array<bool, SET_SIZE> IntegerSet::getSet() {
    return this->set;
}