/*
@csalgo

Coding Problem
Problem Statement: Merge Sort
Problem Level: MEDIUM
Problem Description:
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space)

Constraints :
1 <= n <= 10^3

Sample Input 1 :
6
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8

Sample Input 2 :
5
2 1 5 2 3

Sample Output 2 :
1 2 2 3 5

@csalgo
*/

#include <iostream>
using namespace std;



void merge(int arr[], int si, int mid, int ei)
{
    // int size = len(si,ei);
    int size = ei - si + 1;
    int newArr[size];
    int k = 0;
    int s1 = si;
    int e1 = mid;
    int s2 = mid + 1;
    int e2 = ei;

    while (s1 <= e1 && s2 <= e2)
    {
        if (arr[s1] > arr[s2])
        {
            newArr[k] = arr[s2];
            k++;
            s2++;
        }
        else
        {
            newArr[k] = arr[s1];
            k++;
            s1++;
        }
    }
    while (s1 <= e1)
    {
        newArr[k] = arr[s1];
        k++;
        s1++;
    }

    while (s2 <= e2)
    {
        newArr[k] = arr[s2];
        k++;
        s2++;
    }

    k = 0;
    for (int i = si; i <= ei; i++)
    {
        arr[i] = newArr[k];
        k++;
    }
}

void merge_sort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    merge_sort(arr, si, mid);
    merge_sort(arr, mid + 1, ei);
    merge(arr, si, mid, ei);
}

int main()
{
    int n;
    cout<<"enter the size of Array : ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge_sort(a, 0, n - 1);
    // len(0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}






// suraj code

/*
void merge(int input[],int lb,int mid, int ub){
    // cout<<lb<<" "<<mid<<" "<<ub<<endl;
    
    int newary[ub+1];
    
    int i, j, k=0;
    i=lb; j = mid+1;
    while(i <= mid && j <= ub){
        if(input[i] < input[j]){
            newary[k] = input[i];
            i++;
            k++;
        }else if(input[i]==input[j]){
            newary[k] = input[i];
            newary[k+1] = input[j];
            i++;
            k+=2;
            j++;
        }else{
            newary[k] = input[j];
            k++;
            j++;
        }
        
    }
    if(i<=mid){
        while(i<=mid){
            newary[k] = input[i];
            i++;
            k++;
        }
    }else{
        while(j<=ub){
            newary[k] = input[j];
            j++;
            k++;
        }
    }
    
    
    int l = lb;
    int r = 0;
    while(l<=ub){
        input[l] = newary[r];
        l++;
        r++;
    }
    
}

void MergeSort(int input[], int lb,int ub){
    if(ub-lb <=0){
        return;
    }
    
    int mid = (lb+ub)/2;
    
    MergeSort(input,lb,mid);
    MergeSort(input,mid+1,ub);
    merge(input,lb,mid,ub);
}


void mergeSort(int input[], int size){
    // Write your code here
    // if(size<=1){
    //     return;
    // }
    
    MergeSort(input,0,size-1);
}

*/