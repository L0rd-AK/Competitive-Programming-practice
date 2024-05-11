#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)
long long w[100+7],v[100+7],dp[107][100007];
ll knapSack(int item,int left_capacity){
    if(left_capacity==0) return 0;
    if(item<0) return 0;
    if(dp[item][left_capacity]!=-1) return dp[item][left_capacity];
    ll ans=knapSack(item-1,left_capacity);
    if(left_capacity-w[item]>=0)
        ans=max(ans,knapSack(item-1,left_capacity-w[item])+v[item]);

    return dp[item][left_capacity]=ans;
}
int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    int n,capacity;
    cin>>n>>capacity;
    ff(i,0,n)cin>>w[i]>>v[i];
    cout<<knapSack(n,capacity)<<'\n';
    return 0;
}