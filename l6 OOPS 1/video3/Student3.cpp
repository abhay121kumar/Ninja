#include<iostream>
using namespace std;
class Student
{
    public:
    int age;
    int rollNum;
    char name;

    void display()
    {
        cout<<"in class age & rollNo "<<age<<" "<<rollNum;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }
};