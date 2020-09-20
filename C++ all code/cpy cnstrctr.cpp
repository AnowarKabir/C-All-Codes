#include<iostream>
using namespace std;
class myclass
{
public:
    int a,b;
    myclass(int m,int n)
    {
        a=m;
        b=n;
    }
    void display()
    {
        cout<<"Value is: "<<a<<" "<<b<<endl;
    }

};
main()
{
    myclass ob1(10,20);
    myclass ob2=ob1;
//    ob2=ob1;
    ob1.display();
    ob2.display();
}
