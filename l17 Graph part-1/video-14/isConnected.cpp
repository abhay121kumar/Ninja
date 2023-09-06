/*
@csalgo

Coding Problem
Problem Statement: Is Connected ?
Problem Level: MEDIUM
Problem Description:
Given an undirected graph G(V,E), check if the graph G is connected graph or not.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b', denoting that there exists an edge between Vertex 'a' and Vertex 'b'.

Output Format :
"true" or "false"

Constraints :
2 <= V <= 1000
1 <= E <= 1000

Sample Input 1:
4 4
0 1
0 3
1 2
2 3

Sample Output 1:
true

Sample Input 2:
4 3
0 1
1 3 
0 3

Sample Output 2:
false

Sample Output 2 Explanation
The graph is not connected, even though vertices 0,1 and 3 are connected to each other but there isn’t any path from
 vertices 0,1,3 to vertex 2.

@csalgo
*/
#include<iostream>
using namespace std;

bool printDFS(int** edges,int n,int sv,bool* visited){

    bool flag = false;
    visited[sv] = true;
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1 && !visited[i]){
            // flag = true;
            flag = printDFS(edges,n,i,visited);
        }
    }
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            flag = true;
        }else{
            flag = false;
            return flag;
        }
    }
    return flag;
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

    cout<<printDFS(edges,n,0,visited)<<endl;
    //delete all the memory //h.w  
    return 0;
}

/*

9 5
0 1
0 6
1 6
1 3
7 8


*/