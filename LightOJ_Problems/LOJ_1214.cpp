#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)


int main() 
{
  ll t,n,index=1;
  
  cin>>t;
  while(t--){        ll a,b,rem=0,start=0;string s;
    cin>>s>>b;    
    b=abs(b);
    if(s[0]=='-') start=1;
    f(i,start,s.length()){
        rem=rem*10+(s[i]-'0');
        rem%=b;
    }
     if(rem==0) printf("Case %lld: divisible\n",index++);
     else printf("Case %lld: not divisible\n",index++);
    }
    
  return 0;
}