#include<iostream>
#define pi 3.1416
using namespace std;
struct geometry
{
    int height;
    int width;
    double h,b;
    float redius;
};
class myclass
{
    public:

          geometry g;
          int getarea_rect();
          double getarea_tri();
          float getarea_circle();
};
   int myclass::getarea_rect()
    {
        return g.height*g.width;
    }
  double myclass::getarea_tri()
   {
       return 0.5*g.b*g.h;
   }
  float myclass::getarea_circle()
    {
        return (float)pi*g.redius*g.redius;
    }

int main()
{
    myclass my;
    cout<<"Enter hight and width"<<endl;
    cin>>my.g.height;
    cin>>my.g.width;
     cout<<my.getarea_rect()<<endl;

    cout<<"Enter triangle value"<<endl;
    cin>>my.g.b;
    cin>>my.g.h;
    cout<<my.getarea_tri()<<endl;
cout<<"enter value of radious"<<endl;
   cin>> my.g.redius;
   cout<<my.getarea_circle()<<endl;

    return 0;
}


