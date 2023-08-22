/* Pre-processing */
#include <iostream>

using namespace std;
namespace NameSpace1 { int a = 0; }
namespace NameSpace2 { int a = 10; }
int a = 30;


int main()
{
  // input from keyboard
  int a = 100;

  // output to screen
  std::cout << a << std::endl;

  // without std:: thanks to 'using'
  cout << "a = " << a << endl;
  return 0;
}