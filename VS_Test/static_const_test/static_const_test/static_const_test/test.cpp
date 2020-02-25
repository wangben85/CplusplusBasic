#include <stdio.h>
#include <iostream>
using namespace std;

class Test
{
    friend void fun(Test &t);   //friend function definition
public:
    Test(int d = 0) :data(d)
    {
        count++;
    };
    virtual ~Test() 
    {
        count--;
    };

    static void show()    //static function
    {
        cout << "inside the static show()" << endl;
        //cout << data << endl;  // static functon can NOT access data
        cout << count << endl;
    }

    void list() const      //const function
    {
        cout << "This is the const list" << endl;
        //data = 3;  //const function , data can not be modified
    }
private:
    int data;

    static int count;   //static object count
};

int Test::count = 0;


void fun(Test &t)               //friend function implementation. not need to have Test:: as the prefix
{
    cout << "t.data = " << t.data << endl;  // call the "private" directly

    //below are the same
    cout << "object count = " << Test::count << endl;
    cout << "object count = " << t.count << endl;

    //
    t.show();
}

void main()
{
    Test t(100);
    Test t1(100);
    Test t2(100);

    fun(t);
    system("pause");
}