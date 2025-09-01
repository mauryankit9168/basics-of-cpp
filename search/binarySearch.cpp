#include<bits/stdc++.h>
using namespace std;

void binarySearch(vector<int>arr,int left,int right,int target,int &ans){
    if(left>right) return;
    int mid=left+(right-left)/2;
    if(arr[mid]==target){
        ans=mid;
        return;
    }else if(arr[mid]>target){
        binarySearch(arr,left,mid-1,target,ans);
    }else{
        binarySearch(arr,mid+1,right,target,ans);
    }
}

int main(){
    vector<int>arr={3,4,7,1,9,2};
    int target=4;
    int left=0;
    int right=arr.size()-1;
    int ans=-1;
    sort(arr.begin(),arr.end());
    binarySearch(arr,left,right,target,ans);
    cout<<ans<<endl;
    return 0;
}