#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

// #pragma pack(1)        // configure the the method of alignment,  example is 1 byte aligned
// #pragma pack(2)        // configure the the method of alignment,  example is 2 bytes aligned


int main(int argc, const char *argv[])
{
  struct MyStruct
  {
    int code;
    string name;
    float salary;
  }myStruct1 = {20, "bill", 2550};

  MyStruct myStruct2 = { 40, "Ben", 1800};
  auto myStruct3 = new MyStruct();         // myStruct3 is the pointer
  myStruct3->code = 60;                    // pointer will use '->'
  myStruct3->name = "Wang";
  myStruct3->salary = 2670;

  cout << "\nThe MyStruct result output below" << endl;
  cout << myStruct1.name << endl;
  cout << myStruct2.salary << endl;
  cout << myStruct3->code << endl;

  struct MyStruct2
  {
    int code;
    string name;
    int values[2];
  };
  MyStruct2 testStruct[100];
  testStruct[0].code = 20;
  testStruct[0].name = "Tom";
  testStruct[1].code = 40;
  testStruct[1].name = "Jerry";
  testStruct[2].values[0] = 1;
  testStruct[2].values[1] = 2;

  cout << "\nThe MyStruct2 result output below" << endl;
  cout << testStruct[0].name << endl;
  cout << testStruct[1].code << endl;
  cout << testStruct[2].values[0] << endl;
  cout << testStruct[2].values[1] << endl;


  cout << "\nThe MyStruct3 result output below" << endl;
  struct MyStruct3
  {
    int code1;    // 4 bytes
    int code2;    // 4 bytes
  };
  cout << "MyStruct3 size is " << sizeof(MyStruct3) << endl;

  cout << "\nThe MyStruct4 result output below" << endl;
  struct MyStruct4
  {
    short code1;   //2 bytes
    char c;        //1 bytes
    float value;   //4 bytes
    double test;   //8 bytes
  }mystruct4{20,'a'};

  cout << "MyStruct4 size is " << sizeof(MyStruct4) << endl;

  cout << "\nThe MyStruct5 result output below" << endl;
  struct MyStruct5
  {
      unsigned int code1;
      unsigned int code2;
      bool flag; 
  };
  cout << "\nThe MyStruct5 size is " << sizeof(MyStruct5) << endl;
  struct MyStruct6
  {
      unsigned int code1:4;
      unsigned int code2:4;
      bool flag:1; 
  };
  cout << "\nThe MyStruct6 size is " << sizeof(MyStruct6) << endl;
  
  cout << "\nThe MyStruct5 result output below" << endl;
  struct MyStruct7
  {
      unsigned int code1:4;
      unsigned int code2:4;
      bool flag:1; 
  };
  MyStruct7 testStruct7;
  testStruct7.code1 = 0x03;
  testStruct7.code2 = 0x02;
  testStruct7.flag = true;
  cout << "\nteststrurct.code1 is " << testStruct7.code1 << endl;
  cout << "\nteststrurct.code2 is " << testStruct7.code2 << endl;
  cout << "\nteststrurct.flag is " << testStruct7.flag << endl;

  return 0;
 
}
