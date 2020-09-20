#include<iostream>
using namespace std;
class increment
{
    public:
    int i=5;
    increment operator++()
{
    ++i;
}
};

main()
{
    increment ob;
    cout<<ob.i<<endl;
    ++ob;
    cout<<ob.i<<endl;
}
