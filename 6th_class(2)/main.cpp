#include <string>
#include <iostream>
#include "CounterM.h" 
using namespace std;

class Person {
  CounterM cnt{199};
  CounterM cnt2{};
  CounterM cnt3{cnt};
  void printCounters() {
    cout << cnt.getValue() << endl;
    cout << cnt2.getValue() << endl;
  }
};
