#include<iostream>
using namespace std;

class Student
{
    public:
    void rollNumber()
    {
        cout<<"12324234 at Student class"<<endl;
    }

    void age()
    {
        cout<<"10 at Student class"<<endl;
    }
};

class Employee : Student
{
    public:
    void name()
    {
        cout<<"name at Employee class"<<endl;
    }

    void marks()
    {
        cout<<"marks at Employee class"<<endl;
    }
};
