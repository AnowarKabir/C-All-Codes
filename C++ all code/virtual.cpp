#include<iostream>
using namespace std;
class base
{
public:
      void print(){
      cout<<"base"<<endl;}

};
class derive:public base
{
public:
      void print(){
      cout<<"derive"<<endl;}
};
main()
{
      base bob;
      derive dob;
      base *ptr;
     ptr=&bob;
      ptr->print();
}
