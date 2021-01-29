#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

typedef struct
{
   int code;
   string name;
}MyStruct;

// normal function template
template <typename T>     // typname could be replaced by 'class'
void swapValue(T &a, T &b)
{
   T temp;
   temp = a; 
   a = b;
   b = temp;
}
// 特例化
// special function template , the type is fixed to MyStruct
void swapValue(MyStruct &a, MyStruct &b)
{
  int temp_code;
  temp_code = a.code;
  a.code = b.code;
  b.code = temp_code;
}

// swapValue function overload , and definition first, implementation later after main
template <typename T> 
void swapValue(T *a, T *b, int n);


//decltype
template<typename T1 , typename T2>
auto templateFun(T1 x, T2 y) -> decltype( x + y)
{
  // the data type of sum is the same as the type of (x + y)
  decltype(x + y) sum = x + y;
  // cout << sum << endl;
  return sum;  // return the sum value, its type is the same as ( x + y)
}

int main(int argc, const char *argv[])
{
   ///////////////////////////////////////
   // value swap
   int c1 = 3, c2 = 4;
   float c3 = 4.5 , c4 = 6.7 ;
   cout << "before swap " << endl;
   cout << " c1 = " << c1 << ", c2 = " << c2 << endl;
   cout << " c3 = " << c3 << ", c4 = " << c4 << endl;
   swapValue( c1 , c2) ; 
   swapValue( c3 , c4) ; 
   cout << "after swap " << endl;
   cout << " c1 = " << c1 << ", c2 = " << c2 << endl;
   cout << " c3 = " << c3 << ", c4 = " << c4 << endl;
   ///////////////////////////////////////
   // array value swap
   int aArray[] = { 0, 1, 2, 3, 4} ;
   int bArray[] = { 7, 8, 9, 10, 11} ;
   cout << "array values before swap " << endl;
   cout << "aArray values are "  ;
   for ( int n:aArray)
   {
     cout << n << "," ;
   }
   cout << "bArray values are " ;
   for ( int n:bArray)
   {
     cout << n << ",";
   }
   cout << endl;
   //do array value swap
   swapValue( aArray, bArray, sizeof(aArray) / sizeof(int) );
  
   cout << "array values after swap " << endl;
   cout << "aArray values are ";
   for ( int n:aArray)
   {
     cout << n << "," ;
   }
   cout << "bArray values are ";
   for ( int n:bArray)
   {
     cout << n << ",";
   }
   cout << endl;

   // special template
   MyStruct test1, test2;
   test1.code = 2;
   test1.name = "Ben";
   test2.code = 3;
   test2.name = "Wang";
   cout << "stuct values before swap " << endl;
   cout << "test1.code = " << test1.code << endl;
   cout << "test1.name = " << test1.name << endl;
   cout << "test2.code = " << test2.code << endl;
   cout << "test2.name = " << test2.name << endl;
   cout << "=========================" << endl;
  //  swapValue(test1, test2); // call the special function template, only change the code value
   swapValue<>(test1, test2); // call the normal function template, change both the code and name value
   cout << "stuct values after swap " << endl;
   cout << "test1.code = " << test1.code << endl;
   cout << "test1.name = " << test1.name << endl;
   cout << "test2.code = " << test2.code << endl;
   cout << "test2.name = " << test2.name << endl;

   // dectype
   cout << "dectype " << endl;
   int xx = 3;
  //  float yy = 4.6;
   double yy = 4.6342123;
   auto zz = templateFun(xx, yy);
   cout << "templateFun result is " << zz << endl;
}

template <typename T>
void swapValue(T *a, T *b, int n)
{
    for (int i = 0; i < n; i++)
    {
      T c;
      c = *(a + i);
      *(a + i) = *(b + i);
      *(b + i) = c;
    }
}
