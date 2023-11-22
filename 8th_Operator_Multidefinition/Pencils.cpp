#include <iostream>
#include "Pencils.h"
using namespace std;

Pencils& Pencils::operator++() {
    np++;
    if (np == 12) {
        dozens++;
        np = 0;
    }
    return *this;
}

Pencils Pencils::operator++(int) {
    Pencils temp = *this;
    np++;
    if (np == 12) {
        dozens++;
        np = 0;
    }
    return temp;
}

void Pencils::display() const {
    cout << dozens << " dozen and " << np << " pencils\n";
}