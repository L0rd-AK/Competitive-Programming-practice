#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
ll w[100+7],v[100+7],dp[107][100007];
ll knapSack(int item,int left_value){
    if(left_value==0) return 0;
    if(item<0) return 1e15;
    if(dp[item][left_value]!=-1) return dp[item][left_value];
    ll ans=knapSack(item-1,left_value);
    if(left_value-v[item]>=0)
        ans=min(ans,knapSack(item-1,left_value-v[item])+w[item]);

    return dp[item][left_value]=ans;
}
int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    ll n,capacity;
    cin>>n>>capacity;
    ll maxx_val=1e5;
    ff(i,0,n)cin>>w[i]>>v[i];
    for(int i=maxx_val;i>=1;i--){
        if(knapSack(n,i)<=capacity){
            cout<<i<<'\n';
            break;
        }
    }
    
    return 0;
}