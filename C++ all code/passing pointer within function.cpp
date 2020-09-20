#include<iostream>
using namespace std;
int *larger(int *a,int *b)
{
if(*a>*b)
return (a);
else
      return (b);
}
main()
{
      int m=40,n=30;
      int *p;
      p=larger(&m,&n);
      cout<<*p<<endl;
}
