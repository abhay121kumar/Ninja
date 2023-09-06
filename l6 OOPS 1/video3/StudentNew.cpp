#include<iostream>
using namespace std;
#include "student33.cpp"

int main()
{
    Student s1;
    Student *s2 = new Student;

    cout<<"using getAge function "<<s1.getAge()<<endl;

    s1.setAge(20,123);
    // (*s2).setAge(30);
    s2->setAge(40,123);
    
    s1.display();

    cout<<endl;

    s2->display();

    cout<<endl;
    return 0;
}