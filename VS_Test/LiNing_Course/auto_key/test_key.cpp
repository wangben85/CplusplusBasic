#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int main()
{
  auto n = 200;
  cout << "sizeof(n) = " << sizeof(n) << endl;    // sizeof(n) = 4

  auto m = 200L;
  cout << "sizeof(m) = " << sizeof(m) << endl;    // sizeof(m) = 4
  
  auto i = (short)200;
  cout << "sizeof(i) = " << sizeof(i) << endl;    // sizeof(i) = 2

  auto j = 40.3;
  cout << "sizeof(j) = " << sizeof(j) << endl;    // sizeof(j) = 8, type is double 

  auto q = static_cast<float>(40.3);
  cout << "sizeof(q) = " << sizeof(q) << endl;    // sizeof(q) = 4, type is float

  double value = 20 + 45.6;
  cout << "value is " << value << endl;           // value is 65.6
  cout << "sizeof(value) is " << sizeof(value) << endl;   // sizeof value is 8, type is double
  
  auto value2 = 20 + 45.6;
  cout << "value2 is " << value2 << endl;           // value2 is 65.6
  cout << "sizeof(value2) is " << sizeof(value2) << endl;   // sizeof value2 is 8, type is double
  
  auto value3 = 20 + 45;
  cout << "value3 is " << value3 << endl;           // value3 is 65
  cout << "sizeof(value3) is " << sizeof(value3) << endl;   // sizeof value3 is 4 , type is int

  return 0;
}
