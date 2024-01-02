#include <iostream>
using namespace std;


/*
bool sorted_Array(int arr[], int size)
{
    if(size==0 || size==1) // base case
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }

    bool smallerSorted_array = sorted_Array(arr+1,size-1);
    return smallerSorted_array;
}

int main()
{
    int size;
    cout<<"Enter the size of the arrya"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    cout<<sorted_Array(arr,size)<<endl;
    return 0;
}

*/

//                              Method-2


bool issorted_Array(int arr[], int size)
{
    if(size==0 || size==1) // base case
    {
        return true;
    }

    bool issmallerSorted_array = issorted_Array(arr+1,size-1);

    if(!issmallerSorted_array)
    {
        return false;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }else
    {
        return true;
    }

    return issmallerSorted_array;
}



int main()
{
    int size;
    cout<<"Enter the size of the arrya"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<size;i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    cout<<issorted_Array(arr,size)<<endl;
    return 0;
}