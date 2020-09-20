#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    float real,imag;
public:
    void input()
    {
        cout<<"Enter real and imaginary part respectively.\n";
        cin>>real>>imag;
    }
    Complex operator + (Complex c1)
    {
        Complex temp;
        temp.real=real+c1.real;
        temp.imag=imag+c1.imag;
        return temp;
    }
    void output()
    {
      cout<<"The complex number is\n";
      if(imag<0)
        cout<<real<<imag<<"i"<<endl;
      else
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
main()
{
    Complex c1,c2,result;
    cout<<"enter first number:\n";
    c1.input();
     cout<<"enter second number:\n";
    c2.input();
    result=c1+c2;
    result.output();


}
