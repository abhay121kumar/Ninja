#include<iostream>
using namespace std;
#include "Student3.cpp"

int main()
{
    // creating object statically
    Student s1;
    Student s2;
    Student s3;
    Student s4,s5;
    cout<<"*******************************static*********************************************************"<<endl;
    s1.age = 10;
    s1.name ='a';
    s1.rollNum = 101;
    s2.rollNum = 34465747;
    cout<<s1.age<<endl;
    cout<<s1.name<<endl;
    cout<<s1.rollNum<<endl;
    cout<<s2.rollNum<<endl;
    cout<<"getAge function "<<s1.getAge()<<endl;

    s1.display();
    cout<<endl;

    // creating object dynamically
    cout<<"********************************Dyanmic*********************************************************"<<endl;
    cout<<endl;
    Student *s6 = new Student;

    (*s6).age = 23;
    s6 -> rollNum = 100001;

    cout<<"using dyanmic age "<<(*s6).age<<endl;
    cout<<" using dynamic rollNo " <<s6->rollNum <<endl;

    (*s6).display();
    cout<<endl;
    s6->display();
    cout<<endl;
    cout<<"s6 using dynamic getAge function m-1 "<<(*s6).getAge()<<endl;
    cout<<"s6 using dynamic getAge function m-2 "<<s6 -> getAge()<<endl;
    return 0;
}