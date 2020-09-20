#include <iostream>
using namespace std;
class Complex
{
    private:
      float real;
      float imag;
    public:
       void input()
       {
           cout<<"Enter real and imaginary parts respectively: ";
           cin>>real>>imag;
       }
       Complex operator + (Complex c1)    /* Operator Function */
       {
           Complex temp;
           temp.real=real+c1.real;
           temp.imag=imag+c1.imag;
           return temp;
       }
       void output()
       {
              if(imag<0)
               cout<<"Output Complex number: "<<real<<imag<<"i";
           else
               cout<<"Output Complex number: "<<real<<"+"<<imag<<"i";
       }
};
int main()
{
    Complex c1, c2, result;
    cout<<"Enter first complex number:\n";
    c1.input();
    cout<<"Enter second complex number:\n";
    c2.input();
    result=c1+c2;
    result.output();
    return 0;
}
