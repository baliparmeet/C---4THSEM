#include<iostream>
using namespace std;
class number{
    public:
    float x;
    float y;
    float add()
    {
        return x+y;
    };
};


int main()
{
    number p;
    cout<<"enter two numbers";
    cin>> p.x >> p.y;
    float result =p.add();
    cout<<"sum is:"<<result<<endl;
       return 0 ;
}