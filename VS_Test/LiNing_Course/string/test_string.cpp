#include <string>
#include <string.h>        // used for strlen
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   char str[] = "abcdefg";
   const char *pStr = "test";  // have warning here

   /*Then string Length does not include the '\0' */
   int strLength = strlen(str);
   int pStrLength = strlen(pStr);
   
   cout << "The str[] string is " << str << endl;
   cout << "The length of str[] is " << strLength << endl;

   // print all the elements of the string
   for( int i = 0; i < strLength; i++ )
   {
     cout << str[i] << ',' << endl;
   }

   cout << "The *pStr string is " << pStr << endl;
   cout << "The length of pStr is " << pStrLength << endl;

   // print all the elements of the string
   for( int j = 0; j < pStrLength; j++ )
   {
     cout << *(pStr + j) << ',' << endl;
   }

  // string input by  Cin : only get the string before space
  int StrSize = 100;
  #if 0
  char name[StrSize];
  cout << "input the string" << endl;
  cin >> name;
  cout << "The sting is "  << name << endl;
  #endif
  
  // string input by istream.getline, could get the whole line including before and after the space
  #if 0
  char city[StrSize];
  cout << "input the city string" << endl;
  cin.getline(city, StrSize);
  cout << "The city is "  << city << endl;
  #endif
  
  string test1 = "hello world test1";
  string test2 = {"hello world test2"};
  string test3{"hello world test3"};
  cout << "The test1 is "  << test1 << endl;
  cout << "The test2 is "  << test2 << endl;
  cout << "The test3 is "  << test3 << endl;

  for( int m= 0; m < test1.length(); m++)
  {
    cout << test1[m] << ',' << endl;
  }

  //C++ string copy
  string str1 = "hello string";
  string str2;
  str2 = str1;
  cout << "The str2 is " << str2 << endl;

  //C string copy
  char c_str1[] = "hello string1";
  char c_str2[20];
  strncpy(c_str2, c_str1, strlen(c_str1));
  cout << "The c_str2 is " << c_str2 << endl;

  //C++ string link together
  #if 0
  string str3 = "This is string 3 ";
  string str4 = "This is string 4 ";
  string str5 = str3 + str4;
  cout << "The str 5 is " << str5 << endl;
  #endif
  
  //C string link together
  #if 1
  char c_str3[] = "This is c_str3 ";
  char c_str4[] = "This is c_str4 ";
  char* c_str5;
  c_str5 = strncat(c_str3, c_str4, strlen(c_str4));
  cout << "The c_str5 is " << c_str5 << endl;
  #endif

  // Raw string
  cout << "Hello \\n World" << endl;
  cout << R"(Hello \n Ben)" << endl;

}
