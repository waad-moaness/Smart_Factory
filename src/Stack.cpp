#include "Stack.h"
template class Stack<string>;
template<class T>
Stack<T>::Stack()
{
    head= NULL;
    tail= NULL;
    size =0;
}
template<class T>
size_t Stack<T>::getsize()
{
    return size;
}
template<class T>
T & Stack<T>::pop()
{
    Node<T> * temp= head;
    if(head == NULL)
    {
        cout<<"\nSTACK IS EMPTY !!"<<endl;
    }
    else
    {
        T v= head->data;
        head=head->next;
        delete temp;
        size--;
        return v;
    }

}
template<class T>
void Stack<T>::pushback(const T &value)
{
    Node<T> *newnode = new Node<T>(value,NULL);
    if(head == NULL)
    {
        head = tail=newnode;
    }
    else
    {
        tail->next=newnode;
        tail=newnode;
    }
    size++;
}
template<class T>
void Stack<T>::print()
{
    Node<T> *temp = head;
    size_t i=0;

    while(temp!=NULL)
    {
        cout<<"\n op ("<<i<<"): "<<temp->data<<endl;
        temp= temp->next;
        i++;
    }

}
template<class T>
Stack<T>::~Stack()
{
    while(head!=NULL)
    {
        Node <T>* temp = head;
        head=head->next;
        delete temp;
    }
}
