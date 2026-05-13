#include<iostream>
using namespace std;
class gpaofsaba;//declaring this class before making it a friend.
 class gpaofparmeet{
    private:
int marks;
public :
gpaofparmeet(){
    marks =0;
}
gpaofparmeet(int m){
    marks =m;
}
void setdata()
{
    cout<<"gpa of parmeet is above:"<<8<<endl;
}
friend class gpaofsaba;


};
class gpaofsaba{
private:
int marks;
public:
gpaofsaba(){
    marks =0;
}
gpaofsaba(int m){
    marks =m;
}
void setdata()
{
    cout<<"gpa of saba is above:"<<8<<endl;
}
};
int main()
{
    gpaofparmeet P;
    gpaofsaba S;
    P.setdata();
    return 0;
}
 