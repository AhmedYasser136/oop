#include <iostream>

using namespace std;


class Complex
{
    float real ;
    float imag ;

public :

    void setReal (float ) ;
    void setImag (float ) ;

    float getReal() ;
    float getImag() ;

    Complex add( Complex c);
    Complex sub( Complex c);

    void print()  ;
};

void Complex::setImag(float i)
{
    imag = i ;
}

void Complex::setReal(float r)
{
    real = r;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImag()
{
    return imag;
}

Complex Complex::add (Complex c2){
    Complex temp;
    temp.setReal(real + c2.getReal());
    temp.setImag(imag + c2.getImag());
    return temp;
}

Complex Complex::sub (Complex c2){
    Complex temp;
    temp.setReal(real - c2.getReal());
    temp.setImag(imag - c2.getImag());
    return temp;
}





void Complex::print()
{
    if (imag<0)
    {
        cout<<real<<"-"<<(imag)<<"i"<<endl;
    }
    else
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
}

int main()
{
    float real , imag ;
    Complex myComp1, myComp2, resultComp ;

    cout<<"int real and imag num 1 "<<endl;
    cin>>real>>imag;

    myComp1.setReal(real);
    myComp1.setImag(imag);

    cout<<"int real and imag num 2"<<endl;
    cin>>real>>imag;

    myComp2.setReal(real);
    myComp2.setImag(imag);

    resultComp = myComp1.add(myComp2);
    resultComp.print();

    resultComp = myComp1.sub(myComp2);
    resultComp.print();

    return 0;
}
