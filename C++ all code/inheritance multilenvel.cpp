#include<bits/stdc++.h>
using namespace std;
class info
{
    int id;
public:
    void getid(){cin>>id;cout<<id<<endl;}
};
class result:public info{
int mark;
public:
    void getmark(){cin>>mark;cout<<mark;}
};
class student:public result
{
public:
    void print(){getid();getmark();}
};
main()
{
    student ob;
    ob.print();
}
