#include<stdio.h>
struct abc
{
      int day;
      int month;
      int year;

};
int fun(int x,int y,int z)
{
      if(y==1)
      printf("january");

      if(y==2)
      printf("February");

      if(y==3)
      printf("march");

if(y==4)
      printf("april");

      if(y==5)
      printf("may");

      if(y==6)
      printf("june");

      if(y==7)
      printf("july");

      if(y==8)
      printf("august");

      if(y==9)
      printf("september");

      if(y==10)
      printf("october");

      if(y==11)
      printf("november");

      if(y==12)
      printf("december");

      if(x>=1&&x<=31&&y%2==1)
            printf(" %d,%d\n",x,z);


      if(z%400==0||(z%100!=0 && z%4==0)&&y==2&&x==29)
       printf(" %d %d\n",x,z);
}

main()
{
      struct abc a;
      scanf("%d %d %d",&a.day,&a.month,&a.year);
      fun(a.day,a.month,a.year);

}
