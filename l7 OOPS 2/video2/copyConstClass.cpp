#include<iostream>
using namespace std;
#include<cstring>


class Student
{
    int age;
    public:
    char *name;

    Student(int age,char *name)
    {
        this->age = age;
        this->name = new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    // copy constructor
    // Student(Student s)// give error infinte loop gone
    // Student(Student &s)// give error illegal addition can be done, changes can be done
    Student(Student const &s)
    {
        this->age=s.age;
        // this->name = s.name;// shallow copy we have to avoid
        //deep copy
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
    void display()
    {
        cout<<age<<" "<<name<<endl;
    }
};

