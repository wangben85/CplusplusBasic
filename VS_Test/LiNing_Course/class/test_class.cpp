#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "test_class.hpp"

using namespace std;

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
   cout << "MyClass::MyClass()" << endl;
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

//Copy constructor
MyClass::MyClass(const MyClass& other)
{
  m_pMan = new Person();
   code = other.code * 2;
}

#if 1
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
#endif

#if 0 // why not work ?
MyClass::MyClass( string str)
{
   name = str;
   cout << "MyClass::MyClass(string name)" << endl;
   cout << "Only MyClass name is " << name << endl; 
}
#endif

// function memeber
MyClass* MyClass::getObject()
{
   return this;
}

int MyClass::getCode()
{
   return code;
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

   // p8
   MyClass* p8 = new MyClass();
   if (p8->getObject()  == p8 ) 
   {
        cout << "equal" << endl;
   }

   // scenarios to call the copy contructor
   // p9 , p10
   MyClass p9(300);
   MyClass p10 = p9;
   cout << "p10 code is " << p10.getCode() << endl;

   MyClass p11(300);
   MyClass p12(p11);
   cout << "p12 code is " << p12.getCode() << endl;

   MyClass p13(200);
   MyClass p14 = MyClass(p13);
   cout << "p14 code is " << p14.getCode() << endl;

   MyClass p15(60);
   MyClass* p16 = new MyClass(p15);
   cout << "p16 code is " << p16->getCode() << endl;

   return 0;
}
