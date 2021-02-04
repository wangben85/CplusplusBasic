#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>
#include "test_POLYMORPHIC.hpp"
#include <valarray>
using namespace std;

// polymorphic is achieved by key word "virtual"
class Vehicle
{
public:
   virtual string getName()
   {
      return mName;
   }

   virtual void setMaxSpeed(float maxSpeed)
   {
      
   }

   virtual bool hasWheels()
   {
      return false;
   }
   
   virtual int getWheelCount()
   {
      return 0;
   }
   
   virtual bool canFly()
   {
      return false;
   }

   virtual int getCode1()
   {
      return code1;
   }

   // pure virtual function
   virtual void process() = 0;

protected:

   int code2 = 30;

private:

   string mName = "None";
   float mMaxSpeed = 0;
   int code1 = 20;
};

class Car : public Vehicle
{
public:
  virtual string getName()
  {
     cout << "Name is Car" << endl;
     return "car";
  }

  virtual bool hasWheels()
  {
     cout << "Has wheels yes!" << endl;
     return true;
  }

  virtual bool canFly()
  {
     cout << "Can fly No!" << endl;
     return false;
  }

  virtual int getWheelCount()
  {
     
     cout << "Wheel Count is 4" << endl;
     return 4;
  }

  virtual int getCode2()
  {
     return code2;
  }

  virtual void process()
  {
     cout << "car::process" << endl;
  }
private:
  int code1;
  int code2 = 555;
};

class Plane: public Vehicle
{
public:
  virtual string getName()
  {
     cout << "Name is plane" << endl;
     return "plane";
  }

  virtual bool hasWheels()
  {
     cout << "Has wheels yes!" << endl;
     return true;
  }

  virtual bool canFly()
  {
     cout << "Can fly Yes!" << endl;
     return true;
  }

  virtual int getWheelCount()
  {
     cout << "Wheel Count is 3" << endl;
     return 3;
  }
  
  virtual void process()
  {
     cout << "plane::process" << endl;
  }
};


int main(int argc, const char *argv[])
{
   cout << "----------------------------------------------------" << endl;
   cout << "--------Test 1--------------------------------------" << endl;
   cout << "----------------------------------------------------" << endl;
   Vehicle *p = new Car();
   cout << p->getName() << endl;
   cout << p->getWheelCount() << endl;

   cout << "----------------------------------------------------" << endl;
   cout << "--------Test 2--------------------------------------" << endl;
   cout << "----------------------------------------------------" << endl;
   Vehicle *q = new Plane();
   cout << q->getName() << endl;
   cout << q->getWheelCount() << endl;

   cout << "----------------------------------------------------" << endl;
   cout << "--------Test 3--------------------------------------" << endl;
   cout << "----------------------------------------------------" << endl;
   Car car1;
   cout << car1.getCode1() << endl;
   cout << car1.getCode2() << endl;
   car1.process();

   cout << "----------------------------------------------------" << endl;
   cout << "--------Test 4--------------------------------------" << endl;
   cout << "----------------------------------------------------" << endl;
   Plane plane1;
   plane1.process();
 
   return 0;
}
