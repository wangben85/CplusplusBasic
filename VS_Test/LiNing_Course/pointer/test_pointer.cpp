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

}
