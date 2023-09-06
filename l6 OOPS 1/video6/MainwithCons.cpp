#include<iostream>
using namespace std;
#include "classPlayWithCon.cpp"


int main()
{
    Student s1; // con1 called
    
    Student s2(10); // con2 called
    
    Student s3(20,200);// con3 called
    
    Student s4(s3);// copy cons called
    
    s1 = s3; // copy assignment operator , no constructor called
    
    Student s5 = s4;// copy const called

    return 0;
}