// class Student
// {
//     public:
//     int rollNumber;
//     int age;

//     static int totalNumber;

//     Student()
//     {
//         totalNumber++;
//     }
// };
class Student
{
    static int totalNumber;
    public:
    int rollNumber;
    int age;


    Student()
    {
        totalNumber++;
    }

    static int gettotalNumber() // class
    {
        return totalNumber;
    }
};

// int Student ::totalNumber = 1; // initilize static data member  
int Student ::totalNumber = 0; // initilize static data member  