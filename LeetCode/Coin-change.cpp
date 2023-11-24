#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
long long coinisgay(vector<int>& coins,int left_amount,vector<long long>& dp){
    if(left_amount==0) return 0;
    if(dp[left_amount]!=-1) return dp[left_amount];

    long long ans=1e9;
    for(int i=0;i<coins.size();i++)
        if(left_amount-coins[i]>=0)
            ans=min(ans,coinisgay(coins,left_amount-coins[i],dp)+1);

    return dp[left_amount]=ans;
}
int coinChange(vector<int>& coins, int amount) {
    int n=coins.size();
    // vector<vector<long long>> dp(n,vector<long long>(amount+7,-1));
    vector<long long> dp(amount+1,-1);
    // memset(dp,-1,sizeof(dp));
    int ans=coinisgay(coins,amount,dp);
    if(ans>=1e9) return -1;
    return ans;
}
int main(){
    vector<int> coins={1,2,5};int amount=11;
    cout<<coinChange(coins,amount);
    
    
    return 0;
}