/*
Input  : x = 10, n = 2
Output : 1
Explanation: 10 = 12 + 32, Hence total 1 possibility

Input  : x = 100, n = 2
Output : 3
Explanation: 
100 = 102 OR 62 + 82 OR 12 + 32 + 42 + 52 + 72 Hence total 3 possibilities
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<cmath>


//my wrong code
// int allPossibleWays(int n){
//     vector<int> input;
//     int i=1;
    int k = 1;
    while(k<=n){
        input.push_back(i*i);
        i+=1;
        k = i*i;
    }
    int count = 0;
    int sum = 0;
    int size = input.size();
    int *temp = new int[input.size()];
    for(int l=0;l<input.size();l++){
        temp[l] = -1;
    } 
    for(int j=size-1;j>=0;j--){
        if(temp[j] == -1){
            if(input[j]==n){
                count+=1;
                temp[j] = 0;
            }
            if(input[j]<n && ((sum+input[j]) <= n)){
                    sum+=input[j];
                    temp[j] = 0;
            }
        }
    }
}



//correct code from youtube
int getAllWaysHelper(int a,int b,int currNum,int currSum){
    int result = 0;
    //calling power of 'i' raised to 'b'
    int p = pow(currNum,b);
    while(p + currSum<a){
        result+=getAllWaysHelper(a,b,currNum+1,p+currSum);
        currNum++;
        p=pow(currNum,b);
    }
    /*
    If sum of powers is equal to 'a'
    then incresease the value of result
    */
   if(p+currSum == a){
    result++;
   }
   //return the final result
   return result;
}

int getAllWays(int a,int b){
    return getAllWaysHelper(a,b,1,0);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<getAllWays(a,b)<<endl;
    return 0;
}