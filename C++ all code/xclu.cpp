#include <iostream>
using namespace std;
class Complex
{
    private:
      int real;
      int imag;
    public:
       void input()
       {
           cout<<"Enter real and imaginary parts respectively: ";
           cin>>real>>imag;
       }
Complex operator ^(Complex temp)    /* Operator Function */
       {

           temp.real=real;
           temp.imag=imag;
           return temp;
       }
       void output(){ cout<<"Output Complex number: "<<real^imag;}


};
int main()
{
    Complex  result,ob,ob1;

    ob.input();

    ob1.input();
    result=real^image;
    result.output();
    return 0;
}

