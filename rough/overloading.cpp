#include<iostream>
using namespace std;

class Student
{
    public:
    void fun()
    {
        cout<<"fun 1 function"<<endl;
    }

    void fun(int a)
    {
        cout<<"fun 2 function"<<endl;
    }

    void fun(int a,int b)
    {
        cout<<"fun 3 function"<<endl;
    }
};

int main()
{
    Student s1;
    s1.fun();
    s1.fun(20);
    s1.fun(20,40);

    return 0;
}