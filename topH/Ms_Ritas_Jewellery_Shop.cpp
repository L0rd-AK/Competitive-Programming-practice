#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
int dp[1000+7][1000+7];
int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    memset(dp, 0, sizeof(dp));
    int n,size;
    cin>>n>>size;
    int v[n],w[n];
    ff(i,0,n)cin>>w[i];
    int sum=0;
    ff(i,0,n){cin>>v[i];sum+=v[i];}
    ff(i,0,n+1){
        ff(j,0,size+1){
            if(i==0||j==0)dp[i][j]=0;
            else if(w[i-1]>j)dp[i][j]=dp[i-1][j];
            else{
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+v[i-1]);
            }
        }
    }
    
    cout<<dp[n][size]<<" "<<sum-dp[n][size]<<'\n';

    return 0;
}