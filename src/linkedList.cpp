#include "linkedList.h"
template class linkedList<Product<string>>;

template<class T>
linkedList<T>::linkedList()
{
    head= NULL;
    tail= NULL;
    size =0;

}
template<class T>
size_t linkedList<T>::getsize()
{
    return size;
}
template<class T>
void linkedList<T>::enqueue(const T & value)
{
    Node2<T>* current=tail;
    Node2<T>* newnode;
    if(head == NULL)
    {
        newnode = new Node2<T>();
        newnode->arr[newnode->arrcount++]=value;
        head = tail=newnode;
        size++;
    }
    else if(current->arrcount==4 )
    {
        newnode = new Node2<T>();
        newnode->arr[newnode->arrcount++]=value;
        tail->next=newnode;
        tail=newnode;
        size++;
    }
    else if(is_dequeued && current==head)
    {
        if((head->arrcount+shcount==4))
        {
            newnode = new Node2<T>();
            newnode->arr[newnode->arrcount++]=value;
            tail->next=newnode;
            tail=newnode;
            size++;
        }
        else
        {
            head->arr[head->arrcount+1]=value;
            head->arrcount++;
        }
    }
    else
    {
        current->arr[current->arrcount++]=value;
    }


}
template<class T>

void linkedList<T>::printlist()const
{
    int count=0;
    if(head==NULL)
    {
        cout<<"\nLIST IS EMPTY !!"<<endl;
        return;
    }
    Node2<T> *temp = head;
    if (is_dequeued && temp->arrcount!=0 )
    {
        cout<<"\nlist("<<count<<") :"<<endl;
        for(int i=shcount; i<(temp->arrcount+shcount); i++)
        {
            size_t s=temp->arr[i].getsize();
            cout<<"\nproduct("<<i<<") : "<<temp->arr[i].get_name()<<endl;
            temp->arr[i].print();
            cout<<"------------------"<<endl;
        }
        temp= temp->next;
        count++;
    }
    else
    {
        cout<<"\nlist("<<count<<") :"<<endl;
        for(int i=0; i< temp->arrcount; i++)
        {
            size_t s=temp->arr[i].getsize();
            cout<<"\nproduct("<<i<<") : "<<temp->arr[i].get_name()<<endl;
            temp->arr[i].print();
            cout<<"------------------"<<endl;
        }
        temp= temp->next;
        count++;
    }
    while(temp!=NULL)
    {
        cout<<"\nlist("<<count<<") :"<<endl;
        for(int i=0; i< temp->arrcount; i++)
        {
            size_t s=temp->arr[i].getsize();
            cout<<"\nproduct("<<i<<") : "<<temp->arr[i].get_name()<<endl;
            temp->arr[i].print();
            cout<<"------------------"<<endl;
        }
        temp= temp->next;
        count++;
    }


}
template<class T>
linkedList<T>::~linkedList()
{
    while(head!=NULL)
    {
        Node2 <T>* temp = head;
        head=head->next;
        delete temp;
    }

}
template<class T>
void linkedList<T>::dequeue()
{
    Node2 <T>* temp = head;
    T val;
    if(head==NULL ||temp ->arrcount==0)
    {
        cout<<"\nLIST IS EMPTY !!"<<endl;
        return;
    }
    else if(temp->arrcount==1 )
    {
        cout<<"product: "<< temp->arr[shcount].get_name()<<endl;
        cout<<"___________________"<<endl;
        temp->arr[shcount].print();
        cout<<"____________________"<<endl;
        head=head->next;
        temp->arrcount--;
        delete temp;
        is_dequeued=false;
        shcount=0;
        size--;
    }
    else
    {
        cout<<"product: "<< temp->arr[shcount].get_name()<<endl;
        cout<<"___________________"<<endl;
        temp->arr[shcount++].print();
        cout<<"____________________"<<endl;
        temp->arrcount--;
        is_dequeued=true;

    }

}



