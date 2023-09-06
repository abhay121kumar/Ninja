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

    void insert(int element){
        pq.push_back(element);

        int childIndex = pq.size()-1;

        while(childIndex > 0){
            int parentIndex = (childIndex - 1)/2;
            if(pq[childIndex] < pq[parentIndex]){
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }else{
                break;
            }
            childIndex = parentIndex;
        }
    }
};