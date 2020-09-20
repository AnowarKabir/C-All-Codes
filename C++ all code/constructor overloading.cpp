#include<iostream>
using namespace std;
class sum{
int a,b;
public:
      sum(int x,int y)
      {a=x+y;}
      sum(int x,int y,int z)
      {a=x+y+z;}
      int ret()
      {return a;}
};
main()
{
 sum obj1(5,5),obj2(5,5,5);
 cout<<obj1.ret()<<endl;
 cout<<obj2.ret()<<endl;

}
