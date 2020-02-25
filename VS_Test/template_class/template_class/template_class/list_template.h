#pragma once
#include<iostream>
using namespace std;

template<typename Type>
class List;

template<typename Type>
class ListNode   //Node structure
{
    friend class List<Type>;  //friend
public:
    ListNode() : data(Type()), next(NULL)
    {}
    ListNode(Type d, ListNode<Type> *n = NULL) : data(d), next(n)
    {}
private:
    Type data;
    ListNode<Type> *next;
};

template<typename Type>
class List         //list structure
{
public:
    List();
    bool push_back(Type x);
    void show_list() const;
private:
    ListNode<Type> *first;
    ListNode<Type> *last;
    size_t size;
};

template<typename Type> 
List<Type>::List()        //list constructor
{
    first = last = (ListNode<Type>*) malloc(sizeof(ListNode<Type>));
    last->next = NULL;
    size = 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////
template<typename Type>
bool List<Type>::push_back(Type x)
{
    ListNode<Type> *s = (ListNode<Type>*) malloc(sizeof(ListNode<Type>));
    if (s == NULL)
        return false;
    s->data = x;
    s->next = NULL;

    last->next = s;
    last = s;
    size++;
    return true;
}

template<typename Type>
void List<Type>::show_list() const
{
    ListNode<Type> *p = first->next;
    while (p != NULL)
    {
        cout << p->data << "--->";
        p = p->next;
    }
    cout << "NULL" << endl;
}