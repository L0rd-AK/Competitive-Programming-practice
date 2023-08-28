#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)


int main() 
{
  ll t,n,index=1;
  
  
  cin>>t;
  while(t--){        ll n,b,rem=0,start=0;char c;
    cin>>n>>b;       ll a[n];
    f(i,0,n) cin>>a[i];
    while(b--){
        cin>>c;      ll x,y,z;
        if(c=='S'){
          cin>>x;
          f(i,0,n) a[i]+=x;
        }else if(c=='M'){
          cin>>x;
          f(i,0,n) a[i]*=x;
        }else if(c=='D'){
          cin>>x;
          f(i,0,n) a[i]/=x;
        }else if(c=='P'){
            cin>>y>>z;
            swap(a[y],a[z]);
        }else if(c=='R'){
            reverse(a,a+n);
        }
    }
     printf("Case %lld:\n",index++);
     f(i,0,n) cout<<a[i]<<" ";
     cout<<endl;
    }
  return 0;
}