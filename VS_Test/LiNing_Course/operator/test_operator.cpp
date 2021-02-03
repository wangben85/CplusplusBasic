#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "test_operator.hpp"

using namespace std;
//default constructor
MyClass::MyClass()
{
   cout << "MyClass::MyClass()" << endl;
}

//user constructor
MyClass::MyClass( int code , string name)
{
   this->code = code;
   this->name = name;
   cout << "MyClass::MyClass(int code, string name)" << endl;
   // cout << "MyClass code is " << code << endl; 
   // cout << "MyClass name is " << name << endl; 
}

//user constructor
MyClass::MyClass( int code)
{
  this->code = code;
  cout << "MyClass::MyClass(int code)" << endl;
  cout << "Only MyClass code is " << code << endl; 
}

//deconstructor
MyClass::~MyClass()
{
    cout << "MyClass::~MyClass(int code) is called" << endl;
}

int MyClass::getValueCode()
{
   return code;
}

bool MyClass::setValueCode(int code)
{
   this->code = code;
   return 0;
}

string MyClass::getValueName()
{
   return name;
}

//operator '+'
MyClass MyClass::operator+(MyClass temp)
{
   MyClass myClass(0);
   myClass.code = this->code + temp.code;
   return myClass;
}

//operator '-'
MyClass MyClass::operator-(MyClass temp)
{
   MyClass myClass(0);
   myClass.code = this->code - temp.code;
   return myClass;
}

// function operator, which is not the operator inside class
// operator +
MyClass operator*(MyClass &left, MyClass &right)
{
   MyClass myClass(0);
   int tempCode = left.getValueCode() * right.getValueCode();
   myClass.setValueCode(tempCode);
   return myClass;
}

ostream& operator<<(ostream& os, MyClass& myClass)
{
   return os << myClass.code ;
}

int main(int argc, const char *argv[])
{
    MyClass* t1 = new MyClass( 100, "Ben Wang");
    cout << "getValueName = " << t1->getValueName() << endl;
    cout << "getValueCode = " << t1->getValueCode() << endl;

    //operator
    MyClass t2(4);
    MyClass t3(3);
    // t4 = t2.operator+(t3)
    MyClass t4 = t2 + t3;
    // t5 = t2.operator-(t3)
    MyClass t5 = t2 - t3;
    cout << "t4 value = " << t4.getValueCode() << endl;
    cout << "t5 value = " << t5.getValueCode() << endl;

    //
    MyClass t6 = t2 * t3;
    cout << "t6 value = " << t6.getValueCode() << endl;

    //
    MyClass t7(999);
    cout << t7 << "abc" << endl;
   //  cout << t7 << endl;

    return 0;
}
