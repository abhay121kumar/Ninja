#include<iostream>
using namespace std;

class TA : public Teacher, public Student
{
    public:
    // string name;
    // int age;

    void print()
    {
        cout<<"TA class"<<endl;
    }
};