class Student
{
    public:
    int age;
    const int rollNumber;
    int &x; // age reference variable

    // Student(int a) : rollNumber(a) // initilization list
    // {

    // }

    // Student(int a,int b) : rollNumber(a),age(b)
    // {

    // }

    Student(int a,int age) : rollNumber(a),age(age),x(this->age) // no confusion between age(age)-> outside age tell about the this->age and inside age tell about the argument we pass that name
    {

    }
};