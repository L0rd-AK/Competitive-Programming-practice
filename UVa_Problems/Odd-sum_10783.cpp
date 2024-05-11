#include <bits/stdc++.h>
#include <vector>
#define ll long long int 
using namespace std;
#define MOD 1000000007
int main(){
    ll t,index=1;
    cin>>t;
    while(t--){        ll a,b,ans=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++) if(i%2==1) ans+=i;
        printf("Case %lld: %lld\n",index++,ans);
    }

   return 0;
}