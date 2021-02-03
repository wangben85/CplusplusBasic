#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "test_static.hpp"

using namespace std;

// int MyClass::value = 3;  // init the static variable in cpp file
int MyClass::value = 109;  // init the static variable in cpp file

//constructor
Person::Person()
{
}

//deconstructor
Person::~Person()
{

}

string Person::getName() const
{
    return m_Name;     
}
int Person::getCode() const
{
    return m_Code;
}
void Person::setName(string name)
{
   m_Name = name;    
}
void Person::setCode(int code)
{
  m_Code = code;
}

//inline function of the class Person
inline void Person::inlineTest()
{
  cout << " This is the test of inline function" << endl;
}

//default constructor
MyClass::MyClass()
{
   m_pMan = new Person();
   // cout << "MyClass::MyClass()" << endl;
}

//user constructor
MyClass::MyClass( int code , string name)
{
   m_pMan = new Person();
   this->code = code;
   this->name = name;
   cout << "MyClass::MyClass(int code, string name)" << endl;
   cout << "MyClass code is " << code << endl; 
   cout << "MyClass name is " << name << endl; 
}

//user constructor
MyClass::MyClass( int code)
{
  m_pMan = new Person();
  this->code = code;
  cout << "MyClass::MyClass(int code)" << endl;
  cout << "Only MyClass code is " << code << endl; 
  // m_pMan->setCode(666);
  // cout << "m_pMan getCode is " << m_pMan->getCode() << endl;
}

//static function
int MyClass::getValueStatic()
{
   // return code;
   return MyClass::value;
}

MyClass::~MyClass()
{
    delete m_pMan;
   //  cout << "MyClass::~MyClass(int code) is called" << endl;
}

int main(int argc, const char *argv[])
{
  // p1
   Person p1;
   p1.setName("Wang Ben");
   p1.setCode(100);
   cout << "p1.name = " << p1.getName() << endl;
   cout << "p1.code = " << p1.getCode() << endl;
   p1.inlineTest();

   // p2
   Person* p2 = new Person();
   p2->setName("Jay CHOU");
   p2->setCode(101);
   cout << "p2->name = " << p2->getName() << endl;
   cout << "p2->code = " << p2->getCode() << endl;
   p2->inlineTest();
   delete p2;

   // p3
   MyStruct p3 = { 202, "test"};
   cout << "p3->name = " << p3.name << endl;
   cout << "p3->code = " << p3.code << endl;

   // p4,p5
   MyClass p4;
   MyClass p5( 1000, "Jay");

   // p6
   MyClass p6( 2000 );

   // p7
   MyClass* p7 = new MyClass( 505, "505Test");
   delete p7;

   //p8
   cout << "static value is " << MyClass::getValueStatic() << endl;


   return 0;
}
