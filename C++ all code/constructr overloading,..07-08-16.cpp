#include<bits/stdc++.h>
using namespace std;
class sum
{
     int a;
public:
    sum(int x,int y)
    {
        a=x+y;
    }
    sum(int x,int y,int z)
    {
        a=x+y+z;
    }
    int ret()
    {
        return a;
    }
};
main()
{
    sum ob1(1,2),ob2(1,2,3);
    cout<<ob1.ret()<<endl;
    cout<<ob2.ret()<<endl;
}
