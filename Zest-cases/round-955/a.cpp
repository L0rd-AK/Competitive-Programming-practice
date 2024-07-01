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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    // int mx=max(c-a,d-b);
    
    if(a>=b and c>=d or a<b and c<d)cout<<"YES\n";
    else cout<<"NO\n";
    // mx=max(mx)
   }

    return 0;
}