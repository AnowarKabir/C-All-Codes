#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    int height,width;
public:

    rectangle (int ,int);
    ~rectangle();
    int area()
    {
       return height*width;

    }
};
rectangle::rectangle(int h,int w)
{
    cout<<"Constructor"<<endl;
    height=h;
    width=w;
}
rectangle::~rectangle()
{
    cout<<"Destructor"<<endl;
}
main()
{
    rectangle ob(3,4);
    cout<<"Area="<<ob.area()<<endl;
}
