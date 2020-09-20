#include<iostream>
using namespace std;
class myclass{

      int height,width;
      double a,b;
 public:

      int  area(int,int);
      double area(double,double);
       //double area();
};
int  myclass::area(int h,int w){
      height=h,width=w;
return height*width;
}
double myclass::area(double c,double d){
      a=c;b=d;
return .5*a*b;
}
main(){
myclass my;
//cin>>my.height>>my.width;
cout<<my.area(5,6)<<endl;
cout<<my.area(5.0,6.0)<<endl ;

}
