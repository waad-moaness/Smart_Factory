#include <iostream>
#include <Stack.h>
#ifndef PRODUCT_H
#define PRODUCT_H
using namespace std;
template<class T>
class Product: public Stack<string>
{
    public:
        Product();
        void add_in_product();
        size_t get_size();
        virtual ~Product();
       T& get_name();
        void print();

    protected:

    private:
       T p_name ;
      T opname ;
       Stack<string> stackob;

};

#endif // PRODUCT_H
