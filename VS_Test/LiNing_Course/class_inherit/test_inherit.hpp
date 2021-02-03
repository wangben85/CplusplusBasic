#ifndef TEST_INHERIT_HPP
#define TEST_INHERIT_HPP 

#include <iostream>
#include <string>

using namespace std;

// Base Class
class BaseClass
{
public:
    // constructor
    // ..default
    BaseClass() {};
    // ..user defined
    BaseClass( int codeValue )
    { 
        m_Code = codeValue;
        cout << "Inside BaseClass constructor, m_code = " << m_Code << endl; 
        setCode(codeValue);
    }
    int getCode();
    void setCode(int code);

// protected:
private:
    int m_Code;
};

// Child Class
class ChildClass : public BaseClass
{
public:
     // constructor
     // ..default
     ChildClass(){}
     // user defined
     ChildClass(int codeValue): BaseClass( codeValue )
     {

     }
    //  void setCode(int code);

private:
     int m_Code;
};
#endif
