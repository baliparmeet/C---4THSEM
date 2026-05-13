#include<iostream>
using namespace std;
class shape
{
    private:
    float length;
    float breadth;
    public:
    shape()
    {
        length=0;
        breadth=0;
    
    }
    shape(float s)
    {
        length= s;
        
    }
    shape(float l, float b)
    {
        length =l;
        breadth=b;
    }
   void area()
    {
float a;
a=length*length;
cout<<"Area of square: "<<a<<endl;
    }
    void area(char x){
        float a;
             a=length*breadth;
        cout<<"Area of rectangle: "<<a<<endl;
    }
};
int main()
{
   shape square , rectangle;
   square=shape(25.0);
rectangle=shape(25.0,13.0);
    square.area();
    rectangle.area('r');
    return 0;
}