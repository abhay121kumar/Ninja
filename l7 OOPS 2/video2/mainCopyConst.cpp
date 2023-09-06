#include<iostream>
using namespace std;
#include "copyConstClass.cpp"
int main()
{
    char name[] = "abcd";
    Student s1(20,name);
    s1.display();

    Student s2(s1);
    s2.name[0] = 'x';
    s1.display();
    s2.display();

    return 0;
}