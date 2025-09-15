#include<bits/stdc++.h>
using namespace std;

int coinChange(vector<int>&arr,int target,int i){
    if(target==0) return 0;
    if(i==arr.size() || target<0) return INT_MAX;
    int res=INT_MAX;
    int pick=coinChange(arr,target-arr[i],i);
    if(pick!=INT_MAX) res=1+pick;
    int notPick=coinChange(arr,target,i+1);
    return min(res,notPick);
}

int main(){
    vector<int>arr={1,2,5};
    int target=11;
    cout<<coinChange(arr,target,0)<<endl;
    return 0;
}