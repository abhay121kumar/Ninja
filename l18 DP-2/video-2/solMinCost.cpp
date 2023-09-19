#include<iostream>
using namespace std;
#include<climits>//for INT_MAX

int minCostHelper(int** arr,int n,int m,int i,int j){
    //base case
    if(i==n-1 && j==m-1){
        return arr[i][j];
    }
    if(i>=n || j>=m){
        return INT_MAX;
    }

    //recursive call
    int x = minCostHelper(arr,n,m,i,j+1);
    int y = minCostHelper(arr,n,m,i+1,j+1);
    int z = minCostHelper(arr,n,m,i+1,j);

    //small claculation
    int ans = min(x,min(y,z)) + arr[i][j];

    return ans;
}

int minCost(int** arr,int n,int m){
    return minCostHelper(arr,n,m,0,0);
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