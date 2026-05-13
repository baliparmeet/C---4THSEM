#include<iostream>
using namespace std;
class shape{
    private:
     float length , breadth, height,radius,base ,side;
     public:
     shape()
     {
        length=0;
        breadth=0;
        height=0;
        radius=0;
        base=0;     
        side=0;
     }
      void setsquare(float s)
     {
        side=s;
     }      
     void setrectangle(float l, float b)
     {
        length=l;
        breadth=b;
     }
      void settriangle(float h, float ba )
        {
            height=h;
            base=ba;
        }
      void setcircle(float r)
        {
            radius=r;
        }

        void area()
        {
            float a;
            a=side*side;
            cout<<"Area of square: "<<a<<endl;

        }
        void area(char z)
        {
            float a;
            a=length*breadth;
            cout<<"Area of rectangle: "<<a<<endl;

        }
        void area(int y)
        {
            float a;
            a=0.5*base*height;
            cout<<"Area of triangle: "<<a<<endl;

        }
        void area(double g)
        {
            float a;
            a=3.14*radius*radius;
            cout<<"Area of circle: "<<a<<endl;

        }

};
int main()
{
    shape square , rectangle, triangle, circle;
    square.setsquare(25.0);
    rectangle.setrectangle(25.0,13.0);
    triangle.settriangle(10.0,5.0);
    circle.setcircle(7.0);
    square.area();      
    rectangle.area('r');
    triangle.area(1);
 circle.area( 3.14);
    return 0;   
}