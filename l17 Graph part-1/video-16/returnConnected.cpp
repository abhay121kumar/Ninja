/*

@csalgo

Coding Problem
Problem Statement: All connected components
Problem Level: MEDIUM
Problem Description:
Given an undirected graph G(V,E), find and print all the connected components of the given graph G.
V is the number of vertices present in graph G and vertices are numbered from 0 to V-1.
E is the number of edges present in graph G.
You need to take input in main and create a function which should return all the connected components. And then print them in the main, not inside function.
Print different components in new line. And each component should be printed in increasing order (separated by space). Order of different components doesn't matter.
Input Format :
Line 1: Two Integers V and E (separated by space)
Next 'E' lines, each have two space-separated integers, 'a' and 'b', denoting that there exists an edge between Vertex 'a' and Vertex 'b'.

Output Format :
Different components in new line

Constraints :
2 <= V <= 1000
1 <= E <= 1000

Sample Input 1:
4 2
0 1
2 3

Sample Output 1:
0 1 
2 3

Sample Input 2:
4 3
0 1
1 3 
0 3

Sample Output 2:
0 1 3 
2

@csalgo
*/


//wrong code
#include<iostream>
using namespace std;
#include<queue>
#include<vector>

//wrong code

void printDFS(int** edges,int n,int sv,bool *visited,vector<int> &smallOutput){
    // cout<<sv<<endl;
    smallOutput.push_back(sv);
    visited[sv] = true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            printDFS(edges,n,i,visited,smallOutput);
        }
    }
}

// void kuchve(vector<int> kuch){
//     for(int i=0;i<kuch.size();i++){
//         cout<<kuch.at(i)<<" ";
//     }
//     cout<<endl;
// }
// void printBFS(int** edges,int n,int sv,bool *visited){
//     queue<int> pendingVertices;
//     pendingVertices.push(sv);
//     visited[sv] = true;
//     while(!pendingVertices.empty()){
//         int currentVertex = pendingVertices.front();
//         pendingVertices.pop();

//         for(int i=0;i<n;i++){
//             if(i==currentVertex){
//                 continue;
//             }
//             if(edges[currentVertex][i]==1 && !visited[i]){
//                 pendingVertices.push(i);
//                 visited[i] = true;
//             }
//         }
//     } 
// }


vector<vector<int>> DFS(int** edges,int n){
    vector<vector<int>> output;
    vector<int> smallOutput;
    bool *visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            printDFS(edges,n,i,visited,smallOutput);
            // kuchve(smallOutput);
            output.push_back(smallOutput);
            smallOutput.clear();
        }
    }
    delete[] visited;
    return output;
}

// void BFS(int* *edges,int n,vector<int> output){
//     bool *visited = new bool[n];
//     for(int i=0;i<n;i++){
//         visited[i] = false;
//     }
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             printBFS(edges,n,i,visited);
//         }
//     }
//     delete[] visited;
// }

int main(){
    int n,e;
    cin>>n>>e;

    int* *edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    cout<<"DFS"<<endl;
    vector<vector<int>> ans = DFS(edges,n);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // cout<<"BFS"<<endl;
    // BFS(edges,n,output);

    for(int i=0;i<n;i++){
        delete[] edges[i];
    }
    delete[] edges;
    return 0;
}

/*

7
5
0 2
0 3
2 3
1 4
5 6
*/