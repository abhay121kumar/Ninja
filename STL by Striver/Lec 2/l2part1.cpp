#include<bits/stdc++.h>
using namespace std;

int main(){
    //given n elements, tell me the number of unique elements
    int arr[] = {2,5,2,3,1};
    set<int> st;
    int n=5;
    // cin>>n;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        st.insert(x);
    }

    st.erase(st.begin());
    st.erase(st.begin(), st.begin()+2);
    st.erase(5);

    set<int> st1 = {1,2,3,4};
    auto it = st.find(2); // logn // it will run upto 2 if the element exit
    auto it = st.find(9); // it = st.end()
    st.emplace(4); // st.insert(4)
    cout<<st.size()<<endl;
    st.erase(st.begin(),st.end()); // entire set deleted

    unordered_set<int> st3;
    st.insert(2);
    st.emplace(3);
    st.emplace(1);

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.emplace(2);
    ms.emplace(2);
    ms.emplace(3);
    
    ms.erase(2);//all instance are erased
    auto it =  ms.find(2);//returns an iterator pointing to the first
    ms.clear();
    ms.erase(ms.begin(), ms.end());// delete the entire set
    //log n size
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*it<<" ";
    }

    for(auto it:st){
        cout<<it<<endl;
        
    }

    //find how many times 2 occurs
    st.count(2);
    return 0;
}