#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
long long h[100007]={0},dp[100007][107],k;
ll knapSack(int idx){
    if(idx==0) return 0;
    if(k==0) return 0;
    if(dp[idx][k]!=-1) return dp[idx][k];
    ll ans=INT_MAX;
    ff(i,1,k+1)
        if(idx-i>=0)
            ans=min(ans,knapSack(idx-i)+abs(h[idx]-h[idx-i]));
    
    return dp[idx][k]=ans;
}
int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n>>k;
    ff(i,0,n)cin>>h[i];
    cout<<knapSack(n-1)<<'\n';
    
    
    return 0;
}