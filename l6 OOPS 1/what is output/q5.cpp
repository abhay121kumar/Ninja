#include<iostream>
using namespace std;
#include "q5class.cpp"

int main() {
    Student *s = new Student(); // in the class parametrized constructor given and here he call the default constructor
    s -> name = 'A'; // there it is giving error
    s -> rollNo = 15;
    s -> print();
    return 0;
}