#include <iostream>
#include <vld.h>
using namespace std;

int main()
{
    int *p = new int[10];
    delete p;
    p = NULL;
    return 0;
}