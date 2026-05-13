#include<iostream>
using namespace std;
class number
    {
        public:
        int x,y;
int sub()
{
    return x-y;
}

    };

int main()
{
   number p;
cout<<"enter two numbers:"<<endl;
cin>>p.x>>p.y;
int result = p.sub();
cout<<"the difference is: "<<result <<endl;
   return 0 ;   
}