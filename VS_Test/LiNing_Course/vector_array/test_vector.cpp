#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(int argc, const char *argv[])
{

  // vector
  vector<int> values;

  //add elements 
  values.push_back(20);
  values.push_back(40);
  values.push_back(60);

  for(int n:values)
  {
    cout << n << endl;
  }

  long size = values.size();
  cout << "values size is " << size <<endl;
  for (int i = 0; i < size; i++)
  {
    cout << values[i] << ',' << endl;
  }
  cout << "values.at(0) = " <<  values.at(0) << endl;

  //array template
  array<string, 5> productNames = { "iPhone 11", "iPhone 12"};
  array<int, 3> codes = {200, 300, 400};

  cout << "productNames[0] = " << productNames[0] << endl;
  cout << "codes[2] = " << codes[2] << endl;
  
  cout << "productNames size is  = " << productNames.size() << endl;
  cout << "codes size is  = " << codes.size() << endl;
  
  array<int, 3> codes1;
  codes1 = codes;
  codes1[0] = 321;
  codes1[1] = 432;
  cout << "codes1 values are :" << endl;
  for ( int i = 0; i < codes1.size(); i++ )
  {
    cout << codes1[i] << "," << endl;
  }
  
  cout << "original codes values are :" << endl;
  for ( int i = 0; i < codes.size(); i++ )
  {
    cout << codes[i] << "," << endl;
  }


}
