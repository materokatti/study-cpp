#pragma once

class CounterM 
{
  const int maxValue;
  int value;
public:
  // 생성자(default)
  CounterM(int max = 10) : maxValue{max}, value{0} {};
  // 복사 생성자
  CounterM (const CounterM& rhs) : maxValue{rhs. maxValue}, value{rhs.value} {};
  ~CounterM() {};
  void reset() {
    value = 0;
  }
  void count() {
    if (value < maxValue) {
      value++;
    }
  }
  int getValue() const {
    return value;
  }
};