#include<bits/stdc++.h>
using namespace std;
class info
{
    int id;
    int marks;
public:
    void getid()
    {
        cin>>id;
        cout<<id<<endl;
    }
    void getmarks()
    {
        cin>>marks;
        cout<<marks<<endl;
    }
    };
class result:public  info
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
