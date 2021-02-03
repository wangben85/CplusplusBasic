#ifndef TEST_FRIEND_HPP
#define TEST_FRIEND_HPP 

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
  bool setValueCode(int code);
  int getValueCode();

  // friend function
  friend MyClass operator+(int , MyClass);// MyClass here is the return value, not class label
  friend void printValueCode(MyClass);

private:
  int code;
  string name;
};


#endif
