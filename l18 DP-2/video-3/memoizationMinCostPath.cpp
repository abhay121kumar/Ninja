#include<iostream>
using namespace std;
#include<climits>//for INT_MAX

int minCostHelper(int** arr,int** input,int n,int m,int i,int j){
    //base case
    if(i==n-1 && j==m-1){
        return arr[i][j];
    }
    if(i>=n || j>=m){
        return INT_MAX;
    }

    if(input[i][j] != -1){
        return input[i][j];
    }
    //recursive call
    int x = minCostHelper(arr,input,n,m,i,j+1);
    int y = minCostHelper(arr,input,n,m,i+1,j+1);
    int z = minCostHelper(arr,input,n,m,i+1,j);

    //small claculation
    input[i][j] = min(x,min(y,z)) + arr[i][j];

    return input[i][j];
}

int minCost(int** arr,int n,int m){
    int **input = new int*[n+1];
    for(int i=0;i<n+1;i++){
        input[i] = new int[m+1];
        for(int j=0;j<m+1;j++){
            input[i][j] = -1;
        }
    }
    return minCostHelper(arr,input,n,m,0,0);
}

int main(){
    int n,m;
    cin>>n>>m;

    int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<minCost(arr,n,m)<<endl;   
    return 0;
}

/*
Sample Input 1 :
3 4
3 4 1 2
2 1 8 9
4 7 8 1

Sample Output 1 :
13

Sample Input 2 :
3 4
10 6 9 0
-23 8 9 90
-200 0 89 200

Sample Output 2 :
76

Sample Input 3 :
5 6
9 6 0 12 90 1
2 7 8 5 78 6
1 6 0 5 10 -4 
9 6 2 -10 7 4
10 -2 0 5 5 7

Sample Output 3 :
18
*/