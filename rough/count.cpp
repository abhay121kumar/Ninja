#include<iostream>
using namespace std;

// int count(int needle,int hay){
//     int answer=0;
//     while(hay/10!=0){
//         if(hay%10==needle){
//             answer++;
//         }
//         hay = hay/10;
//     }
//     return answer;
// }
// int main()
// {
//     int needle;
//     cin>>needle;
//     int hay;
//     cin>>hay;
//     int ksu = count(needle,hay);
//     cout<<ksu<<endl;
//     return 0;
// }

int cal(char arr[]){
    int answer =0;
    for(int i=0;i<sizeof(arr);i++){
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
            answer++;
        }
    }
    return answer;
}

int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // cout<<sizeof(arr)<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int count = cal(arr);
    cout<<count<<endl;
    return 0;
}