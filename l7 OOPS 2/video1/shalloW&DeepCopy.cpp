#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    private:
    int age;
    char *name;

    public:

    Student(int age,char *name)
    {
        this->age=age;
        //shallow copy
        // this->name=name;

        //deep copy
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }

    void display()
    {
        cout<<age<<" "<<name<<endl;
    }
};