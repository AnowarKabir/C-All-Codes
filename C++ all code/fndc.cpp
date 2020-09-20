#include<bits/stdc++.h>
using namespace std;
class element
{
    int height=10,width=20;
    friend class rectangle;
};
class rectangle
{
public:
    int area(element A)
    {
        return A.height*A.width;
    }
};
main()
{
    rectangle ob;
    element e;
    cout<<ob.area(e)<<endl;
}
