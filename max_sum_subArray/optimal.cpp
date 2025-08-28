#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr={5,4,-1,7,8};
    int n=arr.size();
    int maxi=0;
    int currSum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<j;k++){
                currSum+=arr[k];
                
            } 
            maxi=max(maxi,currSum);
        }
    }
    cout<<maxi<<endl;
    return 0;
}