#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>
#include "test_inherit.hpp"

using namespace std;

// Base Class
int BaseClass::getCode() 
{
   // cout << "Inside BaseClass getCode, m_code = " << m_Code << endl; 
   return m_Code;
}

void BaseClass::setCode(int code)
{
   m_Code = code;
}
//Child Class
#if 0
void ChildClass::setCode(int code)
{
   m_Code = code;
}
#endif


int main(int argc, const char *argv[])
{
   //test 1
   BaseClass baseClass;
   ChildClass childClass;
   cout << "----------------------------------------------------" << endl;
   cout << "--------Test 1--------------------------------------" << endl;
   cout << "----------------------------------------------------" << endl;
   cout << "baseClass.getCode() = " << baseClass.getCode() << endl;
   cout << "childClass.getCode()" << childClass.getCode() << endl;

   childClass.setCode(123); // this setCode could only change the child class m_Code, but not base class m_Code

   cout << "baseClass.getCode() = " << baseClass.getCode() << endl;
   cout << "childClass.getCode()" << childClass.getCode() << endl;

   //test 2
   cout << "----------------------------------------------------" << endl;
   cout << "--------Test 2--------------------------------------" << endl;
   cout << "----------------------------------------------------" << endl;
   BaseClass base2(4);
   ChildClass child2(456); // create and init the child class "child2"
   
   cout << "baseClass.getCode() = " << base2.getCode() << endl;
   cout << "child2.getCode()" << child2.getCode() << endl;
   cout << "-----2nd print --------------" << endl;
   child2.setCode(789);
   cout << "baseClass.getCode() = " << base2.getCode() << endl;
   cout << "child2.getCode()" << child2.getCode() << endl;
   cout << "-----3nd print --------------" << endl;
   base2.setCode(111);
   cout << "baseClass.getCode() = " << base2.getCode() << endl;
   cout << "child2.getCode()" << child2.getCode() << endl;


   




   return 0;
}
