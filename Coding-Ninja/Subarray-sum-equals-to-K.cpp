#include <bits/stdc++.h>
using namespace std;
bool func(vector<int>& nums,int n,int k, vector<vector<long long>>& dp){
    if(k==0) return true;
    if(n<0) return false;
    if(dp[n][k]!=-1) return dp[n][k];
    bool ans=func(nums,n-1,k,dp);
    bool ans1=false;
    if(k-nums[n]>=0)
      ans1=func(nums,n-1,k-nums[n],dp);
    
    return dp[n][k]=ans or ans1;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<long long>> dp(n+1,vector<long long>(k+1,-1));
    return func(arr,n-1,k,dp);
}