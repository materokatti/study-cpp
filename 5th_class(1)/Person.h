#ifndef PERSON_H_INCLUDED // 만약 'PERSON_H_INCLUDED'가 정의되지 않았다면,
#define PERSON_H_INCLUDED // 'PERSON_H_INCLUDED'를 정의한다.

class Person { // 'Person'이라는 클래스를 선언한다.
  char* name; // private 멤버 변수, 사람의 이름을 저장하기 위한 문자 포인터.
  char* addr; // private 멤버 변수, 사람의 주소를 저장하기 위한 문자 포인터.

  public: // 이하의 멤버들은 공개적으로 접근 가능.
    Person(const char* name, const char* addr); // 생성자. 이름과 주소를 매개변수로 받는다.
    ~Person(); // 소멸자. 객체가 소멸될 때 자동으로 호출된다.
    void changeAddr(const char* addr); // 주소 변경 함수. 새 주소를 매개변수로 받는다.
    void print() const; // 객체 정보 출력 함수. 상수 멤버 함수로 정의되어 객체의 상태를 변경하지 않음.
};

#endif // PERSON_H_INCLUDED // 'PERSON_H_INCLUDED' 정의 종료.
