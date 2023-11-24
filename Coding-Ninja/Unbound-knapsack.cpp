#include <bits/stdc++.h>
using namespace std;
int knapSack(int idx,int left_capacity,vector<int>& v,vector<int>& w,vector<vector<int>> &dp){
    if(left_capacity==0) return 0;
    if(idx<0) return 0;
    if(dp[idx][left_capacity]!=-1) return dp[idx][left_capacity];

    int n0tTake=knapSack(idx-1,left_capacity,v,w,dp)+0;
    int take=0;
    if(w[idx]<=left_capacity)
        take=knapSack(idx,left_capacity-w[idx],v,w,dp)+v[idx];

    return dp[idx][left_capacity]=max(take,n0tTake);
}
int unboundedKnapsack(int n, int w, vector<int> &profit, vector<int> &weight){
    vector<vector<int>> dp(n,vector<int>(w+1,-1));
    return knapSack(n-1,w,profit,weight,dp);
}