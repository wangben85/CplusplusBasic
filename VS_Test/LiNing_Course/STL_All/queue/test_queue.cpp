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


using namespace std;

int main(int argc, const char *argv[])
{
  //queue
  queue<int> q;

  q.push(1);
  q.push(2);
  q.push(3);

  cout << q.front() << endl;    // get the first element
  cout << q.back() << endl;     // get the last element

  q.pop();    // pop the first element
  
  cout << q.front() << endl;    // then get the current first element
  cout << q.size() << endl;     // then get the current queue size

  //priority_queue
  priority_queue<int> p;
  p.push(10);
  p.push(20);
  p.push(30);

  // no .front and .back in priority_queue

  // 
  cout << p.top() << endl;    // get the max value directly
  p.pop();
}
