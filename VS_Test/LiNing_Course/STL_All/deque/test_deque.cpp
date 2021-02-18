#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include <list>            // use list
#include <algorithm>       // in order to use for_each
#include <deque>           // use deque


using namespace std;

int main(int argc, const char *argv[])
{

  deque<int> values{1,2,3,4,5};
  cout << values[2] << endl;         // could access the element by index directly

  values.erase(values.begin());      // erase the first element
  cout << values[2] << endl;         

  values.insert(values.begin(), 100); // insert the value in the beginning
  cout << values[2] << endl;       
  cout << values[0] << endl;        

}
