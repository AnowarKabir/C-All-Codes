#include<iostream>
using namespace std;
class myclass{
public:
      int height,width;
      float a,b;
      int  area(int,int);
      double area(double,double);
      //double area();
};
int  myclass::area(int h,int w){
    cin>>h>>w;
      height=h,width=w;
return height*width;
}
double myclass::area(double c,double d){
    cin>>c>>d;
      a=c;b=d;
return .5*a*b;
}
main(){
myclass my;
//cin>>my.height>>my.width;
cout<<my.area(0,0)<<endl;
cout<<my.area(0.0,0.0)<<endl;

}
