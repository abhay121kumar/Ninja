#include<iostream>
using namespace std;
#include "student.cpp"

int main()
{
    // creating object statically
    Student s1;
    Student s2;
    Student s3;
    Student s4,s5;
    cout<<"static"<<endl;
    s1.age = 10;
    // s2.name ="abhay";
    for(int i=0;i<6;i++)
    {
        cin>>s2.name;
    }
    s3.rollNum = 101;
    cout<<s1.age<<endl;
    cout<<s2.name<<endl;
    cout<<s3.rollNum<<endl;

    // creating object dynamically
    cout<<"Dyanmic"<<endl;
    Student *s6 = new Student;
    (*s6).age = 23;
    s6 -> rollNum = 100001;
    cout<<(*s6).age<<endl;
    cout<< s6->rollNum <<endl;
    return 0;
}