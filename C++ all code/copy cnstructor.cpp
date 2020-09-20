#include<bits/stdc++.h>
using namespace std;
class RectTri
{
    public:
        int height,width;
        double vumi,uccota;
        RectTri(int,int);
        RectTri(double,double);
};
RectTri::RectTri(int h,int w)
{
    //cout<<"Enter Height And Width: "<<endl;
    cin>>h>>w;
    height=h;
    width=w;
    cout<<"Rectangle Area ="<<height*width<<endl;
}
RectTri::RectTri(double v,double u)
{
    //cout<<"Enter Vumi And uccoTa: "<<endl;
    cin>>v>>u;
    vumi=v;
    uccota=u;
    cout<<"Triangle area ="<<.5*vumi*uccota<<endl;
}
main()
{
    RectTri ob1(0,0);
    RectTri ob2(0.0,0.0);

}
