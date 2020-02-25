// string1.h -- fixed and augmented string class definition

#ifndef STRING1_H_
#define STRING1_H_
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
    char * str;             // pointer to string
    int len;                // length of string
    static int num_strings; // number of objects
    static const int CINLIM = 80;  // cin input limit
public:
// constructors and other methods
    String(const char * s); // constructor
    String();               // default constructor, no arguments
    String(const String &); // copy constructor
    ~String();              // destructor
    int length () const { return len; }   //inline function
// overloaded operator methods    
    String & operator=(const String &); // "=" operator overloaded, different kind of argument
    String & operator=(const char *); // "-" operator overloaded, different kind of argument
    char & operator[](int i); // "[]" operator overloaded
    const char & operator[](int i) const; // const "[]" operator overloaded
// overloaded operator friends
    friend bool operator<(const String &st, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
// static function
    static int HowMany();
};
#endif
