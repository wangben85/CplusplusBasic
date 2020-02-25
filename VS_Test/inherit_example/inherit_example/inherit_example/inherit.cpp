#include<iostream>
using namespace std;

class Base1
{
public:
    Base1(int x = 1): m_x(x)
    {
        cout << "Create Base1" << endl;
    }

    ~Base1()
    {
        cout << "Free Bsase1" << endl;
    }
private:
    int m_x;
};

class Base2
{
public:
    Base2(int y = 2): m_y(y)
    {
        cout << "Create Base2" << endl;
    }

    ~Base2()
    {
        cout << "Free Bsase2" << endl;
    }
private:
    int m_y;
};

class Base3
{
public:
    Base3(int z = 3): m_z(z)
    {
        cout << "Create Base3" << endl;
    }

    ~Base3()
    {
        cout << "Free Bsase3" << endl;
    }
private :
    int m_z;
};

class D : public Base1, public Base2, public Base3  //constructor sequence is Base1, Base2 and Base3
    //class D : public Base2, public Base1, public Base3  //constructor sequence is Base2, Base1 and Base3
{
public:

    //D(int data):Base1(data), Base2(data), Base3(data), b1(data), b2(data), b3(data)
    D(int data) 
    {
        cout << "Create D" << endl;
    }

    ~D()
    {
        cout << "Free D" << endl;
    }
private:

    Base1 b1;
    Base2 b2;
    Base3 b3;   //constructor sequence is Base1, Base2 and Base3

    //Base2 b2;
    //Base3 b3;
    //Base1 b1;   //constructor sequence is Base2, Base3 and Base1

};

void main()
{
    D d(10);

    //system("pause");
}