#include<iostream>
using namespace std;
#include<queue>
#include<vector>
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;// min heap

    pq.push(10);
    pq.push(34);
    pq.push(110);
    pq.push(1);
    pq.push(100);

    cout<<"size "<<pq.size()<<endl;
    cout<<"is empty "<<pq.empty()<<endl;
    cout<<"top "<<pq.top()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}