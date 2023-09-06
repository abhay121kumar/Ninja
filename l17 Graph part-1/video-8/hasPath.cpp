/*
@csalgo

Coding Problem
Problem Statement: Has Path 
Problem Level: MEDIUM
Problem Description:
Given an undirected graph G(V, E) and two vertices v1 and v2(as integers), check if there exists any path between them or not. 
Print true or false.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next E lines : Two integers a and b, denoting that there exists an edge between vertex a and vertex b (separated by space)
Line (E+2) : Two integers v1 and v2 (separated by space)

Output Format :
true or false

Constraints :
2 <= V <= 1000
1 <= E <= 1000
0 <= v1, v2 <= V-1

Sample Input 1 :
4 4
0 1
0 3
1 2
2 3
1 3

Sample Output 1 :
true

Sample Input 2 :
6 3
5 3
0 1
3 4
0 3

Sample Output 2 :
false

@csalgo
*/

#include<iostream>
using namespace std;

// by dfs
/*

bool print(int** edges,int n,int sv,int ev,bool* visited){
    //starting vertix
    // cout<<sv<<endl;
    bool flag = false;
    visited[sv] = true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            if(edges[sv][ev]==1){
                flag = true;
                return flag;
            }
            flag = print(edges,n,i,ev,visited);
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

    int sv,ev;
    cout<<"enter sv vertix"<<endl;
    cin>>sv;
    cout<<"enter en vertix"<<endl;
    cin>>ev;
    cout<<print(edges,n,0,ev,visited)<<endl;
    //delete all the memory //h.w  
    return 0;
}

*/

// write code

#include<iostream>
using namespace std;
#include<queue>

bool printBFS(int** edges,int v,int sv,int ev){
    bool *visited = new bool[v];
    bool flag = false;
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    queue<int> pendingVertiex;
    pendingVertiex.push(sv);
    visited[sv] = true;
    while(!pendingVertiex.empty()){
       int front = pendingVertiex.front();
       pendingVertiex.pop();
    //    cout<<front<<endl;
       for(int i=0;i<v;i++){
        if(i==front){
            continue;
        }
        if(edges[front][i]==1 && !visited[i]){
            if(edges[front][ev]==1){
                flag = true;
                return flag;
            }
            pendingVertiex.push(i);
            visited[i] = true;
        }
       }
    }
    delete[] visited;
    return flag;
}

int main(){
    int v;
    int e;
    cin>>v>>e;

    int* *edges = new int*[v];
    for(int i=0;i<v;i++){
        edges[i] = new int[v];
        for(int j=0;j<v;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int fv,sv;
        cin>>fv>>sv;
        edges[fv][sv] = 1;
        edges[sv][fv] = 1;
    }
    int sv;
    cout<<"enter sv"<<endl;
    cin>>sv;
    int ev;
    cout<<"enter ev"<<endl;
    cin>>ev;
    cout<<printBFS(edges,v,sv,ev)<<endl;;
    return 0;
}

/*

7
7
0 1
0 2
1 5
2 3
2 6
5 4
4 3
*/