#include<iostream>
using namespace std;
class complex{
    private:
    friend complex addnumbers(complex n1 , complex n2);
     float real;
     float imag;
     public:
     complex(){
        real = 0;
        imag=0;
     }
     complex(float r, float i)
     {
        real=r;
        imag= i;
     }
     void setdata(){
       cout<<" enter the real and imag part of complex number"<<endl;
       cin>>real>>imag;
     }
void getdata()
{
    cout<<"the rquired complex number is "<<real<<"+"<<imag<<"i";
}

};
complex addnumbers(complex n1 , complex n2){
    complex temp;
    temp.real=n1.real+n2.real;
    temp.imag=n1.imag+n2.imag;
    return temp;
}
int main()
{
complex n1 , n2, n3;
n1.setdata();
n2.setdata();
n3=addnumbers(n1,n2);
n3.getdata();
return 0;
}