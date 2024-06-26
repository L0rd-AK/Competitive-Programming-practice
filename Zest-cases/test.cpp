#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;cin>>t;

    while(t--){
      int ans=0,carry=0;
        for(int i=0;i<n;i++){
            if(a[i]>=l and a[i]<=r or carry+a[i]>=l and carry+a[i]<=r){ans++;carry=0;}
            else carry+=a[i];
            if(carry>r)carry=0;
            else if(carry>=l and carry<=r){
                ans++;
                carry=0;
            }
        }
        int ans1=0;
        carry=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]>=l and a[i]<=r or carry+a[i]>=l and carry+a[i]<=r){ans1++;carry=0;}
            else carry+=a[i];
            if(carry>r)carry=0;
            else if(carry>=l and carry<=r){
                ans1++;
                carry=0;
            }
        }
        cout<<max(ans,ans1)<<endl;
    }

    return 0;
}