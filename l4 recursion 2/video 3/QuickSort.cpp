/*
@csalgo

Coding Problem
Problem Statement: Quick Sort
Problem Level: MEDIUM
Problem Description:
Sort an array A using Quick Sort.
Change in the input array itself. So no need to return or print anything.
<br>
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
1 5 2 7 3

Sample Output 2 :
1 2 3 5 7

@csalgo
*/


#include<iostream>
using namespace std;

int  partition(int a[],int si,int ei)
{
    int pivote = a[si];
    int count_smaller_element=0;
    int k=si;
    while(k<=ei)
    {
        if(a[k]<pivote)
        {
            count_smaller_element+=1;
        }
        k++;
        // cout<<count_smaller_element<<endl;
    }

    int i=si;
    int j=ei;
    int c = i+count_smaller_element;
    a[i]=a[c];
    a[c]=pivote;
    while(i<c && j>c)
    {
        if(a[i]<pivote)
        {
            i++;
        }
        else if(a[j]>pivote)
        {
            j--;
        }
        else if(a[i]==pivote)
        {
            int tmp1=a[c-1];
            a[c-1] = a[i];
            a[i] = tmp1;
            i++;
        }
        else if(a[j]==pivote)
        {
            int tmp2=a[c-1];
            a[c-1] = a[j];
            a[j] = tmp2;
            j--;
        }
        else
        {
            int tmp=a[i];
            a[i] = a[j];
            a[j] = tmp;
            i++;
            j--;
        }
    }

    return c;
}
void QickSort(int a[],int si,int ei)
{
    if(si>=ei)
    {
        return;
    }

    int c = partition(a,si,ei);

    QickSort(a,si,c-1);

    QickSort(a,c+1,ei);

}
int main()
{
    int n;
    cout<<"Enter size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter element in array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    QickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}


/*
void printArray(int input[] ,  int n){
    for(int i =0; i<n; i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

void swap(int input[], int start, int pi){
    int temp = input[start];
    input[start] = input[pi];
    input[pi] = temp;
}

int partation(int input[], int start, int end){

    	int piviot = input[start], pi = start;
        for(int i = start; i<=end; i++){
            if(input[i]<=input[start] && i!=start){
                pi++;
            }
        }
    
    swap(input, start, pi);
   
    piviot = input[pi];


    int i = start, j = end;
    while (i < pi && j > pi){
        

        if(input[i] > piviot && input[j] <= piviot){
            swap(input, i , j);
            i++; 
            j--;
        }else if(input[i] > piviot && input[j] >= piviot){
            j--;
        }else{
            i++;
        }
    }
    
    return pi;
}

void quicSort(int input[], int start, int end){
    if(end - start <=0){
        return;
    }


    int pi = partation(input, start, end);
    quicSort(input, start, pi-1);
    quicSort(input, pi+1, end);
}

void quickSort(int input[], int n){
    
    quicSort(input, 0 , n-1);
}
*/