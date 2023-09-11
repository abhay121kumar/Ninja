/*
@csalgo

Coding Problem
Problem Statement: Prim's Algorithm
Problem Level: HARD
Problem Description:
Given an undirected, connected and weighted graph G(V, E) with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
Find and print the Minimum Spanning Tree (MST) using Prim's algorithm.
For printing MST follow the steps -
1. In one line, print an edge which is part of MST in the format -
v1 v2 w

where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w. And v1  <= v2 i.e. print the smaller vertex first while printing an edge.
2. Print V-1 edges in above format in different lines.
Note : Order of different edges doesn't matter.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next E lines : Three integers ei, ej and wi, denoting that there exists an edge between vertex ei and vertex ej with weight wi (separated by space)

Output Format :
MST

Constraints :
2 <= V, E <= 10^5

Sample Input 1 :
4 4
0 1 3
0 3 5
1 2 1
2 3 8

Sample Output 1 :
0 1 3
1 2 1
0 3 5

@csalgo
*/

#include<iostream>
using namespace std;
#include<vector>
// #include<algorithm>
#include<bits/stdc++.h>

// class Edges{
//     public:
//     int source;
//     int dest;
//     int weight;
// };



int findMiIndex(int *weight,bool* visited,int n){
    int minIndex = -1;
    // if(minIndex == -1){
    //     return 0;
    // }

    for(int i=0;i<n;i++){
        // if(!visited[i] && weight[i]<weight[minIndex]){
        //     minIndex = i;
        // }
        if(!visited[i] && (minIndex == -1 || weight[i]<weight[minIndex])){
            minIndex = i;
        }
    }
    return minIndex;
}
void primsAlgo(int** edges,int n,int E){

    int *parent = new int[n];
    // for(int i=0;i<n;i++){
    //     parent[i] = -1;
    // }
    parent[0] = -1;
    int *weight = new int[n];
    for(int i=0;i<n;i++){
        if(i==0){
            weight[i] = 0;
        }
        weight[i] = INT_MAX;
    }

    bool *visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }

    for(int i=0;i<n;i++){
        int minIndex = findMiIndex(weight,visited,n);
        visited[minIndex] = true;
        for(int j=0;j<n;j++){
            if(edges[minIndex][j]!=0 && !visited[j]){
                if(edges[minIndex][j] < weight[j]){
                    weight[j] = edges[minIndex][j];
                    parent[j] = minIndex;
                }
            }
        }

    }

    for(int i=1;i<n;i++){
        if(parent[i]<i){
            cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
        }else{
            cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
        }
    }
    
}
int main(){
    int n,E;
    cout<<"Enter total number of vertex and edges "<<endl;
    cin>>n>>E;

    int** edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<E;i++){
        int fv,sv,w;
        cout<<"Enter fv & sv & weight"<<endl;
        cin>>fv>>sv>>w;
        edges[fv][sv] = w;
        edges[sv][fv] = w;
    }
    cout<<endl;
    primsAlgo(edges,n,E);
    // for(int i=0;i<E;i++){
    //     int s,d,w;
    //     cout<<"Enter source,dest and Weight "<<endl;
    //     cin>>s>>d>>w;
    //     input[i].source = s;
    //     input[i].dest = d;
    //     input[i].weight = w;
    // }

    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    return 0;
}