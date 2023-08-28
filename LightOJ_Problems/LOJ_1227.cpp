#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)


int main() 
{
  ll t,n,index=1;

  cin>>t;
  while(t--){        ll n,p,q,ans=0;
    cin>>n>>p>>q;    ll a[n],mx=0;
    f(i,0,n) cin>>a[i];
    f(i,0,n){
        ll c=0,weight=0;
        f(j,i,n){
            if(c<p and weight+a[j]<=q){
                weight+=a[j];
                c++;
                mx=max(mx,c);
            }else break;
        }
    }
     printf("Case %lld: %lld\n",index++,mx);

    
    }
    // if(c==s.length()/2) printf("Case %lld: Yes\n",index++);
    // else printf("Case %lld: No\n",index++);
  return 0;
}