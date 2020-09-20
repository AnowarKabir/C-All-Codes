#include<iostream>
using namespace std;
int swap (int *x,int *y)
{
      int t;
      t=*x;
      *x=*y;
      *y=t;
}
main()
{
      int a=10;
      int b=20;
cout<<"before swap...a="<<a<<" b="<<b<<endl;
swap(&a,&b);
cout<<"After swap....a="<<a<<" b="<<b<<endl;
}
