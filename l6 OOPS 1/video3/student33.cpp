#include<iostream>
using namespace std;
class Student
{
    public:
    int rollNum;

    private:
    int age;

    public:

    void display()
    {
        cout<<"in class age & rollNo "<<age<<" "<<rollNum;
    }

    int getAge() // get function read the value
    {
        return age;
    }

    void setAge(int a,int password)// set function change,update,modify the value
    {
        if(password != 123)
        {
            return;
        }
        if(age<0)
        {
            return;
        }
        age = a;
    }
};