#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

// parent class
class Biology
{
public:
     // Note: the base class must have one virtual pure function
     virtual void process()
     {
         cout << "This is Biology!"  << endl;
     }
};

// child class
class Person : public Biology
{
public:
      int code = 200;
};

//  child class
class Teacher: public Person
{
public: 
      string name = " Ben " ;
};

class MyClass
{
public:
    // virtual pure function
    virtual void process()
    {
        cout << "This is MyClass!" << endl;
    }
};


// main
int main(int argc, const char *argv[])
{
   Biology *biology = new Biology();
   Biology *person = new Person();
   Biology *teacher = new Teacher();

   // dynamic_cast
   Teacher *teacher1 = dynamic_cast<Teacher*>(teacher);    // conversion ok
   cout << "teacher1-name = " << teacher1->name << endl;

//    Teacher *teacher2 = dynamic_cast<Teacher*>(person);     // conversion failed
   Teacher *teacher2 = dynamic_cast<Teacher*>(biology);     // conversion failed
   if ( teacher2 == nullptr)
   {
       cout << " type conversion is failed" << endl; 
   }
   else
   {
       cout << " type conversion success" << endl; 
   }

   // typeid
   // Note: argument for typid must be the object , but not pointer
   cout << "typeid of biology is " << typeid(*biology).name() << endl;
   cout << "typeid of person is " << typeid(*person).name() << endl;
   cout << "typeid of teacher is " << typeid(*teacher).name() << endl;
   Biology testTypeIdBiology;
   cout << "testTypeIdBiology type is " << typeid(testTypeIdBiology).name() << endl;
   
   Biology *biologyTest = new Person();
   Person *personTest = nullptr;
   if(typeid(Person) == typeid(*biologyTest))
   {
       cout << "typeid(Person) == typeid(biology)" << endl;
       personTest = (Person*)biologyTest;
       cout << personTest->code << endl;
   }

   //reinterpret_cast
   MyClass myClass1 = MyClass();
   cout << "myClass1 address is " << &myClass1 << endl;
   long* address = reinterpret_cast<long*>(&myClass1);
   cout << "long address is " << address << endl;

   long addressValue = *reinterpret_cast<long*>(&myClass1);
   cout << "addressValue is 0x" << hex << addressValue << endl;

   MyClass* test = reinterpret_cast<MyClass*>(address);
   cout << "check the test output" << endl;
   test->process();
   
}
