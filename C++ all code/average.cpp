#include<iostream>
using namespace std;
int  GetAverage(int a[],int n)
{
      int i,sum=0;
      for(i=0;i<n;i++)
      {
            sum=sum+a[i];
      }
      return (sum)/n;
}
main()
{
      int value[5],av,i;
      for(i=0;i<5;i++)
      cin>>value[i];
      av=GetAverage(value,5);
      cout<<"average="<<av<<endl;

}
