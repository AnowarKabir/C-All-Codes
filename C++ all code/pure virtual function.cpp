#include<iostream>
using namespace std;
class sound
{
public:
    virtual  void print()=0;
};
class cow:public sound
{
public:
      void print(){
      cout<<"Hambaa"<<endl;}
};
class dog:public sound
{
public:
      void print(){
      cout<<"Gheuw Gheuw"<<endl;}
};

class cat:public sound
{
public:
      void print(){
      cout<<"Meau Meau"<<endl;}
};
main()
{

      cow cowobj;
      dog dogobj;
      cat catobj;
      sound *ptr,*ptr1;
      ptr=&cowobj;
      ptr1=&dogobj;
      ptr->print();
      ptr1->print();

}
