#include <iostream>

using namespace std;


class Complex
{
    float real ;
    float imag ;

public :

    void setReal (float ) ;
    void setImag (float ) ;

    float getReal ;
    float getImag ;

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


Complex Complex::add(Complex c)
{
    Complex temp;
    temp.setReal(real + Complex.getReal());
    temp.setImg(img + Complex.getImg());

    return temp ;
}

Complex Complex::sub(Complex c)
{
    Complex temp;
    temp.setReal(real - Complex.getReal());
    temp.setImg(img - Complex.getImg());

    return temp ;
}



void Complex::print()
{
    if (imag<0)
    {
        cout<<real<<"-"<<fabs(imag)<<"i"<<endl;
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

    cout<<"int real and imag "<<endl;
    cin>>real>>imag;

    myComp1.setReal(real);
    myComp1.setImag(imag);

    cout<<"int real and imag "<<endl;
    cin>>real>>imag;

    myComp2.setReal(real);
    myComp2.setImag(imag);

    resultComp = myComp1.add(myComp2);
    resultComp.print();

    resultComp = myComp1.sub(myComp2);
    resultComp.print();

    return 0;
}
