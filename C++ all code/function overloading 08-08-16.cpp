#include<bits/stdc++.h>
using namespace std;
class funoverload
{
    public:
    int sum(int a,int b)
    {
        return a+b;
    }
    int sum (int a,int b,int c)
    {
        return a+b+c;
    }
    double sum(double a,double b)
    {
        return a+b;
    }
    string sum(string a,string b)
    {
        return a+b;
    }
};


main()
{
    funoverload ob;
    cout<<ob.sum(2,3)<<endl;
    cout<<ob.sum(1,2,3)<<endl;
    cout<<ob.sum(1.0,2.4)<<endl;
    cout<<ob.sum("Anowar"," Kabir")<<endl;
}
