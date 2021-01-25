#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
  //anonymous struct
  cout << "\nanonymous stuct print below" << endl;
  struct
  {
     int     code;
     string  name;
  } stuct1;

  stuct1.code = 100;
  stuct1.name = "stuct1";

  cout << "struct1 code is " << stuct1.code << endl;
  cout << "struct1 name is " << stuct1.name << endl;

  //anonymous union
  cout << "\nanonymous union print below" << endl;
  union
  {
     int     code;
     char    test;
    //  string  str;      // canno use
  } union1;

  union1.code = 123;
  // union1.str = "test union";

  cout << "union1 code is " << union1.code << endl;
  // cout << "union1 str is " << union1.str << endl;

  //anonymous enum
  enum 
  {
    ONE,
    TWO,
    THREE
  }value;

  value = ONE;
  cout << "enum value is " << value << endl;


  // typedef struct
  typedef struct
  {
     int     code;
     string  name;
  }struct_type;

  struct_type test_defStruct;
  test_defStruct.code = 400;
  test_defStruct.name = "typedef_struct";
  
  cout << "typedef struct code is " << test_defStruct.code << endl;
  cout << "typedef struct name is " << test_defStruct.name << endl;

  // typedef enum
  typedef enum 
  {
    red,
    blue,
    green
  }color_type;

  color_type test_color;
  test_color = green;
  cout << "color_type is " << test_color << endl;
}
