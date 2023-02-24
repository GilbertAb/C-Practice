#include <iostream>
#include "IntegerSet.h"

using namespace std;

int main() {
    IntegerSet set;
    
    array<unsigned int, SET_SIZE> s2 = {0, 2, 4, 8, 16, 32, 64, 94, 95, 96, 97};

    IntegerSet set2 = {s2};

    // Print sets
    cout << "s1:" << std::endl;
    set.printSet();
    cout << "\ns2:" << std::endl;
    set2.printSet();

    // Insert elements to first set
    cout << "\nInsertion to s1:" << std::endl;
    set.insertElement(3);
    set.insertElement(15);
    set.insertElement(64);
    set.insertElement(27);
    set.insertElement(13);
    set.printSet();
    
    // Union
    cout << "\nUnion:" << std::endl;
    set.unionOfSets(set2);
    set.printSet();

    // Intersection
    cout << "\nIntersection:" << std::endl;
    set.intersection(set2);
    set.printSet();

    // Delete element
    cout << "\nDelete 10 from set" << std::endl;
    set.insertElement(10);
    set.printSet();
    set.deleteElement(10);
    set.printSet();

    // Is equal
    cout << "\nAre equal:\n";
    set.printSet();
    set2.printSet();
    cout << set.isEqualTo(set2) << std::endl;
    cout << "\nAre equal:\n";
    set = set2;
    set.printSet();
    set2.printSet();
    cout << set.isEqualTo(set2) << std::endl;

    return 0;
}