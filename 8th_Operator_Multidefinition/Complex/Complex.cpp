#include "Complex.h"
#include <iostream>

// 생성자 구현
Complex::Complex(double r, double i) : real(r), imag(i) {}

// 복소수와 실수의 덧셈 구현
Complex Complex::operator+(double rhs) const {
    return Complex(real + rhs, imag);
}

// 실수와 복소수의 덧셈 구현
Complex operator+(double lhs, const Complex& rhs) {
    return Complex(lhs + rhs.real, rhs.imag);
}

// 출력 함수 구현
void Complex::print() const {
    std::cout << "(" << real << " + " << imag << "i)" << std::endl;
}
