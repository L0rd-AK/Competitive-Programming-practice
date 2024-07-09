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
    if(n<b){
        ll x=b-n;
        if(x>n)cout<<(b*(b+1))/2 - ((x*(x+1))/2)<<endl;
        else cout<<(n*a)+(x*(x+1))/2<<endl;
    }else{
        ll x=n-b;
        if((n*a)>(n*(n+1))/2)cout<<n*a<<endl;
        else cout<<(n*(n+1))/2<<endl;
    }
    
        
   }

   return 0;
}
