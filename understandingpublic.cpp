#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    void info(){
        cout<<"name is:"<<name<<endl;
        cout<<"age is:"<<age<<endl;
        return ;
    }
};
int main()
{

    student s1;  
    cout<<"enter name and age of student";
    cin>>s1.name>>s1.age;
    cout<<"the information of the student is:" <<endl;
    s1.info();


       return 0 ;
}