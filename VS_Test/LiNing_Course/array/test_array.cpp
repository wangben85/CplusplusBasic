#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int main()
{

  // C++ 11 definition and init
  int productionid[200] {1,2,3};
  int productionid1[100] {4,5,6};
  int productionid2[100] {4,5,6};

  // get the size of the array
  cout << "The size of productionid is " << sizeof(productionid) / sizeof(int)<< endl;
  cout << "The size of productionid1 is "<< sizeof(productionid1) / sizeof(int)<< endl;

}
