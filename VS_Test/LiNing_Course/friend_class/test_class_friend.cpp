#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

// class Remotecontroller;
class TV;

#if 1   // use the function inside Remotecontroller
// class remotecontroller
class Remotecontroller
{
public:
   void setTVState( TV &tv);     // must implementation later
   void setTVProgramIndex( TV &tv, int index);  // must implementation later
};

// class TV
class TV
{
public:
    // friend class Remotecontroller;     // it can also put here, no matther of keyword "public" or "private" 
 
    bool getState()
    {
         return mState;
    }
    int getProgramIndex()
    {
        return mProgramIndex;
    }

private:
    
   // just put some fucntions insdie Remotecontroller here as the friend function
   friend void Remotecontroller::setTVState( TV &tv);
   friend void Remotecontroller::setTVProgramIndex( TV &tv, int index);

   bool mState = false;  // TV state:  On: True ; Off: False
   int mProgramIndex = 0 ;   // TV channel index
};

// implementation of the friend function inside Remotecontroller
void Remotecontroller::setTVState( TV &tv)
{
    tv.mState = ~tv.mState; 
}

void Remotecontroller::setTVProgramIndex( TV &tv, int index)
{
    if (tv.mState == true)
    {
        tv.mProgramIndex = index;
    }
    else
    {
        cerr << "TV is OFF, could not set program index" << endl;
    }
}

#endif


#if 0   // directly put the whole class Remotecontroller as the friend class
// class TV
class TV
{
public:
    // friend class Remotecontroller;     // it can also put here, no matther of keyword "public" or "private" 
 
    bool getState()
    {
         return mState;
    }
    int getProgramIndex()
    {
        return mProgramIndex;
    }

private:
    friend class Remotecontroller;     //directly put the class Remotecontroller is the friend class of TV, it could access all the private memebers inside TV

    bool mState = false;  // TV state:  On: True ; Off: False
    int mProgramIndex = 0 ;   // TV channel index
};

// class remotecontroller
class Remotecontroller
{
public:
   void setTVState( TV &tv)
   {
       tv.mState = ~tv.mState; 
   }
   void setTVProgramIndex( TV &tv, int index)
   {
       if (tv.mState == true)
       {
           tv.mProgramIndex = index;
       }
       else
       {
           cerr << "TV is OFF, could not set program index" << endl;
       }
   }
};
#endif

// main
int main(int argc, const char *argv[])
{
    TV tv1;
    Remotecontroller rc1;
    rc1.setTVState(tv1);
    cout << "TV state is " << tv1.getState() << endl;
    // rc1.setTVState(tv1);
    // cout << "TV state is " << tv1.getState();
    rc1.setTVProgramIndex(tv1,12);
    cout << "TV program index is " << tv1.getProgramIndex();
    

}