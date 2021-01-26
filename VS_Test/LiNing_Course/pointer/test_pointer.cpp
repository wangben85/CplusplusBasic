#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{
  int n = 100;
  float value = 1.2;

  int* pn = &n;
  float* pvalue = &value;

  cout << "pn = " << pn << endl;
  cout << "pvalue = " << pvalue << endl;
  cout << "*pn = " << *pn << endl;
  cout << "*pvalue = " << *pvalue << endl;

  cout << "sizeof of pn is " << sizeof(pn) << endl;    // sizeof of pn  is 8
  cout << "sizeof of *pn is " << sizeof(*pn) << endl;    // sizeof of *pn  is 4


//int numbers[2] = { 25, 26 };   //ok
  int numbers[2] { 25, 26 };   //ok
  cout << "numbers[0] is " << *numbers << endl;
  cout << "numbers[1] is " << *(numbers + 1) << endl;

  int* p = numbers;
  cout << "p[0] is " << *p << endl;
  cout << "p[1] is " << *(p + 1) << endl;

  int xyz = 30;
  int*q = &xyz;
  *q = 123;
  cout << "*q is " << *q << endl;
  cout << "xyz is " << xyz << endl;

  // new and delete 
  // typename *pointer = new typename
  int *pointer = new int;
  *pointer = 123;
  cout << "*pointer is " << *pointer << " before delete" << endl;
  cout << "*pointer address is " << pointer << " before delete" << endl;
  delete pointer;
  cout << "*pointer is " << *pointer << " after delete" << endl;
  cout << "*pointer address is " << pointer << " after delete" << endl;

  double *ptest = new double;
  *ptest = 123.4444;
  cout << "*ptest is " << *ptest << endl;
  delete ptest;

  // pointer array
  int nNum = 20;
  int array1[10];
  int array2[nNum];

  int *array3 = new int[nNum];
  int *array4;
  array4 = new int[100];
  
  int *array5 = new int[10]{1,2,345};

  cout << "array5[0] is " << array5[0] << endl;
  cout << "array5[1] is " << *(array5 + 1) << endl;
  cout << "array5[2] is " << *(array5 + 2) << endl;

  delete [] array5;
  array5 = nullptr;

  delete [] array4;
  array4 = nullptr;

  int *ptr = new int;
  delete ptr;
  ptr = nullptr;

  // pointer and string 
  char str[10] = "Hello";
  cout << str << endl;

  char *p_str = "World";
  cout << p_str << endl;

  char *p_str2 = new char[strlen(str) + 1];
  strcpy(p_str2, str);
  cout << p_str2 << endl;

  //const pointer 
  const int *p_test = new int(100); // 100 is the initial value
  cout << "*p_test initial value is " << *p_test << endl;

  //pointer struct
  typedef struct  
  {
    int code;
    char *name;
    double price;
  }MyStruct;

  
  MyStruct  *t = new MyStruct();
  t->code = 12332;
  t->name = new char[100];
  (*t).price = 100;
  strcpy(t->name, "iphone 12");

  cout << t->code << endl;
  cout << t->name << endl;
  cout << (*t).price << endl;

  //pointer union 
  typedef union 
  {
    int code1;
    long code2;
  }MyUnion;

  MyUnion *tt = new MyUnion();
  tt->code1 = 200;
  cout << "tt->code1 = " << (*tt).code1 << endl;
  cout << "tt->code2 = " << (*tt).code2 << endl;  // value code2 is the same as code1

  //multiple array and multiple pointer
  int codes2[3][3] = { 
    {1,2,3},
    {3,4,5},
    {6,7,8}
  };
  cout << "code2[0][0] = " << codes2[0][0] << endl;
  cout << "code2[0][1] = " << codes2[0][1] << endl;
  cout << "code2[2][1] = " << codes2[2][1] << endl;

  int **pp = new int*[10];

  for (int i = 0; i < 10 ; i++)
  {
     *(pp + i) = new int[10];
  }

  **pp = 3;
  **(pp + 1) = 103;
  cout << "**pp = " << pp[0][0] << endl;
  cout << "**(pp + i) = " << pp[1][0] << endl;
}
