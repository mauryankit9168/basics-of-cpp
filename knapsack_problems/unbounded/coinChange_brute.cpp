#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>arr,int target,int i,int &sum){
    if(i==arr.size()) return 0;
    if(i==target ) return ;

    for(int j=0;j<arr.size();j++){
        coinChange(arr,target,j,sum);
    }
}

int main(){
    vector<int>arr={1,2,5};
    int target=11;
    int sum=0;
    cout<<coinChange(arr,target,0,sum)<<endl;
    return 0;
}