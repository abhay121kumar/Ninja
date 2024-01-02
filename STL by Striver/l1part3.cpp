#include<bits/stdc++.h>
using namespace std;


array<int,4> arr1; // ->{,,,} // global by default value is 0
int main(){
    // array container
    //M-1 to define
    // int arr[100];
    //M-2 to define
    // array<int,3> arr;// ->{,,}// local by default value is garbage

    // array<int,5> arr2 = {11,12,13};//->{11,12,13,0,0}// by default get 0
    // array<int,5> arr2 = {0};//->{0,0,0,0,0}// by default get 0

    //function 1 -> array_name.fill()
    array<int,6> arr3;
    arr3.fill(10);//->{10,10,10,10,10,10}// in arr3 all ele are filled with 10

    // function 2 -> array_name.at(index)
    // arr3.at(index);
    for(int i=0;i<6;i++){
        cout<<arr3.at(i)<<" ";
    }
    cout<<endl;



    //iterator
    // begin(), end(), rbegin(), rend(); -> they are pointer
    //rbegin()-> reversebegin
    // array<int,5> arr4;
    array<int,5> arr4 = {12,13,14,1,5};
    //M-1
    // for(int i=0;i<5;i++){
    //     arr4.at(i) = i+1;
    // }
    //M-2
    for(auto it= arr4.begin(); it!=arr4.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //print in reverse order
    //m-1 to print in reverse order
    for(auto it= arr4.rbegin(); it!=arr4.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //m-2 to print in reverse order
    for(auto it= arr4.end()-1; it>=arr4.begin();it--){
        cout<<*it<<" ";
    }
    cout<<endl;

    //for each loop
    for(auto it:arr4){
        cout<<it<<" ";
    }
    cout<<endl;

    string s = "abhcfe";
    for(auto c:s){
        cout<<c<<" ";
    }
    cout<<endl;

    //size
    cout<<arr4.size()<<endl;

    //front
    cout<<arr4.front()<<endl;
    cout<<arr4.at(0)<<endl;

    //back
    cout<<arr4.back()<<endl;
    cout<<arr4.at(arr4.size()-1)<<endl;


    //vector

    //segmentation fault-> you are not able to access that memory that you try for
    vector<int> v;//->{}
    cout<<v.size()<<endl;
    v.push_back(0);// ->{0}
    v.push_back(1);//{0,1}
    cout<<v.size()<<endl;
    v.pop_back();//->{0}
    cout<<v.size()<<endl;

    v.clear(); // erase all element present in v

    vector<int> vec1(4,0); //->{0,0,0,0}
    vector<int> vec2(4,10); //->{10,10,10,10}

    //copy the entire vector2 into the new vector3
    //m-1
    vector<int> vec3(vec2.begin(),vec2.end());// ->[)
    //m-2
    vector<int> vec4(vec2);

    vector<int> abhay;
    abhay.push_back(1);
    abhay.push_back(2);
    abhay.push_back(6);
    abhay.push_back(3);
    abhay.push_back(5);
    //abhay->{1,2,6,3,5}
    //{1,2}
    vector<int> abhay1(abhay.begin(),abhay.begin()+2);

    abhay.emplace_back(10);// implace back take lesser time to insert element into vector as push_back takes time


    //to defining 2d vector

    vector<vector<int>> vec1;
    vector<int> raj1;
    raj1.emplace_back(1);
    raj1.emplace_back(2);

    vector<int> raj2;
    raj2.emplace_back(10);
    raj2.emplace_back(20);

    vector<int> raj3;
    raj3.emplace_back(19);
    raj3.emplace_back(23);
    raj3.emplace_back(43);

    vec1.emplace_back(raj1);
    vec1.emplace_back(raj2);
    vec1.emplace_back(raj3);

    for(auto vct:vec1){
        for(auto it:vct){
            cout<<it<<" ";
        }
        cout<<endl;
    }

    //M-2 to print 
    for(int i=0;i<vec1.size();i++){
        for(int j=0;j<vec1[i].size();j++){
            cout<<vec1[i][j]<<" ";
        }
        cout<<endl;
    }

    //define 10*20
    //m-1
    vector<vector<int>> vec2(10, vector<int> (20,0));
    vec2.emplace_back(vector<int> (30,0));
    //m-2
    vector<int> arr[4];
    arr[0].emplace_back(2);

    //10X20x30 // arr[10][20][30]
    vector<vector<vector<int>>> vec3(10, vector<vector<int>> (20, vector<int> (30,0)));
    
    return 0;
}