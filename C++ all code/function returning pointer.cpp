#include<iostream>
using namespace std;
int add(int *a,int *b)
{
      int sum;
      sum=*a+*b;
      return sum;
}
main()
{
      int x=40,y=40;
      cout<<add(&x,&y)<<endl;
}
