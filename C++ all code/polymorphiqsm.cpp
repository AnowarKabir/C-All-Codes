#include<bits/stdc++.h>
using namespace std;
class polygon
{
//    protected:

public:
     int height,width;
    void setvalue(int h,int w)
    {
        height=h,width=w;
    }
};
class rectangle:public polygon
{
    public:
    int area(){
    return height*width;}
};
class triangle:public polygon
{
    public:
    int area(){
    return .5*height*width;}
};
main()
{
    polygon p;
    rectangle rect;
    triangle tri;
    polygon *ptr1,*ptr2;
    ptr1=&rect;
    ptr2=&tri;
    ptr1->setvalue(2,3);
    ptr2->setvalue(5,6);
    cout<<rect.area()<<endl;
    cout<<tri.area()<<endl;
}
