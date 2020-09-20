#include <iostream>
using namespace std;
// int i=1;int j=2;
class increment
{

    public:
int i;int j;int k;
      increment operator ^(increment in) {k= i^j; }

       void Display() { cout<<"i="<<k<<endl; }
};
main()
{
    increment obj,ob;
    cin>>obj.i;
    cin>>obj.j;
   ob= obj.i^obj.j;
    obj.Display();
}
