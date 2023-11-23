#include <iostream>
#include "Complex.h"

int main() {
    Complex c1(2.0, 3.0); // 복소수 2 + 3i
    Complex c2 = c1 + 5.0; // 복소수와 실수의 덧셈
    Complex c3 = 5.0 + c1; // 실수와 복소수의 덧셈

    std::cout << "c1: ";
    c1.print();

    std::cout << "c2: ";
    c2.print();

    std::cout << "c3: ";
    c3.print();

    return 0;
}
