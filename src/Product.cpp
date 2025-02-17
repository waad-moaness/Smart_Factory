#include "Product.h"
template class Product<string>;
template<class T>
Product<T>::Product()
{
}
template<class T>
void Product<T>::add_in_product()
{

    cout<<"\nEnter product name: ";
    cin>>p_name;
    int n;
    cout<<"\nEnter number of operations the product is gonna go through: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"\nEnter operation ("<<i<<"): ";
        T name;
        cin>>name;
        opname=name;
        stackob.pushback(opname);
    }
    cout<<"\n-------------------------------------------------"<<endl;
}
template<class T>
void Product<T>::print()
{
    stackob.print();
}
template<class T>
size_t Product<T>::get_size()
{
    return stackob.getsize();
}
template<class T>
T& Product<T>::get_name()
{
    return p_name;
}
template<class T>
Product<T>::~Product()
{
    //dtor
}
