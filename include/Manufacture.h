#include <iostream>
#include <Stack.h>
#include <Product.h>
#include <linkedList.h>
#ifndef MANUFACTURE_H
#define MANUFACTURE_H

using namespace std;
class Manufacture
{
    public:
        Manufacture();
        virtual ~Manufacture();
       void addproduct();
       void getnxtproduct();
       void printllist();
    protected:

    private:
        linkedList<Product<string>> ll;
};

#endif // MANUFACTURE_H
