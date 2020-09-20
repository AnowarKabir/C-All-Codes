#include<iostream>
using namespace std;
class  info {
                int id;
public:
                void getid(){cin>>id;cout<<id<<endl;}
};
class student:  public info{
         int mark;
public:
         void getmark(){cin>>mark;cout<<mark<<endl;}
};
class result:public student{
public:
         void print(){getid();getmark();}
         };
main()
{
         result ob;
         ob.print();
}
