#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int value = 40 ;  // global namespace

//namespace1
namespace namespace1 {
    int value = 10 ;
    void process(int); // declaration
};

//namespace2
namespace namespace2 {
    int value = 10 ;
    void process2(int); // declaration
};

//anonymous namespace, all the members could only be used inside this file
namespace {
    int Num = 101;
};

// using namespace namespace2;   //using the whole namespace
using namespace2::process2;      //using the members in namespace , but not the whole namespace

int main(int argc, const char *argv[])
{
    cout << "::value = " << ::value << endl; // global namespace, we can use :: before the variable
    cout << "namespcae1::value = " << namespace1::value << endl; // namespace1
    namespace1::process(100); //call namespace1 function
    namespace1::process(200); //call namespace1 function

    process2(300); // call namespace2 memeber function directly because we have "using namespace2::process" above

    //output anonymous namespace value
    cout << "Num = " << Num << endl;
 
}

namespace namespace1 
{
    void process( int n)       //definition
    {
        cout << "namespace1" << endl;
        cout << "n = "<< n << endl;
    }
}

namespace namespace2
{
    void process2( int n)       //definition
    {
        cout << "namespace2" << endl;
        cout << "n = "<< n << endl;
    }
}

