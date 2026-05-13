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
cout<<"Enter the length of square: ";
cin>>length;
a=length*length;
cout<<"Area of square: "<<a<<endl;
    }
    void area(char x){
        float a;
        cout<<"Enter the length and breadth of rectangle: ";
        cin>>length>>breadth;
             a=length*breadth;
        cout<<"Area of rectangle: "<<a<<endl;
    }
};
int main()
{
   shape square , rectangle;
  
    square.area();
    rectangle.area('r');
    return 0;
}