#include<iostream>
using namespace std;
#include<vector>

class PriorityQueue{
    vector<int> pq;

    public:
    PriorityQueue(){

    }

    bool isEmpty(){
        return pq.size()==0;
    }

    //return the size of priority queue-no. of elements present
    int getSize(){
        return pq.size();
    }

    int getMin(){
        if(isEmpty()){
            return 0;//priority queue i empty
        }
        return pq.at(0);
    }
};