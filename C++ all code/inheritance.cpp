#include<iostream>
using namespace std;
class info{
      int id;
public:
      void getid(){cout<<"press id:-";cin>>id;cout<<"ID:-"<<id<<endl;}
};
class student : public info{
public:
      void print(){getid();}
};
main()
{
      student obj;
      obj.getid();
      obj.print();
}
