#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include <list>            // use list
#include <algorithm>       // in order to use for_each


using namespace std;

void output(int value) 
{
   cout << value  << "," ;
}

// remove the value if it is even
bool removeifeven(int value)
{
   if ( value % 2 == 0)
   {
     return true;
   }
   else
   {
     return false;
   }
}

// sort descending order
bool compareInt(int n1, int n2)
{
  if ( n1 > n2 )
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main(int argc, const char *argv[])
{
   // list init
   cout << " list init test" << endl;
   list<int> one(10,3);   // create 10 nodes, default is 3
   for_each(one.begin(), one.end(), output);
   cout << endl;

   // list insert
   list<int> two;
   int intArray[]{1,2,3,4,5,6};
   cout << " list insert test" << endl;
   two.insert(two.begin(), intArray, intArray + 6);  // insert list with array
   two.insert(two.begin(), 100);   // insert one node in the beginning
   two.insert(two.end(), 200);     // insert one node in the end
   for_each(two.begin(), two.end(), output);    // print
   cout << endl;

   // list remove
   cout << " list remove test" << endl;
   two.remove(4) ;  // list the value = 4, not index
   for_each(two.begin(), two.end(), output);    // print
   cout << endl;

   // list remove conditionally, remove_if
   cout << " list remove_if test" << endl;
   two.remove_if(removeifeven);
   for_each(two.begin(), two.end(), output);    // print
   cout << endl;
   
   // list sort
   cout << " list sort test" << endl;
   two.sort(compareInt);
   for_each(two.begin(), two.end(), output);    // print
   cout << endl;

   // list splice
   cout << " list splice test" << endl;
   two.splice(two.begin(), one);      // insert the list 'one' into the beginning of list 'two'
   for_each(two.begin(), two.end(), output);    // print
   cout << endl;

   // list unique
   cout << " list unique test" << endl;
   two.unique();              // remove the the same items next to each other
   for_each(two.begin(), two.end(), output);    // print
   cout << endl;
   
   // list merge
   cout << " list merge test" << endl;
   cout << " list1: " << endl;
   for_each(one.begin(), one.end(), output);    // print
   cout << endl;

   one.insert(one.begin(),999); 
   cout << " !!!list1 after insert: " << endl;
   for_each(one.begin(), one.end(), output);    // print
   cout<< endl;

   cout << " list2: " << endl;
   for_each(two.begin(), two.end(), output);    // print
   cout << endl;
   cout << " merge two lists: " << endl;
   one.merge(two);
   for_each(one.begin(), one.end(), output);    // print
   cout << endl;



   cout << endl;
}
