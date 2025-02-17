#include <iostream>
#include <Stack.h>
#include <Product.h>
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
using namespace std;
template<typename T>
struct Node2
{
    T *arr;
    int  arrcount;
    Node2 *next;
    Node2()
    {
        next = NULL;
        arr= new T[4];
        arrcount=0;
    }

};
template<typename T>
class linkedList
{
    Node2<T> *head;
    Node2<T> *tail;
    size_t size;
    int shcount=0;
    bool is_dequeued=false;
public:
    linkedList();
    size_t getsize();
    void enqueue(const T & );
    void printlist()const;
    virtual ~linkedList();
    void dequeue();
};

#endif // LINKEDLIST_H
