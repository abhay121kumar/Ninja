#include<iostream>
using namespace std;
#include "classStatic.cpp"

int main()
{
    /*
    Student s1;
    cout<<s1.rollNumber<<" "<<s1.age<<endl;

    cout<<s1.totalNumber<<endl; // logically incorrect
    s1.totalNumber = 20;
    Student s2;
    cout<<s2.totalNumber<<endl;
    cout<<Student::totalNumber<<endl;// that is the correct way to call a static property
    */

//    Student s1;
//    Student s2;
//    Student s3,s4,s5;
//    cout<<Student::totalNumber<<endl;


   Student s1;
   Student s2;
   Student s3,s4,s5;
   cout<<Student::gettotalNumber()<<endl;
    return 0;
}