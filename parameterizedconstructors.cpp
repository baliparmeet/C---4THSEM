#include<iostream>
#include<string>
#include<cstring>
using namespace std;
class info  {
char studentname[40];
int roll;
public:
info(int rollnumber,char name[])
{
    roll=rollnumber;
    strcpy(studentname,name);
}
void setdata(int r,char name[])
{
    roll=r;
    strcpy(studentname,name);   
}
void getdata()
{
    cout<<" roll number is:"<<roll<<endl;
    cout<<" student name is:"<<studentname<<endl;
}
info()
{
    roll=0;
    strcpy(studentname,"");
}
};
int main()
{  
    cout<<"enter roll number and name of student:"<<endl;
    int rollnumber; 
    char name[40];
    cin>>rollnumber>>name;
    info i;
    i.setdata(rollnumber, name);

        i.getdata();
            return 0;
}