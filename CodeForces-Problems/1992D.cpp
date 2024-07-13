#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;

        if(n<m){
            cout<<"YES"<<endl;
            continue;
        }
        ll dp[n+2]={0};
        f(i,0,n)if(s[i]=='C')dp[i+1]=INT_MAX;
        if(s[n-1]=='L')dp[n]=0;
        if(s[n-1]=='W')dp[n]=1;
        for(int i=n;i>=1;i--){
            if(s[i-1]=='W')dp[i]=dp[i+1]+1;
            if(s[i-1]=='L'){
                ll mn=INT_MAX;
                for(int j=1;j<=m;j++)mn=min(mn,dp[i+j]);
                dp[i]=mn;
            }
        }
        ll mn=INT_MAX;
        for(int j=1;j<=m;j++)mn=min(mn,dp[j]);
        dp[0]=mn;
        // f(i,0,n+2)cout<<dp[i]<<" ";
        // cout<<endl;
        if(dp[0]<=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    
    return 0;
}
