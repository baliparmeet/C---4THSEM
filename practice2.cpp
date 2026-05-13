#include<iostream>
using namespace std;
class A{
    public:
    int num1;
    int num2;
    int add()
    {
return num1+num2;

    };
};
int main(){
    A obj1;
    cout<<"enter first number"<< endl;
    cin>>obj1.num1;
    cout<<"enter second number"<<endl;
    cin>>obj1.num2;
    cout<<"the required sum is:"<<obj1.add()<<endl;

    return 0;
}