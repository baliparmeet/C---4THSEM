#include<iostream>
using namespace std;

class complex {
public:
    float real;
    float imag;
    
};
int main()
{
    complex n1,n2,sum;
    cout<<"enter the real and imaginary part of the first complex number: "<<endl;
    cin>>n1.real>>n1.imag;
    cout<<"enter the real and imaginary part of the second complex number: "<<endl;
    cin>>n2.real>>n2.imag;
    sum.real=n1.real+n2.real;
    sum.imag=n1.imag+n2.imag;
    cout<<"sum is "<<sum.real<<" + "<<sum.imag<<"i"<<endl;
    return 0;
}

