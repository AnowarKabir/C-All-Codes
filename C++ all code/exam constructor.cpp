#include<iostream>
using namespace std;
class A{
      int a,b;
public:
      int area();
      A(int c,int d);
      ~A();
};
int A::area(){return a*b;}
A::A(int c,int d){
      a=c;b=d;
      cout<<"Constructor"<<endl;}
A::~A(){cout<<"Destructor"<<endl;}
main()
{
      A obj(5,6);
      cout<<obj.area()<<endl;

}
