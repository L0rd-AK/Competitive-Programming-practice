#include <bits/stdc++.h>
using namespace std;
#define ll long long int
long long coinWays(int n,int amount,vector<vector<long>>& dp,vector<int>& coins){
    if(amount==0) return 1;
    if(n<0) return 0;
    if(dp[n][amount]!=-1) return dp[n][amount];
    long long notTake=coinWays(n-1,amount,dp,coins);
    long long take=0;
    if(amount-coins[n]>=0)
      take=coinWays(n,amount-coins[n],dp,coins);

    return dp[n][amount]=(take+notTake);
}
int main() {
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  // freopen("D:\\VS-Code\\DSA\\output.txt","w",stdout);
  int  n,amount;
  int  t;
 
  cin>>t;
  while(t--){
    cin>>n>>amount;
    
    vector<vector<long>> dp(n,vector<long>(amount+7,-1));
    vector<int> coins;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        coins.push_back(x);
    }
    cout<<coinWays(n-1,amount,dp,coins)<<'\n';
  }
  
  return 0;
}

