#include <iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>arr,int i,int tar){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==tar){
        return i+1;
    }
    return linearSearch(arr,i+1,tar);
}

int main() {
    // Write C++ code here
    vector<int>arr={1,3,6,4,8,7};
    int target=8;
    cout<< linearSearch(arr,0,target)<<endl;

    return 0;
}