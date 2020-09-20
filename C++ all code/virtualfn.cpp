#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout<<"Base"<<endl;
    }
};
class derive:public base
{
public:
   void print()
    {
        cout<<"Derive"<<endl;
    }
};
main()
{
    base b;
    //b.print();
    derive d;
    //d.print();
    base *ptr;
    ptr=&d;
   //ptr=&d;
    //ptr->print();
    ptr->print();

}
