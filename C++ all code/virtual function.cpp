#include<iostream>
using namespace std;
class parent
{
public:
  virtual  void add()
      {
            cout<<"parent"<<endl;
      }
};
class child:public parent
{
      void add()
      {
       cout<<"Child"<<endl;
      }
};
main()
{
      parent a;
      child b;
      parent *s,*t;
      s=&a;
      t=&b;
      s->add();
      t->add();

}
