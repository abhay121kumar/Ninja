#include<iostream>
using namespace std;
#include "TeacherClass.cpp"
#include "StudentClass.cpp"
#include "TAClass.cpp"

int main()
{
    TA a;
    // a.print(); // error because initially TA class did not contain print fun then they go to search for print fun in parent class,then
    //  print fun present on both studnet and teacher class then comipler is confused which parent class you are taling


    // a.Student :: print();


    a.print(); // no error because we created print fun in TA class so it search for print fun in TA class then after if he 
    // did not found print fun then he goes to parent function

    a.Teacher :: name = "abcd"; // error
    return 0;
}