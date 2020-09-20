#include<iostream>
using namespace std;
class number{
int x,y;
number(int a,int b){
x=a;y=b;
}
void print(){cout<<x<<" "<<y<<endl;}
number operator + (number ob);
};
number number::operator + (number ob)
{
numbe temp;
temp.x=x+ob.x;
temp.y=y+ob.y;
return temp;
}
main(){
number n1(2,3),n2(5,6),n3;
n3=n1+n2;
n3.print();
}
