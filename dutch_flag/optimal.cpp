#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    vector<int>arr={1,2,0,2,0,1,0,2};
    int n=arr.size();
    int left=0,mid=0,right=n-1;
    while(mid<=right){
        if(arr[mid]==0){
            swap(arr[mid],arr[left]);
            mid++;
            left++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[right]);
            right--;
        }
    }
    for(int i:arr){
        cout<<i<<" ";
    }

    return 0;
}