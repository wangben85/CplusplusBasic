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
#include <stack>           // use stack


using namespace std;

int main(int argc, const char *argv[])
{
  //stack,  LIFO
  stack<int> stack_test;
  stack_test.push(10);
  stack_test.push(20);
  stack_test.push(30);

  cout << stack_test.top() << endl;  // get the last element '30'

  cout << "stack size is " << endl;
  cout << stack_test.size() << endl;  // getht the stack size

  stack_test.pop();
  cout << "after pop , stack size is " << endl;
  cout << stack_test.size() << endl;  // getht the stack size

}
