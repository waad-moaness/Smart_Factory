#include "Queue.h"

Queue::Queue()
{
    capacity=3;
    read=-1;
    write=-1;
    size=0;
    que= new Stack<int>[capacity];
}

void Queue :: enqueue(const Stack<int> & st)
{

    if( isempty())
    {
        write=read=0;
         que[write++]=st;
        size++;
    }
    else if(isfull())
    {
        cout<<"\nIS FULL"<<endl;
    }
    else
    {
      que[write]=st;
        write=(write+1)% capacity;

        size++;
    }
}


void Queue ::dequeue()
{
    if(isempty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
         Stack<int> val= que[read];
        read=(read+1)% capacity;
        size--;
        val.print();
    }
}

bool Queue ::isempty()
{

    if(write==read)
        return true;
    else
        return false;
}

bool Queue :: isfull()
{
    if(((write+1)%capacity)==read)
    {
        return true;
    }
    return false;
}

void Queue :: print()
{
    int temp2=read;
    while(temp2!=write)
    {
         cout<<"\nSTACK ("<<temp2<<"): "<<endl;
         que[temp2].print();
         cout<<"\n--------------------------------------"<<endl;
        temp2=(temp2+1)%capacity;
    }
}

size_t Queue::get_size()
{
    return size;
}

size_t Queue::get_capacity()
{
    return capacity;
}
void Queue::peek()
{
    if(isempty())
    {
        cout<<"empty"<<endl;
    }
    else
    {
       que[read].print();
    }
}

Queue::~Queue()
{
    delete [] que;
}
