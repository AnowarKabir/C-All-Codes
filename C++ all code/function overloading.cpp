#include<iostream>
using namespace std;
class functionoverloading{
    public:
int sum(int a,int b){
return a+b;
}
int sum(int a,int b,int c){
return a+b+c;
}
string sum(string a,string b){
    {
        return a+b;
    }
return a+b;
}
double sum(double a,double b){
return a+b;
}
};
main()
{
    functionoverloading obj1,obj2,obj3,obj4;
     cout<< obj1.sum("Anowar"," Kabir")<<endl;
     cout<<obj2.sum(5,5)<<endl;
     cout<<obj3.sum(5,5,5)<<endl;
     cout<<obj4.sum(5.5,5.0)<<endl;
}
