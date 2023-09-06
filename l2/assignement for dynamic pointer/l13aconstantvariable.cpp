#include<iostream>
using namespace std;
int main()
{
    // constant integer
    const int i = 10;
    // i =12; // u can do like that becz u declare i as const
    int const j = 12;// you can declare const keyword like that
    
    // constant reference from a non constant int
    int k = 13;
    const int &a = k;
    k++;
    //a++;// u can not do this bcoz of refernce of k is const declare 
    cout<<a<<endl;

    //constant reference from a constant int
    int const j1 = 20;
    int const &k2 = j1;

    // reference from a constant int
    int const j3 = 20;
    int &k3 = j3;
    k3++;
}