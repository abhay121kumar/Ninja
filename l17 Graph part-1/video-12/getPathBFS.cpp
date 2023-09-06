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
#include<vector>
#include<map>


vector<int> printBFS(int** edges,int v,int sv,int ev){
    bool *visited = new bool[v];
    vector<int> arr;
    map<int,int> ourMap;
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    queue<int> pendingVertiex;
    pendingVertiex.push(sv);
    visited[sv] = true;
    while(!pendingVertiex.empty()){
       int front = pendingVertiex.front();
       pendingVertiex.pop();
       for(int i=0;i<v;i++){
        if(i==front){
            continue;
        }
        if(edges[front][i]==1 && !visited[i]){
            ourMap[i] = front;
            pendingVertiex.push(i);
            visited[i] = true;
            if(edges[front][ev]==1){
                break;
            }
        }
       }
    }
    map<int,int> :: iterator it1 =  ourMap.begin();
    // arr.push_back(sv);
    // int oldev = ev;
    // while(it1 != ourMap.end()){
    //     // cout<<"hello"<<endl;
    //     if(it1->first==ev){
    //         arr.push_back(it1->second);
    //         ev = it1->second;
    //     }
    //     cout<<it1->first<<" "<<it1->second<<endl;
    //     it1++;
    // }
    for(auto x:ourMap){
        if(x.first==ev){
            arr.push_back(x.second);
            ev = x.second;
        cout<<x.first<<" "<<x.second<<endl;
        }
    }
    // arr.push_back(oldev);
    delete[] visited;
    return arr;
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

    int sv,ev;
    cout<<"enter sv"<<endl;
    cin>>sv;
    cout<<"enter ev"<<endl;
    cin>>ev;
    vector<int> ans = printBFS(edges,v,sv,ev);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}

/*

Sample Input 1 :
4 4
0 1
0 3
1 2
2 3
1 3

Sample Output 1 :
3 0 1
*/