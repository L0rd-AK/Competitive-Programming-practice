#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int  n,amount,t;
  cin>>t;
  while(t--){
    cin>>n>>amount;
    vector<vector<int>> dp(n+2,vector<int>(amount+2,0));
    int coins[n];
    for(int i=0;i<n;i++)cin>>coins[i];
    // for(int i=0;i<=n;i++)for(int j=0;j<=amount;j++)dp[i][j]=0;

    for(int i=0;i<=n;i++) dp[i][0]=1;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i-1]>j) dp[i][j]=dp[i-1][j];
            else{
              dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]]; 
            }
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[n][amount]<<endl;
  }
  
  return 0;
}
