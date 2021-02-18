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


using namespace std;

void output(string s)
{
  cout << s << " ";
}

int main(int argc, const char *argv[])
{
  // set
  // the elements in set are unique
  // insert, copy, intersection, union
  set<string> set1{ "Bill", "Mike"};
  cout << set1.size() << endl;

  //copy set1 to array_string
  cout << "array_string is " ;
  array<string, 2> array_string;
  copy(set1.begin(), set1.end(), array_string.begin());   // copy
  for_each(array_string.begin(), array_string.end(), output);  // print
  cout << endl;

  //copy set1 to set2
  set<string> set2;
  cout << "set2 is " ;
  copy(set1.begin(), set1.end(), insert_iterator<set<string>>(set2, set2.begin()));   // convert the const set2 iterator to insert iterator
  for_each(set2.begin(), set2.end(), output);  // print
  cout << endl;


  //insert 
  cout << "Now after insert, set2 is " ;
  set2.insert(set2.end(), "abc");
  set2.insert(set2.end(), "555");
  for_each(set2.begin(), set2.end(), output);  // print
  cout << endl;

  // intersection
  cout << "set1 is " ;
  for_each(set1.begin(), set1.end(), output);  // print
  cout << endl;
  cout << "after intersection with set2, set3 is " ;
  set<string> set3;
  set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), insert_iterator<set<string>>(set3, set3.begin()));
  for_each(set3.begin(), set3.end(), output);  // print
  cout << endl;

  // union
  cout << "set1 is " ;
  for_each(set1.begin(), set1.end(), output);  // print
  cout << endl;
  set<string> set4;
  cout << "after union with set2, set4 is " ;
  set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), insert_iterator<set<string>>(set4, set4.begin()));
  for_each(set4.begin(), set4.end(), output);  // print
  cout << endl;


  // multiset
  // the elements in multiset could be identical
  set<int> values1{1,2,2,3,3,4,6};
  for(auto it:values1)
  {
    cout << it << " ";     // set, all the identical values would be removed automatically
  }
  cout << endl;
  multiset<int> values2{1,2,2,3,3,4,6};
  for(auto it:values2)
  {
    cout << it << " ";     // multiset, all the identical values would keep there
  }
  cout << endl;
}
