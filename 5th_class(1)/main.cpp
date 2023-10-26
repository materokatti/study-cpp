#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
  Counter counter;
  // counter.value = 0 (가시성 접근 위반)
  counter.reset();
  counter.count();
  counter.count();
  cout << "current value : " << counter.getValue() << endl;
  return 0;
}