#include<iostream>
using namespace std;
#include "classConstructor.cpp"

int main()
{
    /*
    Student s1(10,1001);
    cout<<"s1 data: ";
    s1.display();
    cout<<endl;

    Student s2(s1);
    cout<<"s2 data: ";
    s2.display();

    cout<<endl;
    cout<<"****************************dyanmically*********************************"<<endl;

    Student *s3 = new Student(20,2002);
    cout<<"s3 data: ";
    s3 -> display();

    Student s4(*s3);
    cout<<"s4 data: ";  
    s4.display();
    cout<<endl;
    
    Student *s5 = new Student(*s3);
    cout<<"s5 data: ";
    s5 ->display();
    Student *s6 = new Student(s1);
    cout<<"s6 data: ";
    s6 ->display();

    //output
    // parametrized constructor with argument 2 
    // s1 data: age 10 rollNumber 1001

    // s2 data: age 10 rollNumber 1001

    // ****************************dyanmically*********************************
    // parametrized constructor with argument 2 
    // s3 data: age 20 rollNumber 2002
    // s4 data: age 20 rollNumber 2002

    // s5 data: age 20 rollNumber 2002
    // s6 data: age 10 rollNumber 1001
    */



    Student s1(12,1111);
    Student s2(99,000);

    Student *s3 = new Student(1,2);

    s2 = s1;

    *s3 = s1;

    s2 = *s3;

    // parametrized constructor with argument 2 
    // parametrized constructor with argument 2 
    // parametrized constructor with argument 2 
    // Destructor called! 
    // Destructor called!

    delete s3;

    // parametrized constructor with argument 2 
    // parametrized constructor with argument 2 
    // parametrized constructor with argument 2 
    // Destructor called! 
    // Destructor called! 
    // Destructor called! 

    /*
    
    Student *s3 = new Student(66,777);
    cout<<"before copying"<<endl;
    cout<<"s1: ";
    s1.display();
    cout<<"s2: ";
    s2.display();
    cout<<"s3: ";
    s3->display();
    cout<<"After copying: "<<endl;
    s2 = s1;
    cout<<"s1: ";
    s1.display();
    cout<<"s2: ";
    s2.display();
    *s3 = s1;
    cout<<"s1: ";
    s1.display();
    cout<<"s3: ";
    (*s3).display();
    s2 = *s3;
    cout<<"s2: ";
    s2.display();
    cout<<"s3: ";
    (*s3).display();
    cout<<endl;
    */
    
    return 0;
}