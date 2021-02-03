#ifndef TEST_CLASS_HPP
#define TEST_STATIC_HPP 

#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    Person();
    virtual ~Person();
    string getName() const;
    int getCode() const;
    void setName(string name);
    void setCode(int code);
    void inlineTest(); // it is the inline function implementation in cpp file

private: 
    int m_Code;
    string m_Name;
};

typedef struct 
{
   int code; 
   string name;
}MyStruct;

class MyClass
{
public:
  // constructors
  // 1. constructor name is the same as the class 
  // 2. no return value
  MyClass();  // default constructor
  // user defined constructors
  MyClass(int code , string name);
  MyClass(int code);
  
  //deconstructor
  // 1. no return value
  // 2. no parameter
  ~MyClass();

  //function memebers
  static int getValueStatic();

private:

  const int months = 12;
  
  enum 
  {
    months1 = 12
  };

  static const int months2 = 12;
  
  //static variable
  static int value;  // could not init here, but do it in cpp file
  
  int code;
  string name;
  Person* m_pMan;

  // float values[months]; // normal variable not work
  float values1[months1]; // enum could work
  float values2[months2]; // static variable could work
};


#endif
