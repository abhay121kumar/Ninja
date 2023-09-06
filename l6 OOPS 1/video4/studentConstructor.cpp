#include<iostream>
using namespace std;
#include "studentclass.cpp"

int main()
{
    /*
    Student s1;
    s1.display();
    Student s2;
    // s2.display();

    Student *s3 = new Student();
    s3->display();
    Student *s4 = new Student();
    (*s4).display();
    cout<<endl;
    //output
//    Default constructor called! 
//     in class age & rollNo 0 0
//     Default constructor called! 
//     Default constructor called! 
//     in class age & rollNo 0 0
//     Default constructor called! 
//     in class age & rollNo 0 0
    cout<<"Paramterized constructor demo "<<endl;
    Student s5; // object of default constructor created;
    Student s6(30);// object of Parametrized constructor created
    cout<<endl;
    s6.display(); //in class age & rollNo 0 30  
    cout<<endl;

    Student *s7 = new Student(1001);
    s7 -> display();
    cout<<endl;

    Student s8(12,600);
    s8.display();

    Student *s9 = new Student(13,102992);
    s9 -> display();
    cout<<endl;
    */


    Student s1(10,22202);
    cout<<"Address of s1: "<<&s1<<endl;
    //output
    // this keyword value: 0x7ffee139d79c
    // Parametrized constructor called! 2 
    // Address of s1: 0x7ffee139d79c

    Student s2(30);
    s2.display();
    cout<<endl;
    return 0;
}