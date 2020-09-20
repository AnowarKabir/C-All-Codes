#include<iostream>
using namespace std;
class info{
      int id;
public:
      void getid(){cout<<"press id:-";//cin>>id;cout<<"ID:-"<<id<<endl;
      }
     void  setid(int a){id=a;}
};
class abc{
public:
      void set(){ cin>>id;}
};

class student : public info{
public:
      void print(){getid();}
};

main()
{
      student obj;
      abc ob;

      obj.getid();
      obj.print();
}


