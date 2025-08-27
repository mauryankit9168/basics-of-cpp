#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int>arr={7,1,5,2,4,8};
    int target =12;
    vector<int>ans;
    sort(arr.begin(),arr.end());
    int i=0,j=arr.size()-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum<target){
            i++;
        }
        else if(sum>target){
            j--;
        }else{
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            break;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}