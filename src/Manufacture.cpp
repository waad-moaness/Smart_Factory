#include "Manufacture.h"

Manufacture::Manufacture()
{
    //ctor
}

Manufacture::~Manufacture()
{
    //dtor
}
void Manufacture::addproduct() {
     Product<string> *prd=new Product<string>();
            prd->add_in_product();
            ll.enqueue(*prd);
}
void Manufacture::getnxtproduct() {
    ll.dequeue();
}
void Manufacture::printllist() {
    ll.printlist();
}
