#include <iostream>
#include <Stack.h>
#ifndef QUEUE_H
#define QUEUE_H

using namespace std;
class Queue
{
public:
    Queue();
    void enqueue(const Stack <int> & );
    void dequeue();
    bool isempty();
    bool isfull();
    void print();
    size_t get_size();
    size_t get_capacity();
    void peek();
    virtual ~Queue();

protected:

private:
    Stack <int>* que;
    size_t size;
    int read ;
    int write;
    size_t capacity;
};

#endif // QUEUE_H
