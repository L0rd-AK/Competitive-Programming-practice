#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
long long h[100007]={0},dp[100007];
ll jump(int step){
    if(step==0) return 0;
    if(dp[step]!=-1) return dp[step];
    ll ans=jump(step-1)+abs(h[step]-h[step-1]);
    if(step-2>=0)
        ans=min(ans,jump(step-2)+abs(h[step]-h[step-2]));

    return dp[step]=ans;
}
int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    ff(i,0,n)cin>>h[i];
    cout<<jump(n-1)<<'\n';
    
    
    return 0;
}