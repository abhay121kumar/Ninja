/*
@csalgo

Coding Problem
Problem Statement: BFS Traversal
Problem Level: MEDIUM
Problem Description:
Given an undirected and disconnected graph G(V, E), print its BFS traversal.
Here you need to consider that you need to print BFS path starting from vertex 0 only.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Note : 1. Take graph input in the adjacency matrix.
2. Handle for Disconnected Graphs as well
Input Format :
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b', denoting that there exists an edge between Vertex 'a' and Vertex 'b'.

Output Format :
BFS Traversal (separated by space)

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
0 1 3 2

@csalgo
*/

#include<iostream>
using namespace std;
#include<queue>

void printBFS(int** edges,int v,int sv){
    bool *visited = new bool[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    queue<int> pendingVertiex;
    pendingVertiex.push(sv);
    visited[sv] = true;
    while(!pendingVertiex.empty()){
       int front = pendingVertiex.front();
       pendingVertiex.pop();
       cout<<front<<endl;
       for(int i=0;i<v;i++){
        if(i==front){
            continue;
        }
        if(edges[front][i]==1 && !visited[i]){
            pendingVertiex.push(i);
            visited[i] = true;
        }
       }
    }
    delete[] visited;
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

    printBFS(edges,v,0);
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