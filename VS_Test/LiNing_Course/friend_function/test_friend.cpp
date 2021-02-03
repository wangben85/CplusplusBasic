#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "test_friend.hpp"

using namespace std;
//default constructor
MyClass::MyClass()
{
   // cout << "MyClass::MyClass()" << endl;
}

//user constructor
MyClass::MyClass( int code , string name)
{
   this->code = code;
   this->name = name;
   // cout << "MyClass::MyClass(int code, string name)" << endl;
   // cout << "MyClass code is " << code << endl; 
   // cout << "MyClass name is " << name << endl; 
}

//user constructor
MyClass::MyClass( int code)
{
  this->code = code;
//   cout << "MyClass::MyClass(int code)" << endl;
//   cout << "Only MyClass code is " << code << endl; 
}

//deconstructor
MyClass::~MyClass()
{
   //  cout << "MyClass::~MyClass(int code) is called" << endl;
}

bool MyClass::setValueCode(int code)
{
   this->code = code;
   return 0;
}

int MyClass::getValueCode()
{
   return code;

}

//operator '+'
// it is the function operator, not class operator
MyClass operator+(int value , MyClass temp)
{
   MyClass myClass;
   // friend function could access the private value 'code' directly 
   myClass.code = value + temp.code;
   return myClass;
}

void printValueCode(MyClass t)
{
   // friend function could access the private value 'code' directly 
   cout << "the code is " << t.code << endl;
}

int main(int argc, const char *argv[])
{
    MyClass t1(100);
    MyClass t2(555, "T2");

    t2 = 700 + t1;

    cout << "t2 value = " << t2.getValueCode() << endl;

    printValueCode(t2); // friend print

    return 0;
}
