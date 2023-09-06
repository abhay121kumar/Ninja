#include<iostream>
using namespace std;

class Student
{
    private:
    int a,b;

    public:
    void rollNumber(int x,int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    Student s1;
    s1.rollNumber(20,30);
    s1.display();
    return 0;
}