#include<iostream>
using namespace std;
class Student
{
    public:
    int rollNum;

    private:
    int age;

    public:
    char name;

    //default constrctor
    Student()
    {
        cout<<" Default constructor called! "<<endl;
    }
    
    // Parametrized constructor 
    // Student(int a)
    // {
    //     cout<<"Parametrized constructor called! 1 "<<endl;
    //     rollNum = a;
    // }

    Student(int rollNum)
    {
        cout<<"Parametrized constructor called! 1 "<<endl;
        this -> rollNum = rollNum; // here this keyword is compulsory so that we can easily differneciate
    }

    // Student(int b,int r)
    // {
    //     cout<<"Parametrized constructor called! 2 "<<endl;
    //     age = b;
    //     rollNum = r;
    // }
    Student(int b,int r)
    {
        cout<<"this keyword value: "<<this<<endl;
        cout<<"Parametrized constructor called! 2 "<<endl;
        // age = b;
        // rollNum = r; 
        this -> age = b; // here this keyword is optional if you want to use then no problem if you dont want yo use then also 
        this -> rollNum = r;// no problem. becoz we can easily differneciate the variable name
    }
    void display()
    {
        cout<<"in class age & rollNo "<<age<<" "<<rollNum<<endl;
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