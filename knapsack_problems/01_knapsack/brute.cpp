#include<bits/stdc++.h>
using namespace std;
void maxKnapsack(int n,int W,int i,vector<int>wei,vector<int>val,int sum,int res,int &maxy){
    if(i==n){
        if(sum<=W){
            maxy=max(maxy,res);
        }
        return;
    }
    if(sum<=W){
        maxKnapsack(n,W,i+1,wei,val,sum+wei[i],res+val[i],maxy);
    }
    maxKnapsack(n,W,i+1,wei,val,sum,res,maxy);  //backtrack
}
int knapsack(int n,int W,vector<int>wei,vector<int>val){
    int sum=0;
    int res=0;
    int maxy=0;
    maxKnapsack(n,W,0,wei,val,sum,res,maxy);
    return maxy;
}
int main(){
    vector<int>weight={1,3,4,5};
    vector<int>value={1,4,5,7};
    cout<<knapsack(4,7,weight,value)<<endl;
    return 0;
}    //tc is 2^n