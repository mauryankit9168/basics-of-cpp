#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    vector<int>arr={1,2,0,2,0,1,0,2};
    int n=arr.size();
    int count_0=0;
    int count_1=0;
    int count_2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count_0++;
        }else if(arr[i]==1){
            count_1++;
        }else{
            count_2++;
        }
    }
    vector<int>ans;
    for(int i=0;i<count_0;i++){
        ans.push_back(0);
    }
    for(int i=0;i<count_1;i++){
        ans.push_back(1);
    }
    for(int i=0;i<count_2;i++){
        ans.push_back(2);
    }
    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}