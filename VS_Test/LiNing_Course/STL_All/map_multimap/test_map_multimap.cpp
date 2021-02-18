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


using namespace std;

void output(string s)
{
  cout << s << " ";
}

int main(int argc, const char *argv[])
{
   // map
   // the key value inside map could not be the same
   
   map<int, string> persons;
   pair<int, string> person1(10, "Bill");
   pair<int, string> person2(20, "Mike");
   pair<int, string> person3(30, "John");

   persons.insert(person1);
   persons.insert(person2);
   persons.insert(person3);

   // according to the key find ,  
   // get the first: key  
   // and the second: value
   cout << persons.find(10)->first << endl;
   cout << persons.find(10)->second << endl;


  //  map<int, string>::iterator it = persons.find(30);  // to find key = 30
  //  map<int, string>::iterator it = persons.find(10);  // to find key = 10
   map<int, string>::iterator it = persons.find(11);     // to find key = 11

   if ( it != persons.end())
   {
     cout << " The key is " << it->first << " The value is " << it->second << endl;
   }
   else
   {
     cout << "Key is not Found " << endl;
   }

  
   // print the persons1
   cout << " the map 'persons' are " << endl;
   for( auto it = persons.begin(); it!= persons.end(); it++ ) 
   {
     cout << " The key is " << it->first << " The value is " << it->second << endl;
   }
   pair<int, string> person4(20, "Ben");    // the key = 20 is the same, will not insert successfully
   cout << " after insert, the map 'persons' are " << endl;
   for( auto it = persons.begin(); it!= persons.end(); it++ ) 
   {
     cout << " The key is " << it->first << " The value is " << it->second << endl;
   } 
}
