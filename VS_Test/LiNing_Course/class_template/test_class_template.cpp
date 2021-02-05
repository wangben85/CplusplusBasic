#include <string> 
#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

typedef int Item;

//-----------------Normal Class
class Stack 
{
private:
    enum{MAX = 20};
    Item mItems[MAX];
    int mTop;  // next item of current top item

public:
   Stack(); // constructor
   bool isEmpty();
   bool isFull();
   bool push(const Item& item);
   bool pop(Item& item);
   Item* getTop();
};

Stack::Stack()
{
    mTop = 0; // init value
}

bool Stack::isEmpty()
{
    return mTop == 0;
}

bool Stack::isFull()
{
   return mTop == MAX;
}

bool Stack::push(const Item& item)
{
   if ( !isFull() )
   {
       mItems[mTop++] = item;
       return true;
   }
   else
   {
      return false;
   }
}

bool Stack::pop(Item & item)
{
   if ( !isEmpty() )
   {
      item = mItems[--mTop];
      return true;
   }
   else
   {
      return false;
   }
}

Item* Stack::getTop()
{
   if ( !isEmpty() )
   {
      return &mItems[mTop -1];
   }
   else
   {
      return nullptr;
   }
}

//-----------------Template Class
// template <typename StackType>
template <typename StackType, int n>
class TemplateStack
{
private:
   //  enum{MAX = 20};
   //  StackType mItems[MAX];
    StackType mItems[n];
    int mTop;
    int size;   // mItems size
public:
    TemplateStack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const StackType& item);
    bool pop(StackType& item);
    StackType* getTop();
};

// StackType is 类型参数, n is 非类型参数
template <typename StackType, int n>
// template <typename StackType>
//constructor
TemplateStack<StackType, n>::TemplateStack()
{
    mTop = 0;
    size = n;   // size is input from external parameter
}

template <typename StackType, int n>
// template <typename StackType>
bool TemplateStack<StackType, n>::isEmpty() const
{
    return mTop == 0;
}

template <typename StackType, int n>
// template <typename StackType>
bool TemplateStack<StackType, n>::isFull() const
{
   //  return mTop == MAX;
    return mTop == size;
}

template <typename StackType, int n>
// template <typename StackType>
bool TemplateStack<StackType, n>::push(const StackType& item)
{
    if(!isFull())
    {
        mItems[mTop++] = item;
        return true;
    }
    else
    {
       cout << "Could not push, stack in full" << endl;
       return false;
    }
}

template <typename StackType, int n>
// template <typename StackType>
bool TemplateStack<StackType, n>::pop(StackType &item)
{
    if(!isEmpty())
    {
        item = mItems[--mTop];
        return true;
    }
    else
    {
        cout << "Could not pop, stack in empty" << endl;
        return false;
    }
}

template <typename StackType, int n>
// template <typename StackType>
StackType* TemplateStack<StackType, n>::getTop()
{
    if(!isEmpty())
    {
        return &mItems[mTop - 1];
    }
    else
    {
        return nullptr;
    }
}

// arguments have different type name T1,T2 and T3
// template <typename T1, typename T2, typename T3>  // ok
template <typename T1 = int , typename T2 = string, typename T3 = float> // put the defaut type name  
class templateClass
{
public:
  templateClass(T1 &value1, T2 &value2, T3 &value3): mValue1(value1),mValue2(value2),mValue3(value3)
  {

  }
  ~templateClass()
  {
      cout << "clean up templateClass" << endl;
  }

  virtual T1 getValue1()
  {
      return mValue1;
  }
 
  virtual T2 getValue2()
  {
      return mValue2;
  }

  virtual T3 getValue3() const
  {
      return mValue3;
  }

private:
  T1 mValue1;
  T2 mValue2;
  T3 mValue3;
};

// main
int main(int argc, const char *argv[])
{
   cout << " Test 1--Normal class---------------------" << endl;
   Stack stackTest; 
   stackTest.push(20);
   stackTest.push(30);
   stackTest.push(40);
   Item itemTest;
   stackTest.pop(itemTest);
   cout << "The item itemTest poped is " << itemTest << endl;
   cout << "The current top item is " << *stackTest.getTop() << endl;
  
   cout << " Test 2--template class<int>----------------------" << endl;
   // TemplateStack<int> stackInt;
   // stackInt.push(123);
   // stackInt.push(456);
   // stackInt.push(789);
   // int item;
   // stackInt.pop(item); 
   // cout << "The item poped is " << item << endl;
   // cout << "The current top item is " << *stackInt.getTop() << endl;
   
   cout << " Test 3--template class<string>----------------------" << endl;
//    TemplateStack<string> stackString;
//    stackString.push("wang");
//    stackString.push("ben");
//    stackString.push("alex");
//    string itemString;
//    stackString.pop(itemString); 
//    cout << "The itemstring poped is " << itemString << endl;
//    cout << "The current top item is " << *stackString.getTop() << endl;
   
   cout << " Test 4--template class----------------------" << endl;
   TemplateStack<int, 5> stackInt;
   stackInt.push(123);
   stackInt.push(456);
   stackInt.push(789);
   stackInt.push(111);
   stackInt.push(222);
   stackInt.push(333);
   int item;
   stackInt.pop(item); 
   cout << "The item poped is " << item << endl;
   
   cout << " Test 5--template class----------------------" << endl;
   int n = 123;
   string str = "Ben Wang";
//    float m = 12.25; 
   double t = 111.11111;
//    templateClass<int, string, float > temp(n, str, m);
   templateClass<int, string, double > temp(n, str, t); // overwrite the default type name 'float' to 'double'
   cout << temp.getValue1() << endl;
   cout << temp.getValue2() << endl;
   cout << temp.getValue3() << endl;
}