#include<iostream>
using namespace std;
#include <fstream>
class Student
{
    public:
    void rollNumber()
    {
        cout<<"inside Student class rollNumber"<<endl;
    }

    void age()
    {
        cout<<"inside student clas in age funtion"<<endl;
    }
};

class Employee : Student
{
    public:
    virtual void rollNumber()
    {
        cout<<"inside Employee class rollNumber"<<endl;
    }

    void age()
    {
        cout<<"inside Employee clas in age funtion"<<endl;
    }
};

int main()
{
    Student s1;
    Employee e1;
    s1.rollNumber();
    e1.rollNumber();
    Student* s2;
    Employee e2;
    // s2 = &e2;
    return 0;
}