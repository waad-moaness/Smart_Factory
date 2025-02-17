#include <iostream>
#ifndef STACK_H
#define STACK_H
using namespace std;
template<typename T>
struct Node
{
    T data;
    Node *next;
    Node()
    {
        next = NULL;
    }
    Node(const T& v, Node*nxt)
    {
        data = v ;
        next = nxt;
    }
};
template<typename T>
class Stack
{
public:
    Stack();
    T & pop();
    void pushback(const T &);
    void print();
    size_t getsize();
    Node<T> * head;
    Node<T>  *tail;
    virtual ~Stack();

protected:

private:

    size_t size;

};

#endif // STACK_H
