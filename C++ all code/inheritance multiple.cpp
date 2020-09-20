#include<bits/stdc++.h>
using namespace std;
class info
{
    int id;

public:
    void getid()
    {
        cin>>id;
        cout<<id<<endl;
    }
};
class student
{
    int marks;
public:
   void getmarks()
    {
        cin>>marks;
        cout<<marks<<endl;
    }
};
class result:public  info,public student
{
public:
    void print()
    {
        getid();
        getmarks();
    }
};
main()
{
    result ob;
    ob.print();
}

