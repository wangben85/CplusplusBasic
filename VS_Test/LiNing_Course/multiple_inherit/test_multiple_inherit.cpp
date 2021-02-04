#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

//base class 1
class Person 
{
public:
  string name;
  int age;
};
ostream& operator<<(ostream& os, Person& person)
{
   return os << "Name is " << person.name << "age is " << person.age << endl; 
}

//base class 2
class Teacher
{
public:
  int code;
  string school;
  string speciality;
};
ostream& operator<<(ostream& os, Teacher& teacher)
{
   return os << "code is " << teacher.code << " school name is " << teacher.school << " speciality is " << teacher.speciality << endl;
}

//child class
//multiple inheritance
class Professor: public Person, 
                 public Teacher
{
public: 
  string title;
};
ostream& operator<<(ostream& os, Professor& professor)
{
   return os << (Person&)professor << endl << (Teacher&)professor << endl << " title is " << professor.title << endl;
}

class ParentClass1
{
public:
    void show()
    {
       cout << "This is ParentClass1 show() " << endl;
    }
};

class ParentClass2
{
public:
    void show()
    {
       cout << "This is ParentClass2 show() " << endl;
    }
};

class SubClass: public ParentClass1, 
                public ParentClass2
{
public:
#if 1
   void show()
   {
      cout << "This is SubClass show() " << endl;
   }
#endif
};

// main
int main(int argc, const char *argv[])
{
   cout << " Test 1----------------------------" << endl;
   Professor prof;
   prof.name = "Wang Ben ";
   prof.age = 36;
   prof.code = 25;
   prof.school = "NanJing normal University";
   prof.speciality = "System Engineering";
   prof.title = "Dr.";
   cout << prof << endl;
   
   cout << " Test 2----------------------------" << endl;
   SubClass sub1;
   // subclass show
   sub1.show();
   // parentclass1 show
   ParentClass1 *pPare1 = new SubClass();
   pPare1->show();
   delete pPare1;
   // pareclass2 show
   ParentClass2 *pPare2 = new SubClass();
   pPare2->show();
   return 0;
}
