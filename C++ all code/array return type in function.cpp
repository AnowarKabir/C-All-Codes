#include<iostream>
#include<cstdio>
using namespace std;
int getv(int a[],int n)
{
      int i;
      for(i=0;i<n;i++)
            a[i]=i;
            return a[i];
}
main()
{
      int a1[10],j;
      int *p;
      p=getv(a1,5);
      for(j=0;j<5;j++)
            printf("%d\n",j);
}
