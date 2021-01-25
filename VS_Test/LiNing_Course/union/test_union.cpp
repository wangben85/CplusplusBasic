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

  union MyUnion1
  {
    int code1;
    long long code2;  // 8 bytes
    float price;      // 4 bytes
    bool flag;
  };

 struct MyStruct1
  {
    int code1;
    long long code2;  // 8 bytes
    float price;      // 4 bytes
    bool flag;
  };
  
  cout << "MyUnion1 size is : " << sizeof(MyUnion1) << endl;         // 8 bytes occupied 
  cout << "MyStruct1 size is : " << sizeof(MyStruct1) << endl;       // 24 bytes occupied
 
  union MyUnion2
  {
    int code1;
    long long code2:4;  
    float price;      // 4 bytes
    bool flag;
  };
  cout << "MyUnion2 size is : " << sizeof(MyUnion2) << endl;         // 8 bytes occupied 

  MyUnion2 myunion;
  myunion.price = 10.1;     // union can only init one element, because they shared the space
  cout << "myunion price is : " << myunion.price << endl;       


}
