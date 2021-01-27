#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

typedef struct
{
  int code;
}STRUCT_NEW;

void func(STRUCT_NEW value)
{
  value.code = 200;
}

void func_reference(STRUCT_NEW &value)
{
  value.code = 200;
}

int func_add( int m, int n = 100)
{
  int sum = m + n;
  return sum;
}

int main(int argc, const char *argv[])
{
  STRUCT_NEW mystruct;
  mystruct.code = 100;
  func(mystruct);
  cout << mystruct.code << endl;
  
  func_reference(mystruct);
  cout << mystruct.code << endl;

  //func_add
  int a = 2, b;
  int sum;
  sum = func_add(a);    // has default value for n
  cout << "sum is " << sum << endl;
  return 0;
 
}
