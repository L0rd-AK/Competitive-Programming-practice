#include <bits/stdc++.h>
using namespace std; 

int main() {
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int n, amount;
    cin >> n >> amount;
    vector<int> w(n), v(n);
    vector<vector<int>> dp(n+1,vector<int>(amount+1,0));
    int sum=0;
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++){cin >> v[i];sum+=v[i];}
    for(int i=0;i<=n;i++){
        for(int j=0;j<=amount;j++){
          if(i==0 || j==0)dp[i][j]=0;
          else if(j<w[i-1])dp[i][j]=dp[i-1][j];
          else{
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
          }
        }
      }
    int ans=0;
    ans=dp[n][amount];
    if(ans>=sum) cout<<"My King, I am successful in capturing the big fish. Immortality is few steps away.\n";
    else printf("My King, I have captured %d followers till now and I need more soldiers asap.\n",ans);
}
