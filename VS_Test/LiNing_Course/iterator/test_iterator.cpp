#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>    // in order to use for_each, we have to include this

using namespace std;

//declaration
class Person;

void print_for_each(Person& person);
bool descend_func(int i, int j);

class Person
{
public:
    int code;
    string name;
    //constructor
    Person(int code, string name)
    {
        this->code = code;
        this->name = name;
    }
};

// the implementation must be put here, after Person definition
void print_for_each(Person& person)
{
    cout << "person's code =" << person.code  << "," << " person's name =" << person.name << endl;
}

// descending order
bool descend_func(int i, int j )
{
    return  (i > j ? true: false);   // descending
    // return  (i < j ? true: false);   // ascending
}

// main
int main(int argc, const char *argv[])
{
    vector<int> ages;
    // elements push_back
    ages.push_back(20);
    ages.push_back(30);
    ages.push_back(40);
    ages.push_back(50);
    ages.push_back(60);
   
    // get the vector size
    cout << "ages size is " << ages.size() << endl;
    // element pop back   
    ages.pop_back();
    
    // get the vector size again
    cout << "ages size is " << ages.size() << endl;

    // waht is iternator ? it is the pointer to the vector
    vector<int>::iterator it;
    cout << "The vector elements are" << endl;
    //Note: begin is the first element address of vector 
    //      end is the last element NEXT address of vector
    for( it = ages.begin(); it != ages.end(); it++ )
    {
        cout << *it  << ",";
    }
    cout << endl;

    cout << "use auto to print" << endl;
    for( auto itauto = ages.begin(); itauto != ages.end(); itauto++ )
    {
        cout << *itauto  << ",";
    }
    cout << endl;

    //erase element
    ages.erase(ages.begin());
    cout << "after erase element first" << endl;
    for( auto itauto = ages.begin(); itauto != ages.end(); itauto++ )
    {
        cout << *itauto  << ",";
    }
    cout << endl;

    //insert element
    ages.insert(ages.end(), 123);
    cout << "after insert element first" << endl;
    for( auto itauto = ages.begin(); itauto != ages.end(); itauto++ )
    {
        cout << *itauto  << ",";
    }
    cout << endl;

    //for_each  print all the elements
    vector<Person> persons;
    persons.push_back(Person(10,"Bill"));
    persons.push_back(Person(20,"Mike"));
    persons.push_back(Person(30,"Neil"));
    
    //normal for print
    cout << "normal for print" << endl;
    for( auto it = persons.begin(); it != persons.end(); it++ )
    {
        cout << "code = " << it->code << " name = " << it->name << endl;
    }

    //for_each print
    cout << "for_each print" << endl;
    for_each(persons.begin(), persons.end(), print_for_each);

    //sort
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(2);
    numbers.push_back(5);
    cout << "Original orders: " << endl;
    for( auto it = numbers.begin(); it != numbers.end(); it++ )
    {
        cout << *it << ',' << endl;
    }
    // default is ascending order
    sort(numbers.begin(), numbers.end()); 
    cout << "After ascending orders: " << endl;
    for( auto it = numbers.begin(); it != numbers.end(); it++ )
    {
        cout << *it << ',' << endl;
    }

    // descending order
    sort(numbers.begin(), numbers.end(), descend_func);
    cout << "After descending orders: " << endl;
    for( auto it = numbers.begin(); it != numbers.end(); it++ )
    {
        cout << *it << ',' << endl;
    }
    return 0;
}
