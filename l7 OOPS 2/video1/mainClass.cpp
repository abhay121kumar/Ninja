#include<iostream>
using namespace std;
#include "shalloW&DeepCopy.cpp"

int main()
{
    char name[] = "abcd";
    Student s1(20,name);
    s1.display();
    name[3] ='e'; 
    Student s2(40,name);
    s2.display();

    s1.display();
    return 0;
}