#include<iostream>
using namespace std;
class sum;

class mul{
private:
      int value;
public:
      void setvalue(int m){value=m;}
      int multiplication(sum B);
};

class sum{
private:
      int first;
      int second;
public:
      void set(int a,int b){first=a;second=b;}
      int summation(){return (first+second);
      }
      friend int mul::multiplication(sum B);
};
int mul::multiplication(sum B)
{
      return value*(B.first+B.second);
}



main()
{
      sum A;
      A.set(5,5);
      mul C;
      C.setvalue(10);
      cout<<A.summation()<<endl;
      cout<<C.multiplication(A)<<endl;
}

