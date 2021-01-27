#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

void Array(int array[], int size);
void function1( char *str);
void function2( const char *str);


typedef int (*pFUNC)(int n) ; // typedef function pointer

struct Mystruct 
{
  int code; 
  string name;
};

void functionStruct(Mystruct mystruct)
{
  mystruct.code = 20;
  mystruct.name = "Mike";
}

void functionStruct_1(Mystruct* mystruct)
{
  // changed here
  mystruct->code = 20;
  mystruct->name = "Mike";
}

Mystruct functionStruct_2()
{
  Mystruct mystructhere;
  mystructhere.code = 121;
  mystructhere.name = "aaa";
  return mystructhere;
}

Mystruct* functionStruct_3()
{
  Mystruct* mystruct3;
  mystruct3 = new Mystruct;
  mystruct3->code = 111;
  mystruct3->name = "test";
  return mystruct3;
}

int factorial(int n )
{
   if ( n == 0 || n ==1 )
   {
     return 1;
   }
   else
   {
     return factorial(n-1) * n;
   }
}

int main(int argc, const char *argv[])
{
  int array[10] = {0}; 
  int arraySize = sizeof(array) / sizeof(int);
  cout << "before call the function" << endl;
  for( int n:array)    // c++ 11 feature
  {
    cout << n << " ";
  }
  
  Array(array, arraySize); // call the function
  
  cout << "\nafter call the function" << endl;
  for( int n:array)
  {
    cout << n << " ";
  }

  char* strTest1 = "\nhello world";
  function1(strTest1);
  
  string strTest2 = "\nThis is Ben";
  function2(strTest2.c_str());

  //struct
  cout << "struct 1" << endl;
  Mystruct testStruct;
  testStruct.code = 123;
  testStruct.name = "Ben";
  functionStruct_1(&testStruct);
  cout << testStruct.code << endl;
  cout << testStruct.name << endl;

  cout << "struct 2" << endl;
  Mystruct testStruct2;
  testStruct2.code = 123;
  testStruct2.name = "Ben";
  testStruct2 = functionStruct_2();
  cout << testStruct2.code << endl;
  cout << testStruct2.name << endl;

  cout << "struct 3" << endl;
  Mystruct* testStruct3 = new Mystruct(); 
  testStruct3->code = 123;
  testStruct3->name = "Ben";
  testStruct3 = functionStruct_3();
  cout << testStruct3->code << endl;
  cout << testStruct3->name << endl;
  delete testStruct3;

  //function pointer
  int m = factorial(5);
  cout << "5 factorial is " << m << endl;

  int (*p)(int n) = factorial; // function pointer
  cout << "5 factorial is " << p(5) << endl;

  pFUNC func = factorial;  // typedef function pointer
  cout << "5 factorial is " << func(5) << endl;
  
}

void Array(int array[], int size)
{
  for ( int i = 0; i < size; i++)
  {
    array[i] = i + 1;
  }
}

void function1( char *str)
{
  cout << str << endl;
}

void function2( const char *str)
{
  cout << str << endl;
}
