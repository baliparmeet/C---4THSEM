#include<iostream>
using namespace std;
class B ;
class A{
private:
int x;
public:
friend class B;
void getdata()
{
    cout<<"value of x "<<x<<endl;
}
};
class B {
public:
void set (class A &obj)
{
    obj.x =10;
}
};
int main(){
     A a;
     B b;
    b.set(a);
    a.getdata();
    return 0;

}