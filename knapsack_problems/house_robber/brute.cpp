#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>&arr,int i){
    if(i>=arr.size()) return 0;
    int pick=arr[i]+rob(arr,i+2);
    int notPick=rob(arr,i+1);
    return max(pick,notPick);
}

int main(){
    vector<int>nums={7,3,2,9,1};
    cout<<rob(nums,0)<<endl;
    return 0;
}