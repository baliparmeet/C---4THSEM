#include<iostream>
using namespace std;
class A{
    public:
    int rollno;
    int phno;


    };
    int main(){
        A a1;
        cout<<"enter the rollno and phno<< :"<<endl;
        cin>>a1.rollno>>a1.phno;
        cout<<"rollno is : "<<a1.rollno<<endl;
        cout<<"phno is : "<<a1.phno<<endl;
return 0;
    }