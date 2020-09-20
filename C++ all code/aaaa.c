#include<stdio.h>
#include<math.h>
fact(int n ) ;/*factorial function*/
func(float n ) ;/*USDF to evaluate equation */
void main()
{
float x , num  ;
printf("Enter a number :-  ");
scanf("%f",&x);
func(x);

}
func(float n ){
int  i , j , sine ;
float fx = 0;
for(i=1 , j = 1; i<=3; i++ ,j+=2)
    {
if(i%2==0)
sine = -1  ;
else
sine = 1 ;
fx = fx + (pow(n,j)/fact(j))* sine ;
    }
printf("f(%.0f) = %.3f \n",n,fx);
}
fact(int n )
{
int i , holder = 1  ;
if(n==0)
    {
return 1  ;
    }
else
    {
for(i=n; i>0; i--)
        {
holder*=i ;
        }
return holder ;
    }
}

