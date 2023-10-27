#ifndef COUNTER_H_INCLUDED // 동일한 header file이 inclue 되지 않도록 함
// #pragma once -> 마찬가지로 동일한 header file이 inclue 되지 않도록 함(이게 더 효율적)
#define COUNTER_H_INCLUDED

class Counter {
  // 속성 (아무것도 안쓰면 가시성 지시어는 private)
    int value;
  // 행위
  public:
    Counter() : value{0} {};  // 생성자
    ~Counter() { } // 소멸자: 매개변수 없음
      
    void reset() {
      value = 0;
    }
    void count() {
      value++;
    }
    int getValue() const{ // const : getValue로 추출된 값은 변할일이 없기 때문 (호출 가능한 상황에서도 const가 아니면 호출 불가능한 경우 있음)
      return value;
    }
};
   
#endif // COUNTER_H_INCLUDED

// 클래스의 장점
// * 캡슐화 : 객체 내부에 접근은 제한하고(정보은닉), 외부 공개된 함수로만 접근하게 함

