#include<iostream>
using namespace std;
class A{
    private: 
    int num1 ;
    int num2;
    public:
    int add()
    {
        return num1+num2;
    };
    void setdata(int a, int b)
    {
        num1=a;
        num2 = b;
    };
    void getdata()
    {
        cout<<"the required sum is :"<<add()<<endl;

    };
    };
int main(){
    A obj1;
    int a, b;
    cout<<"enter first number"<<endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>>b;
    obj1.setdata(a, b);
    obj1.getdata();
    return 0;
    
}