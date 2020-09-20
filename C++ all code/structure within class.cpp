#include<iostream>
#define PI 3.1416
using namespace std;
struct geometry
{
    int height,width;
    float v,u;
    double radious;
};
class myclass
{
public:
    geometry g;
    int getarea_rect();
    float getarea_tri();
    double getarea_cir();
};
int myclass::getarea_rect()
{
    return g.height*g.width;
}
float myclass::getarea_tri()
{
    return .5*g.v*g.u;
}
double myclass::getarea_cir()
{
    return PI*g.radious*g.radious;
}
main()
{
    myclass my;
    cout<<"rectangle"<<endl;
    cin>>my.g.height>>my.g.width;
    cout<<my.getarea_rect()<<endl;
    cout<<"Triangle"<<endl;
    cin>>my.g.v>>my.g.u;
    cout<<my.getarea_tri()<<endl;
    cout<<"Circle"<<endl;
    cin>>my.g.radious;
    cout<<my.getarea_cir()<<endl;
}
