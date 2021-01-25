#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char *argv[])
{

  enum color
  {
    red,            //default is 0
    yellow,         //default is 1
    green,
    blue
  };

  enum COLOR        // set user defined value
  {
    RED     = 2,           
    YELLOW  = 4, 
    GREEN   = 6, 
    BLUE    = 8
  };


  color flowercolor;
  flowercolor = blue;

  COLOR FLOWERCOLOR;
  COLOR FLOWERCOLOR2;
  FLOWERCOLOR = GREEN;
  FLOWERCOLOR2 = BLUE;

  cout << "flower color is " << flowercolor << endl;
  cout << "FLOWER COLOR is " << FLOWERCOLOR << endl;
  cout << "FLOWER2 COLOR is " << FLOWERCOLOR2 << endl;

  //enum class  C++ 11 new features
  enum class number3{ONE,TWO,THREE};
  enum class number4{ONE,TWO,THREE};
  enum class number5{ONE,TWO,THREE,FOUR,FIVE};
  enum class number6:short{ONE,TWO,THREE,FOUR,FIVE};      // the default element size is changed from 'int' to 'short', which is 4 to 2

  number3 num3 = number3::TWO;
  number4 num4 = number4::TWO;

  cout << "num3 is " << (int)num3 << endl;

  cout << "number3 size is " << sizeof(number3) << endl;   //default each element size is 4
  cout << "number5 size is " << sizeof(number5) << endl;   //default each element size is 4 
  cout << "number6 size is " << sizeof(number6) << endl;   //default each element size is 2 

#if 0
  if ( num3 == number3::ONE)
    cout << "num3 is ONE" << endl;
  else if ( num3 == number3::TWO)
    cout << "num3 is TWO" << endl;
  else
    cout << "num3 is THREE" << endl;
#endif


}
