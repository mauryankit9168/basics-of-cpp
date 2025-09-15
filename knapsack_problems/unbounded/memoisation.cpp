#include<bits/stdc++.h>
using namespace std;

int coinChangeHelper(vector<int>& arr, int i, int am,
                         vector<vector<int>>& dp) {
        if (am == 0)
            return 0;
        if (i == arr.size() || am < 0)
            return 1e9;

        if (dp[i][am] != -1)
            return dp[i][am];
        int pick = 1 + coinChangeHelper(arr, i, am - arr[i], dp);
        int notPick = coinChangeHelper(arr, i + 1, am, dp);
        return dp[i][am] = min(pick, notPick);
    }

int main(){
    vector<int>arr={1,2,5};
    int am=11;
    vector<vector<int>> dp(arr.size(), vector<int>(am + 1, -1));
    int ans=coinChangeHelper(arr, 0, am, dp);
    cout<<(ans >= 1e9 ? -1 : ans)<<endl;
    return (ans >= 1e9 ? -1 : ans);   
    return 0;
}