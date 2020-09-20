#include<iostream>
using namespace std;
float largest(float a[],int n)
{
      int i;
      float max;
      max=a[0];
      for(i=0;i<n;i++)
      {
            if(a[i]>max)
                  max=a[i];
      }
      return max;
}
main()
{
      float value[10]={1,2,-3,5,4,7,9,-8};
      cout<<largest(value,6)<<endl;
}
