#include<iostream>
using namespace std;
class over
{
    int value;
public:
    void input()
    {
        cout<<"enter value"<<endl;
        cin>>value;
    }
    over operator^(over ob)
    {
        over t;

        t.value=value^ob.value;

        return t;
    }
    void display()
    {
        cout<<"Result="<<value<<endl;
    }
};
main()
{
    over ob,ob1,result;
    ob.input();
    ob1.input();
    result=ob^ob1;
    result.display();
}
