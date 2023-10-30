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
    // arr = rhs.arr; // 이렇게 하면 얕은 복사가 됨
    arr = new float[n]; // 깊은 복사를 위해 메모리를 새로 할당
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