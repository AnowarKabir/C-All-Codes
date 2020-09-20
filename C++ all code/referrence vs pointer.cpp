#include<iostream>
using namespace std;
int& abc(int a){
      return a;
}

main()
{
      int *p,i=5;
      p=&i;///pointer
      int& r=i;///referrence
      cout<<"p="<<*p<<" r="<<r<<endl;
      int b;
      int *ptr=&b;
     cout<<"ptr="<<abc(7)<<endl;
     int c=9;
      int& ref=c;
      cout<<"ref="<<abc(c)<<endl;
      abc(c)=6;

}
