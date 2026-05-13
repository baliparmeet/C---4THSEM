#include<iostream>
#include<string>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    void setdata(string n, int a){
        name=n;
        age=a;
    }
    void getData(){
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
        return ;
    }
};
int main()
{

    student s1; 
    string name;
    int age; 
    cout<<"enter name and age of student";
    cin>>name>>age;
    cout<<"the information of the student is:"<<endl;
    s1.setdata(name,age);
    s1.getData();
       return 0 ;
}