#include<stdio.h>
main()
{
      float a,c,b,d;
      printf("Enter the value of fst parallel arm,second parrallel arm and height\n");
      scanf("%f %f %f",&a,&b,&c);
      d=.5*c*(a+b);
      printf("%.3f\n",d);
}
