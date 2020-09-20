#include<iostream>
using namespace std;
class id{
      int id;
public:
      void getid(){cout<<"press id: ";
      cin>>id;
      cout<<"ID: "<<id<<endl;
      }
};
class mark{
      int mark;
public:
      void getmark(){cout<<"Enter mark: ";
      cin>>mark;
      cout<<"mark: "<<mark<<endl;
      }
};
class result : public id,public mark
{
public:
      int getinfo(){
      getid();
      getmark();}

};
main(){
result ob;
ob.getinfo();
}
