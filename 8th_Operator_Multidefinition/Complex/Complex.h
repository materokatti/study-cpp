#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
public:
    double real;
    double imag;

    // 생성자
    Complex(double r = 0.0, double i = 0.0);

    // 복소수와 실수의 덧셈
    Complex operator+(double rhs) const;

    // 실수와 복소수의 덧셈을 위한 친구 함수
    friend Complex operator+(double lhs, const Complex& rhs);

    // 출력을 위한 함수
    void print() const;
};

#endif // COMPLEX_H
