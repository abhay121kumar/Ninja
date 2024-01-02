#include<iostream>
using namespace std;

/*
int FindIndex(int a[], int size, int x, int i)
{
    if(size==0)
    return -1;

    if(a[i]==x)
    return i;
    //i++;

    return FindIndex(a, size-1, x, i+1);

}

int main()
{
    int size,x;
    int a[size];
    cout<<"Enter size of the array"<<endl;
    cin>>size;
    cout<<"Enter element"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter that Number you want to cheak"<<endl;
    cin>>x;
    cout<<FindIndex(a,size,x,0)<<endl;
    return 0;
}
*/


int FindIndex(int a[], int size, int x)
{
    if(size==0)
    return -1;

    if(a[0]==x)
    return 0;
    //i++;

    int smallFindIndex = FindIndex(a+1, size-1, x);
    return smallFindIndex +1;

}

int main()
{
    int size,x;
    cin>>size;
    int a[size];
    cout<<"Enter size of the array"<<endl;
    cout<<"Enter element"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter that Number you want to cheak"<<endl;
    cin>>x;
    cout<<FindIndex(a,size,x)<<endl;
    return 0;
}