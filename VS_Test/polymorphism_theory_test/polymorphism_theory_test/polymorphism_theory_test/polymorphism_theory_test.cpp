#include <iostream>
using namespace std;

class Base
{
public:
    Base():x(0)
    {}
    ~Base()
    {}
    virtual void show()
    {
        cout << "This is Base show()" << endl;
    }
    virtual void print()
    {
        cout << "This is Base print()" << endl;
    }
    void fun()  //not virtual function
    {
        cout << "This is Base fun()" << endl;
    }
private:
    int x;
};

class D : public Base
{
public:
    D():y(0)
    {}
    ~D()
    {}
    void show()  //override base virtual show()
    {
        cout << "This is D show()" << endl;
    }
    /*
    No override base virtual print()
    */
    void fun()  //not virtual function in base
    {
        cout << "This is D fun()" << endl;
    }
    virtual void list()   //child own virtual function
    {
        cout << "This is D list()" << endl;
    }
private:
    int y;
};

void main()
{
    Base *c = new Base;
    D d;

    c = &d;

    c->show(); // call child
    c->print(); // call father
    c->fun(); //call father
    d.fun(); //call child
    
    system("pause");
}