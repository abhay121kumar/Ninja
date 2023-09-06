#include<iostream>
using namespace std;
#include "inheritanceClassConDon.cpp"

/*
int main()
{
    Vehicle v;
    v.color = "Blue";

    Car c;
    c.color = "Black";
    c.numGear = 5;
    return 0;
}

*/
/*
Vehicel Default Constructor --> obj1
Vehicel Default Constructor   -->obj2
Car Class Default Constructor -->obj2
Car Class Default Destructor -->obj2
Vehicel Default Destructor   -->obj2
Vehicel Default Destructor  -->obj1  
*/

/*
int main()
{
    Car c;

    return 0;
}
*/

/*
Vehicel Parametrized Constructor
Car Class Default Constructor
Car Class Default Destructor
Vehicel Default Destructor
*/


/*

int main()
{
    Car c(5);

    return 0;
}
*/

/*
Vehicel Parametrized Constructor
Car Class Default Constructor
Car Class Default Destructor
Vehicel Default Destructor
*/



/*
int main()
{
    HondaCity h;

    return 0;
}

*/

/*
Vehicel Parametrized Constructor
Car Class Parametized Constructor
HondaCity Class Default Constructor
HondaCity Class Default Destructor
Car Class Default Destructor
Vehicel Default Destructor
*/



int main()
{
    HondaCity h(2,3);

    return 0;
}

/*
Vehicel Parametrized Constructor
Car Class Parametized Constructor
HondaCity Class Parametrized Constructor
HondaCity Class Default Destructor
Car Class Default Destructor
Vehicel Default Destructor
*/