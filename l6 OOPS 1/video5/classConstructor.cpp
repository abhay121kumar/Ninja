#include<iostream>
using namespace std;

class Student
{
    public:
    int rollNumber;

    private:
    int age;

    public:

    ~Student()
    {
        cout<<"Destructor called! "<<endl;
    }

    Student(int a,int r)
    {
        cout<<"parametrized constructor with argument 2 "<<endl;
        this -> age = a;
        this -> rollNumber = r;
    }
    void display()
    {
        cout<<"age "<<age<<" rollNumber "<<rollNumber<<endl;
    }


};