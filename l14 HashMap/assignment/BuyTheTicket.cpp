/*
@csalgo

Chapter Assignment
Problem Statement: Buy the ticket
Problem Level: MEDIUM
Problem Description:
You want to buy a ticket for a well-known concert which is happening in your city. But the number of tickets available is limited. Hence the sponsors of the concert decided to sell tickets to customers based on some priority.
A queue is maintained for buying the tickets and every person has attached with a priority (an integer, 1 being the lowest priority). The tickets are sold in the following manner -
1. The first person (pi) in the queue asked to comes out.
2. If there is another person present in the queue who has higher priority than pi, then ask pi to move at end of the queue without giving him the ticket.
3. Otherwise, give him the ticket (and don't make him stand in queue again).
Giving a ticket to a person takes exactly 1 minutes and it takes no time for removing and adding a person to the queue. And you can assume that no new person joins the queue.
Given a list of priorities of N persons standing in the queue and the index of your priority (indexing starts from 0). Find and return the time it will take until you get the ticket.
Input Format :
Line 1 : Integer N (Total number of people standing in queue)
Line 2 : Priorities of every person (n space separated integers)
Line 3 : Integer k (index of your priority)

Output Format :
Time required

Sample Input 1 :
3
3 9 4
2

Sample Output 1 :
2

Sample Output 1 Explanation :
Person with priority 3 comes out. But there is a person with higher priority than him. So he goes and then stands in the queue at the end. Queue's status :  {9, 4, 3}. Time : 0 secs.
Next, the person with priority 9 comes out. And there is no person with higher priority than him. So he'll get the ticket. Queue's status :  {4, 3}. Time : 1 secs.
Next, the person with priority 4 comes out (which is you). And there is no person with higher priority than you. So you'll get the ticket. Time : 2 secs.
Sample Input 2 :
5
2 3 2 2 4
3

Sample Output 2 :
4



=====Answer=====
Correct Option: 

@csalgo
*/
#include<iostream>
#include<queue>
using namespace std;


int BuyTheTicket(int* arr,int size,int k){
    priority_queue<int> pq;
    queue<int> q;
    for(int i=0;i<size;i++){
        q.push(i);
        pq.push(arr[i]);
    }
    int count=0;
    int i=0;
    while(1){
        // cout<<pq.top()<<" "<<q.front()<<" "<<arr[q.front()]<<endl;
        if(pq.top()==arr[k] && q.front()==k){
            count+=1;
            break;
        }
        if(pq.top()==arr[q.front()] ){
                count+=1;
                pq.pop();
                q.pop();
        }
        else if(pq.top()!=arr[q.front()]){
                q.push(q.front());
                q.pop();
        }
        i++;
        if(i>=size){
            i=0;
        }
    // cout<<"hello"<<endl;// 2 3 2 2 4
    }       // pq->4
            //q-> 1 2 3 4 0 1 2 
            //k = 3

    return count;
}


int main(){
    int n;
    cout<<"enter size of an array"<<endl;
    cin>>n;
    cout<<"enter element"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter k index"<<endl;
    cin>>k;
    cout<<BuyTheTicket(arr,n,k)<<endl;
    return 0;
}




















// int main(){
    
//     // queue<int> q;
//     // q.push(10);
//     // q.push(20);
//     // q.push(30);
//     // q.push(40);
//     // q.push(50);
//     // while(!q.empty()){
//     //     cout<<q.front()<<" ";
//     //     q.pop();

//     // }
//     // cout<<endl;
//     // priority_queue<int> pq;
//     // // queue<int> q;
//     // int arr[5] = {8,9,8,8,12};
//     // for(int i=0;i<5;i++){
//     //     // q.push(i);
//     //     pq.push(arr[i]);
//     // }
//     // for(int i=0;i<5;i++){
//     //     cout<<pq.top()<<" ";
//     //     pq.pop();
//     // }
//     return 0;
// }