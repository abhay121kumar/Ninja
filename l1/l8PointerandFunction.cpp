#include<iostream>
using namespace std;
/*

***********************************part1*****************************************************************



void fun(int *p)
{
    cout<<"1st call fun"<<*p<<endl;//10
}

void incrementPointer(int *p)
{
    p = p +1;//local hai bs yahi par changes dikhe ga main me nhi changs hoga kuch ve
    //*p = *p + 1;// main me change hoga,value me changes hoga
    //cout<<*p<<endl;
    cout<<p<<endl;
}

void increment(int *p)
{
    (*p)++; // value me changes ho raha hai, value at address of *p
}

// a[5] = *(a+5)

int main()
{
    int i = 10;
    int *p = &i;
    fun(p);

    cout<<p<<endl;//0x7ffd5d48bd5c
    incrementPointer(p);
    cout<<p<<endl;//0x7ffd5d48bd5c // no change occur
    //cout<<*p<<endl;

    cout<<endl;

    cout<<*p<<endl; //10
    increment(p);
    cout<<*p<<endl; //11
    return 0;
}

*/











 /**********************************part2****************************************************/

// pointer ko function me pass kar shak te hai ya dekh rahya hai yaha par

 #include<iostream>
 using namespace std;

 int sum(int *a,    int size)// array ko pass kar shak ye hai or wo effectively pointer ki thra pass karte hain
 {
    //cout<<sizeof(a)<<endl;//8
    int ans=0;
    for(int i=0; i<size; i++)
    {
        ans += a[i];
    }
    return ans;
 }

 int main()
 {
    int a[10] = {1,2,3,4};
    //cout<<sizeof(a)<<endl;//40
    cout<<sum(a,4)<<endl;//10
    cout<<endl;
    cout<<sum(a+2,4)<<endl;//7

    return 0;
 }