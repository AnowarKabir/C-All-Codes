#include<iostream>
using namespace std;
int *abc(int a[],int n)
{
    int i;
    for(i=0;i<=10;i++)
    {
        a[i]=i;
    }
    return a;
}
main()
{
    int array[10],*p,i;
    p=abc(array,10);
    for(i=0;i<=10;i++)
    {
        cout<<*p<<endl;
        p++;
    }
}
