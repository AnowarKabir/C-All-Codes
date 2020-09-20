#include<bits/stdc++.h>
using namespace std;
class sound
{
public:
    virtual void print()=0;
};
class dog:public sound
{
public:
    void print()
    {
        cout<<"Ghewueee"<<endl;
    }
};
class cat:public sound
{
public:
    void print()
    {
        cout<<"Meuweeuu"<<endl;
    }
};
main()
{
    dog d;
    cat c;
    dog *ptr;
    ptr=&d;
    ptr->print();
    cat *ptr1;
    ptr1=&c;
    ptr1->print();
}
