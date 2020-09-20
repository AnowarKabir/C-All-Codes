#include<iostream>
using namespace std;


class info{
int x;
public:
      int get(){cin>>x;cout<<x;}
};

class derive:public info
{
public:
      int set()
      {
           get();
      }


};


int main()
{
      derive ob;
      ob.set();
}
