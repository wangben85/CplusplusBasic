#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include "test_declare.hpp"

using namespace std;

void add_func()
{
  int var = 0; 
  static int var_static = 0;  // only init for one time when calling this function
  cout << "var = " << ++var << endl;   
  cout << "var_static = " << ++var_static << endl; 
}

extern int value;   // declaration in the cpp file
int main(int argc, const char *argv[])
{
  cout << "value = " << value << endl;

  for ( int temp = 0; temp < 10; ++temp )
  {
     add_func();   // call 10 times
  }
}
