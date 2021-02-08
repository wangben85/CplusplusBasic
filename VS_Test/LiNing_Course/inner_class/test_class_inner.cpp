#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

class MyClass
{
public:
   class InnerClass   // inner class inside of MyClass
   {
        public:
          int  getInnerCode();
          void setInnerCode(int code);
        private:
          int m_Code;
   };
   
   InnerClass* getInnerClass();
};
// member function of MyClass
MyClass::InnerClass* MyClass::getInnerClass()
{
    return new InnerClass();
}

// member function of internal inner class
int MyClass::InnerClass::getInnerCode()
{
    return m_Code;
}

// member function of internal inner class
void MyClass::InnerClass::setInnerCode(int code)
{
    m_Code = code;
}

// main
int main(int argc, const char *argv[])
{
    MyClass::InnerClass innerClass;
    innerClass.setInnerCode(123);
    cout << "innerClass code is " << innerClass.getInnerCode() << endl;
    innerClass.setInnerCode(456);
    cout << "innerClass code is " << innerClass.getInnerCode() << endl;

    MyClass myClass;
    MyClass::InnerClass* innerClassTest;
    innerClassTest = myClass.getInnerClass();
    innerClassTest->setInnerCode(777);
    cout << "innerClass is " << innerClassTest->getInnerCode() << endl;
    
}
