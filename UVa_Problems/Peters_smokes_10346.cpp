#include <bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    ll n,k; 

    while(scanf("%lld %lld",&n,&k)!=EOF){
        ll ans=n+n/k,c=n/k+n%k;
        while(c>=k){
            ans+=c/k;
            c=c/k+c%k;
        }
        cout<<ans<<endl;
    }
    
   return 0;
}