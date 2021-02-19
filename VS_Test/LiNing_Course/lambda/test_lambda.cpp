#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include <list>            // use list
#include <algorithm>       // in order to use for_each
#include <deque>           // use deque
#include <queue>           // use queue and priority_queue
#include <set>             // use set and multiset
#include <map>             // use map
#include <stdlib.h>        // use srand
#include <time.h>          // use time


using namespace std;

void valuesPrint(int n)
{
  cout << n << " " ;
}

bool countIfPred(int n)
{
  return n % 2 == 0;          // return the even
}

int charRand()
{
  return 97 + rand() % 26;
}

int main(int argc, const char *argv[])
{
  // test1
  cout << "test1" << endl;
  vector<int> randomValues(100);     // vector stores 100 random values

  srand((unsigned)time(NULL));

  generate(randomValues.begin(), randomValues.end(), rand);    // genrate random values

  // for_each(randomValues.begin(), randomValues.end(), valuesPrint);  // print the random values by function 'valuesPrint'
  for_each(randomValues.begin(), randomValues.end(), [](int n){ cout << n << " " ; });  // print the random values by lambda
  cout << endl;

  // int count = (int) count_if(randomValues.begin(), randomValues.end(), countIfPred);  // get the even numbers by function 'countIfPred'
  int count = (int) count_if(randomValues.begin(), randomValues.end(), [](int n){ return n % 2 == 0; });  // get the even numbers by lambda
  cout << "The even number is " << count << endl;

  //test2
  cout << "test2" << endl;
  string str;
  str.resize(20);   // specify the str size
  srand((unsigned int) time(NULL));
  // generate(str.begin(), str.end(), charRand);  // function
  // no arguments, below are the same
  // generate(str.begin(), str.end(), []{ return 97 + rand() % 26;});  // lambda, no arguments could omit ()
  // generate(str.begin(), str.end(), [](){ return 97 + rand() % 26;});  // lambda, no arguments, keep the ()
  generate(str.begin(), str.end(), []()->int{ return 97 + rand() % 26;});  // lambda, no arguments, keep the () and specify the return type distinctly 
  cout << str << endl;

  //test3
  cout << "test3" << endl;
  string str1;
  str1.resize(20);
  srand((unsigned) time(NULL));
  int a = 97;
  int length = 26;
  // [&] lambda use the variable 'a' and 'length' as & reference
  // generate(str1.begin(), str1.end(), [&](){ a = 40; return a + rand() % length;});

  // [=] lambda use the variable 'a' and 'length' as = copy, we must add 'mutable' to change the value 
  // generate(str1.begin(), str1.end(), [=]()mutable{ a = 40; return a + rand() % length;});
  generate(str1.begin(), str1.end(), [=,&a]()mutable{ a = 40; return a + rand() % length;});

  cout << str1 << endl;
  cout << a << endl;



  return 0;
}
