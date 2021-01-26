#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(int argc, const char *argv[])
{
  #if 1
  // for-in loop

  int arr_int[4] {1,2,3,4};

  int *endP = arr_int + sizeof(arr_int) / sizeof(int);

  for(int n:arr_int)
  {
    cout << n << "," << endl;
  }

  vector<int> codes{100,200,300};
  for(auto code:codes)
  {
    cout << code << "," << endl;
  }

  array<string,3> strs{"abc" , "def", "hij"};
  for(auto str:strs)
  {
    cout << str << "," << endl;
  }

  // begin  and end
  // array
  for(auto p = begin(arr_int); p != end(arr_int); p++)    //ok
  // for(auto p = arr_int; p != endP; p++)                      //ok
  {
     cout << *p << "," << endl;
  }

  // array template
  // for(auto p = codes.begin(); p!= codes.end(); p++)      // ok
  for(auto p = begin(codes); p!= end(codes); p++)           // ok
  {
    cout << *p << "," << endl;
  }
  #endif

  // while
  // string ss= "helle world";
  string ss = "hello world";
  unsigned long size = ss.size();
  int i = 0 ;
  while(i < size)
  {
    if ( ss[i] != ' ')
    {
       cout << ss[i] << endl;
    }
    i++;
 }

 // goto
 int testArr[3][4] { {1,2,3,4}, {5,6,7,8}, {5,5,5,5}};
 int colSize = sizeof(testArr[0]) / sizeof(int);
 int rowSize = sizeof(testArr) / sizeof(int) / colSize;

 cout << "colSize = " << colSize << endl;
 cout << "rowSize = " << rowSize << endl;

 for(int i = 0; i < rowSize ; i++)
 {
   for(int j = 0; j < colSize ; j++)
   {
      if ( j == 3)
      {
        // goto label;
      }
      cout << testArr[i][j] << " " ;     // no "endl" here, print in one line
   }
   label:
     cout << endl;
 }

 
}
