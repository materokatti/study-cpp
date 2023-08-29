#include <iostream>
using namespace std;

int main() 
{
  // data type examples

    // character
    char c = 'A';
    // integer
    int a = 10;
    // floating point
    long long d = 1000000000000000000;
    // boolean
    float b = 3.14;
    // long long
    bool e = true;
    // multi language
    wchar_t f = L'中';

    // literal
    int k = 10; // decimal
    int i = 0b1010; // binary
    int j = 012; // octal
    int l = 0xa; // hexadecimal

    int intNum = 123;
    unsigned unsignedIntNum = 123u;
    long longNum = 123l;
    unsigned long unsignedLongNum = 123ul;
    long long longLongNum = 123ll;

  // variable

    // reset variables
    int x(131070.5);
    cout << x << endl; // error occurs

    short y(x);
    cout << y << endl; // overflow occurs
  

    // scope
    static int a = 10; // none local variable
    cout << a << endl; // 10
    {
      static int a = 20;
      cout << a << endl; // 20
    }

    // const
    const int b = 10;
    // constexpr
    constexpr int c = 10; // Evaluation at compile time

  cout << " my first C++ program" << endl;
  return 0;
}
