#ifndef TEST_OPERATOR_HPP
#define TEST_OPERATOR_HPP 

#include <iostream>
#include <string>

using namespace std;

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
//   Myclass(const string str);
  
  //deconstructor
  // 1. no return value
  // 2. no parameter
  ~MyClass();

  //function member
  int getValueCode();
  bool setValueCode(int code);
  string getValueName();

  //Operator+
  // return value , operator label( parameter)
  MyClass operator+(MyClass temp);
  //Operator-
  // return value , operator label( parameter)
  MyClass operator-(MyClass temp);

private:
  int code;
  string name;
};


#endif
