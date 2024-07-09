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
    if(n*a>(n*(n+1))/2){
        cout<<n*a<<endl;
    }
    if(b>n){
        if(n*a<((n*(n+1))/2)+(b-n)*a)cout<<((n*(n+1))/2)+(b-n)*a<<endl;
        else cout<<n*a<<endl;
    }else{
        if(n*a<((b*(b+1))/2)+(n-b)*a)cout<<((b*(b+1))/2)+(n-b)*a<<endl;
        else cout<<n*a<<endl;
    }
        
   }

   return 0;
}
