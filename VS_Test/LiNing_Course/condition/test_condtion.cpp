#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <cctype>

// use do while(0) is definition when there are many sentences
#define  PROCESS do{cout << "process" << endl; cout << "Author is Ben" << endl;}while(0)
#define  PROCESS1 do{cout << "process1" << endl;}while(0)
using namespace std;

int main(int argc, const char *argv[])
{
   PROCESS;
   PROCESS1;

   //cctype
   char c1 = 'a';
   char c2 = 5;
   char c3 = 'A';
   char c4;

   if(isalpha(c1))   
   {
     cout << "c1 is an alpha character" << endl;
   }
   else
   {
     cout << "c1 is NOT alpha character" << endl;
   }

   if(isupper(c3))   
   {
     cout << "c3 is a upper character" << endl;
   }
   else
   {
     cout << "c3 is NOT not character" << endl;
   }

   c4 = tolower(c3);  
   cout << "c4 is " << c4 << endl;

   if(isupper(c4))   
   {
     cout << "c4 is a upper character" << endl;
   }
   else
   {
     cout << "c4 is NOT upper character" << endl;
   }


  // ? operator
  int m = 7;
  int n = 6;

  string s = ( m < n) ? "hello" : "world";
  cout << "s = " << s << endl;

  // switch
  int ch = 4;

  switch ( ch ) 
  {
    case 0:  cout << "case0 ch is " << ch << endl; break;
    case 1:  cout << "case1 ch is " << ch << endl; break;
    case 2:  cout << "case2 ch is " << ch << endl; break;
    case 3:  cout << "case3 ch is " << ch << endl; break;
    default: cout << "value is not correct!!" <<endl; 

  }

  enum { ONE = 1, TWO, THREE};
  int k = 2;
  switch (k)
  {
    case ONE: cout << "k is ONE " << endl; break;
    case TWO: cout << "k is TWO " << endl; break;
    case THREE: cout << "k is THREE " << endl; break;
  }

  return 0;


   return 0;
}
