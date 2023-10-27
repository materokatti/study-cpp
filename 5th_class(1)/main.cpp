#include <iostream>
// #include "Counter.h"
#include "Person.h"
using namespace std;

int main() {
  // Counter counter;
  // // counter.value = 0 (가시성 접근 위반)
  // counter.count();
  // counter.count();
  // cout << "current value : " << counter.getValue() << endl;
  Person* p1 = new Person("홍길동", "서울시");
  Person* p2 = new Person("고길동", "부산시");
  p1->print();
  p2->print();
  p1->changeAddr("인천시");
  p1->print();
  p2->print();
  delete p1;
  delete p2;

  return 0;
}