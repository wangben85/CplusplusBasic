#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

typedef struct
{
    mutable int code;     // use "mutable" to define, it could be changed even by "const"
    // int code;
    string name;
}STRUCT_NEW;

int main(int argc, const char *argv[])
{
    const STRUCT_NEW mystruct1 = STRUCT_NEW(); 
    mystruct1.code = 123;
    const STRUCT_NEW* mystruct2 = new STRUCT_NEW(); // mystruct1.code = 123;
    mystruct2->code = 456;

    cout << "mystruct1.code =" << mystruct1.code << endl;
    cout << "mystruct2->code =" << mystruct2->code << endl;

    delete mystruct2;
}
