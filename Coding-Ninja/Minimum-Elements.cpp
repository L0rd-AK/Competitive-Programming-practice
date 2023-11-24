#include <bits/stdc++.h> 
using namespace std;
int minCoin(int n,vector<int> &num,int am,vector<vector<int>>& dp){
    if(n==0){
      if(am%num[0]==0) return am/num[0];
      else return 1e9;
    }
    if(dp[n][am]!=-1) return dp[n][am];
    int n0tTake=minCoin(n-1,num,am,dp);
    int take=1e9;
    if(num[n]<=am)
      take=1+minCoin(n,num,am-num[n],dp);

    return dp[n][am]=min(take,n0tTake);
}
int minimumElements(vector<int> &num, int x)
{
    int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,-1));
    int ans=minCoin(n-1,num,x,dp);
    if(ans>=1e9) return -1;
    else return ans;
}