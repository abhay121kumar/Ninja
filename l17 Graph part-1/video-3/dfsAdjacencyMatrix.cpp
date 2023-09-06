#include<iostream>
using namespace std;

void print(int** edges,int n,int sv,bool* visited){
    //starting vertix
    cout<<sv<<endl;
    visited[sv] = true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            print(edges,n,i,visited);
        }
    }
}

int main(){
    int n;//no. of vertices
    int e;//no. of edges
    cin>>n>>e;
    //To store all the edges we need to create this 2d array
    int ** edges =  new int*[n];//dynamic 2-d array
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;//initialise we put all 0 means there is no edge i in 2d array
        }
    }
    //we take input edges from user 
    for(int i=0;i<e;i++){
        int fv,sv;//first vertex,second,vertex
        cin>>fv>>sv;
        edges[fv][sv] = 1;
        edges[sv][fv] = 1;
    }
    //from there our 2-d matrix ready

    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }

    print(edges,n,0,visited);
    //delete all the memory //h.w  
    return 0;
}