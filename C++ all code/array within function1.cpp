#include<iostream>
using namespace std;
int  *abc(int a[],int n)
{
      int i;
      for(i=0;i<n;i++)
      {
            a[i]=i;
      }
      return a;
}
main()
{
      int value[10],*p,i;
      p=abc(value,10);
      for(i=0;i<10;i++)
      {
         cout<<*p<<endl;
         p++;
      }
}
