#include<bits/stdc++.h>
using namespace std;

vector<int>mergeSort(vector<int>arr1,vector<int>arr2){
    int n=arr1.size();
    int m=arr2.size();
    int i=0,j=0,k=0;
    vector<int>temp;
    while(i<n && j<m){
        if(arr1[i]>arr2[j]){
            temp.push_back(arr2[j]);
            j++;
        }else{
            temp.push_back(arr1[i]);
            i++;
        }
        k++;
    }
    while(j<m){
        temp.push_back(arr2[j]);
        j++;
    }
    while(i<n){
        temp.push_back(arr1[i]);
        i++;
    }
    return temp;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr1(n);
    vector<int>arr2(m);

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int>arr=mergeSort(arr1,arr2);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}