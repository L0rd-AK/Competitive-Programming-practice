#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t;
    cin>>t;
    while(t--){
        int n,l,r;
        cin>>n>>l>>r;
        vector<int> a(n),dp(n+1,0);
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=0,pos=0,carry=0,flag;
        for(int i=0;i<n;i++){
            carry+=a[i];
            while(carry-a[pos]>=l and pos<=i){carry-=a[pos];pos++;}
            if(carry>=l and carry<=r)flag=1;
            else flag=0;
            dp[i+1]=max(dp[i],dp[pos]+flag);
        }
        cout<<dp[n]<<endl;
        
    }

    return 0;
}