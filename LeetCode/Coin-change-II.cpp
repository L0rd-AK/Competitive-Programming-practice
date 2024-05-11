#include <bits/stdc++.h>
using namespace std;
long long coinWays(int n,int amount,vector<int>& coins,vector<vector<long>>& dp){
    if(amount==0) return 1;
    if(n<0) return 0;
    if(dp[n][amount]!=-1) return dp[n][amount];
    long long notTake=coinWays(n-1,amount,coins,dp);
    long long take=0;
    if(amount-coins[n]>=0)
      take=coinWays(n,amount-coins[n],coins,dp);

    return dp[n][amount]=(take+notTake);
}
int change(int amount, vector<int>& coins) {
    int n=coins.size();
    vector<vector<long>> dp(n,vector<long>(amount+7,-1));
    return coinWays(n-1,amount,coins,dp);
}