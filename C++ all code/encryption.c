#include<stdio.h>
main(){
char ar[10],n[10];
int i,j;
for(i=0;i<4;i++)
{
      scanf("%c",&ar[i]);
}
for(i=0,j=0;i<4;i++,j++)
    {
      n[j]=ar[i]+3;
    }
for(i=0;i<4;i++)
{
      printf("%c",n[i]);
}
}
