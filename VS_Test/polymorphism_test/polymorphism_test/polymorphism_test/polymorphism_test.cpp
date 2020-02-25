#include <iostream>
using namespace std;

class A //Animal
{
public:
    A()
    {
        cout << "Create A" << endl;
    }
    virtual ~A()
    {
        cout << "Free A" << endl;
    }
    virtual void Eat()         //virtual keyword, polymorphism
    {
        cout << "A Eat()" << endl;
    }
    virtual void Sleep()       //virtual keyword, polymorphism
    {
        cout << "A Sleep()" << endl;
    }
};

class P : public A //Person
{
public:
    P()
    {
        cout << "Create P" << endl;
    }
    ~P()
    {
        cout << "Free P" << endl;
    }
    void Eat()
    {
        cout << "P Eat()" << endl;
    }
    void Sleep()
    {
        cout << "P Sleep()" << endl;
    }
};

class Dog : public A  //Dog
{
public:
    void Eat()
    {
        cout << "Dog Eat()" << endl;
    }
    void Sleep()
    {
        cout << "Dog Sleep()" << endl;
    }
};

class Pig : public A  //Pig
{
public:
    void Eat()
    {
        cout << "Pig Eat()" << endl;
    }
    void Sleep()
    {
        cout << "Pig Sleep()" << endl;
    }
};

void fun(A *pa)
{
    pa->Eat();
    pa->Sleep();

}

void main()
{
/*
    P p;
    Dog dog;
    Pig pig;

    fun(&p);
    fun(&dog);
    fun(&pig);
*/
    P *p = new P;
    delete p;
    p = NULL;
    system("pause");
}