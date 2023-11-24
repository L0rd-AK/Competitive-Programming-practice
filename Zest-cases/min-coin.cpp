#include <bits/stdc++.h>
using namespace std; 
int minCoin(int n,vector<int> &num,int am,vector<vector<int>>& dp){
    if(am==0) return 1;
    if(n<0) return 0;
    if(dp[n][am]!=-1) return dp[n][am];
    int n0tTake=minCoin(n-1,num,am,dp);
    int take=0;
    if(num[n]<=am)
      take=minCoin(n,num,am-num[n],dp)+1;

    return dp[n][am]=min(take,n0tTake);
}
int minimumElements(vector<int> &num, int x)
{
    int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
    return minCoin(n,num,x,dp);
}