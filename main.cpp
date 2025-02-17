#include <iostream>
#include <Stack.h>
#include <Product.h>
#include <linkedList.h>
#include <windows.h>
#include <bits/stdc++.h>
#include <Manufacture.h>
using namespace std;
linkedList<Product<string>> ll;
int main()
{
    int c=-1;
    while(c!=0)
    {
        system("cls");
        cout<<endl;
        cout<<setw(70)<<"------------------ -----"<<endl;
        cout<<setw(70)<<"| smart factory SYSTEM |"<<endl;
        cout<<setw(70)<<"------------------------"<<endl;
        cout<<"\n\n1) ADD PRODUCT IN THE LIST"<<endl;
        cout<<"-------------------------------------";
        cout<<"\n2) GET THE NEXT PRODUCT"<<endl;
        cout<<"-------------------------------------";
        cout<<"\n3) PRINT THE CURRENT PRODUCT LISTS"<<endl;
        cout<<"-------------------------------------";
        cout<<"\nTO EXIT PRESS(0)\n\n"<<endl;
        cout<<setw(50)<<"choose a number: ";
        cin>>c;

        switch(c)
        {

        case 1:
        {
            system("cls");
            cout<<setw(60)<<"1) ADD PRODUCT IN THE LIST"<<endl;
            cout<<setw(61)<<"---------------------------\n"<<endl;
            Product<string> *prd=new Product<string>();
            prd->add_in_product();
            ll.enqueue(*prd);
        }
        break;
        case 2:
        {
            system("cls");
            cout<<setw(63)<<"2) GET THE NEXT PRODUCT"<<endl;
            cout<<setw(65)<<"--------------------------\n"<<endl;
           ll.dequeue();
            cout<<"----------------------------------------";
            cout<<"\nTO GO BACK PRESS(0): "<<endl;
            int t;
            cin>>t;
            if(t==0)
            {
                break;
            }
        }
        break;
        case 3:
        {
            system("cls");
            cout<<setw(63)<<"3) PRINT THE CURRENT PRODUCT LISTS"<<endl;
            cout<<setw(67)<<"----------------------------------------\n"<<endl;
             ll.printlist();
            cout<<"----------------------------------------";
            cout<<"\nTO GO BACK PRESS(0): "<<endl;
            int t;
            cin>>t;
            if(t==0)
            {
                break;
            }

        }

        break;
        case 0:
        {
            cout<<"\nThanks for using the program ^^ <3"<<endl;
            return 0;
        }
        default:
            cout<<"\n ! UNVALID NUMBER :(  ! please, try again. ";
            Sleep(3000);

        }
    }
    return 0;
}
