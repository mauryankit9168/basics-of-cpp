#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={7,4,5,2,8};
    int target = 12;
    vector<int>ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                break;
            }
        }
        if(!ans.empty()) break;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}