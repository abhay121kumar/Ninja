#include<iostream>
using namespace std;

class Student
{
    public:
    int rollNumber;

    private:
    int age;

    public:

    Student()
    {
        cout<<"constructor called 1: "<<endl;
    }
    Student(int rollNumber)
    {
        cout<<"constructor called 2: "<<endl;
        this -> rollNumber = rollNumber;
    }
    Student(int a,int r)
    {
        cout<<"constructor called 3: "<<endl;
        age = a;
        rollNumber = r;
    }

};