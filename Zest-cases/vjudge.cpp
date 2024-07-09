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
   cin>>t;
   while(t--){
    ll n,a,b;
    cin>>n>>a>>b;
    
    if(a>=b)cout<<n*a<<endl;
    else{
        ll x=b-a,ans=0;
        if(x>n){
            // if(n*a<((n*(n+1))/2)+(b-n)*a)cout<<((n*(n+1))/2)+(b-n)*a<<endl;
            // else cout<<n*a<<endl;
            ans=(n*b)-((n*(n-1))/2);
            cout<<ans<<endl;
        }else{
            // if(n*a<((b*(b+1))/2)+(n-b)*a)cout<<((b*(b+1))/2)+(n-b)*a<<endl;
            // else cout<<n*a<<endl;
            ans=(x*b)-((x*(x-1))/2);
            ans+=(n-x)*a;
            cout<<ans<<endl;
        }
    }
    

   }

   return 0;
}
