
/*
@csalgo

Coding Problem
Problem Statement: Get Path - DFS
Problem Level: MEDIUM
Problem Description:
Given an undirected graph G(V, E) and two vertices v1 and v2(as integers), find and print the path from v1 to v2 (if exists).
 Print nothing if there is no path between v1 and v2.
Find the path using DFS and print the first path that you encountered.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
Print the path in reverse order. That is, print v2 first, then intermediate vertices and v1 at last.
Note : Save the input graph in Adjacency Matrix.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next E lines : Two integers a and b, denoting that there exists an edge between vertex a and vertex b (separated by space)
Line (E+2) : Two integers v1 and v2 (separated by space)

Output Format :
Path from v1 to v2 in reverse order (separated by space)

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
3 0 1

Sample Input 2 :
6 3
5 3
0 1
3 4
0 3

Sample Output 2 :

@csalgo
*/
#include<iostream>
using namespace std;
#include<vector>
vector<int> print(int** edges,int n,int sv,int ev,bool* visited){
    // cout<<sv<<" : "<<endl;
    visited[sv] = true;
    vector<int> arr;
    if(sv==ev){
        // vector<int> arr;
        arr.push_back(sv);
        return arr;
    }
    if(edges[sv][ev]==1){
        arr.push_back(ev);
        arr.push_back(sv);
        return arr;
    }
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        // cout<<edges[sv][i]<<" q \n";
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            // cout<<i<<"  "<<sv<<" "<<ev<<" wq\n";
            arr = print(edges,n,i,ev,visited);
            if(arr.size()){
                arr.push_back(sv);
                return arr;
            }
        }
    }
    // cout<<arr.size()<<endl;
    return arr;
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
    vector<int> ans = print(edges,n,sv,ev,visited);
    for(int i=0;i<ans.size();i++){
        cout<<ans.at(i)<<" ";
    }
    cout<<endl;
    //delete all the memory //h.w  
    return 0;
}
