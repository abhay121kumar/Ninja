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


    // my code give erro please correct it?
    int removeMin(){
        if(isEmpty()){
            return 0;
        }

        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        int minIndex = 0;
        int parentIndex = minIndex;
        int lci = 2*parentIndex+1;
        int rci = 2*parentIndex+2;

        while(parentIndex<pq.size() && lci<pq.size()){
            //case-1
            if((pq[parentIndex] > pq[lci]) && (lci<pq.size()) && (pq[lci]<=pq[rci]) && (rci<pq.size())){
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[lci];
                pq[lci] = temp;
                minIndex = lci;
            }
            else if((pq[parentIndex] > pq[rci]) && (rci<pq.size()) && (pq[rci]<pq[lci]) && (lci<pq.size())){
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[rci];
                pq[rci] = temp;
                minIndex = rci;
            }
            else if((pq[parentIndex] > pq[lci]) && (lci<pq.size()) && (rci>pq.size())){
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[lci];
                pq[lci] = temp;
                minIndex = lci;
            }
            else if((pq[parentIndex] > pq[rci]) && (rci<pq.size()) && (lci>pq.size())){
                int temp = pq[parentIndex];
                pq[parentIndex] = pq[rci];
                pq[rci] = temp;
                minIndex = rci;
            }

            parentIndex = minIndex;
            lci = 2*parentIndex + 1;
            rci = 2*parentIndex + 2;
        cout<<"hello world"<<endl;
        }
        return ans;
    }
};


int main(){
    PriorityQueue p;
    // p.insert(100);
    // p.insert(10);
    // p.insert(15);
    // p.insert(4);
    // p.insert(17);
    // p.insert(21);
    // p.insert(67);
    p.insert(10);
    p.insert(20);
    p.insert(100);
    p.insert(30);
    p.insert(40);

    cout<<p.getSize()<<endl;
    cout<<p.getMin()<<endl;

    while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }
    return 0;
}