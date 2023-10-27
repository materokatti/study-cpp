// VecF class

#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class VecF {
  int n;
  float* arr;
public:
  VecF(int d, const float* a=nullptr) : n{ d } {
    arr = new float[d];
    if (a != nullptr) {
      memcpy(arr, a, d*sizeof(float
    }
  };
  VecF(const VecF& rhs) : n{ rhs.n } {
    arr = new float[n];
    memcpy(arr, rhs.arr, n*sizeof(float));
  };
  ~VecF() {
    delete[] arr;
  };
  void print() const {
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  };
};