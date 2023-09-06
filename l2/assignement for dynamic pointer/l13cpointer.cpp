#include<iostream>
using namespace std;
int main()
{
    int i = 10;
    int j = 12;

    int const *p = &i;
    p = &j;
    (*p)++;// error

    int* const p2 = &i;
    p2 = &j; // error 
    (*p2)++;

    int const * const p3 = &i; // p3 ve constant hai or jisko point kar raha hai wo ve const hai
    (*p3)++;//error
    p3 = &j;//error
}