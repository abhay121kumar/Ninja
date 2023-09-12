/*
@csalgo

Chapter Assignment
Problem Statement: Islands
Problem Level: MEDIUM
Problem Description:
An island is a small piece of land surrounded by water . A group of islands is said to be connected if we can reach from any given island to any other island in the same group . Given V islands (numbered from 1 to V) and E connections or edges between islands. Can you count the number of connected groups of islands.
Input Format :
The first line of input contains two integers, that denote the value of V and E.
Each of the following E lines contains two integers, that denote that there exists an edge between vertex a and b.

Output Format :
Print the count the number of connected groups of islands

Constraints :
0 <= V <= 1000
0 <= E <= (V * (V-1)) / 2
0 <= a <= V - 1
0 <= b <= V - 1
Time Limit: 1 second

Sample Input 1:
5 8
0 1
0 4
1 2
2 0
2 4
3 0
3 2
4 3

Sample Output 1:
1



=====Answer=====
Correct Option: 

@csalgo
*/

#include<iostream>
using namespace std;
#include<queue>

// wirth dfs wrong code

bool printDFS(int** edges,int n,int sv,bool *visited){
    // cout<<sv<<endl;
    int count = 0;
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
            // cout<<"hello"<<endl;
            flag = true;
            return printDFS(edges,n,i,visited);
            // flag = flag1;
        }
    }
    // cout<<flag<<endl;
    // return flag;
}

//with bfs it is correct code
// int printBFS(int** edges,int n,int sv,bool *visited){
//     queue<int> pendingVertices;
//     pendingVertices.push(sv);
//     visited[sv] = true;
//     int count = 0;
//     bool flag = false;
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
//                 flag = true;
//             }
//         }
//     }
//     if(flag){
//         return 1;
//     }else{
//         return 0;
//     } 
// }


void DFS(int** edges,int n){
    bool *visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    int count =0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            // count+=1;
            bool flag = printDFS(edges,n,i,visited);
            if(flag){
                count+=1;
            }
        }
    }
    cout<<endl;
    cout<<count<<endl;
    // delete[] visited;
}

// void BFS(int* *edges,int n){
//     bool *visited = new bool[n];
//     for(int i=0;i<n;i++){
//         visited[i] = false;
//     }
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             count = count + printBFS(edges,n,i,visited);
//         }
//     }
//     cout<<count<<endl;
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
    DFS(edges,n);

    // cout<<"BFS"<<endl;
    // BFS(edges,n);

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


/*
10 7
1 2
1 3
3 4
2 4
8 9
5 6
5 7
*/