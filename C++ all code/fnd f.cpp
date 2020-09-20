#include<iostream>
using namespace std;
class employee{

public:

friend void salary();
};
void salary (){
      int sal=800000;
cout<<"salary="<<sal<<endl;
}
main()
{
      employee e;
     salary();
}
