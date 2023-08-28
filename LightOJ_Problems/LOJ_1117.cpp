#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)

ll LCM(ll a,ll b){
  return (a*b)/__gcd(a,b);
}
int main() 
{
  ll t,n,m,sum=0,d=1;
  cin>>t;
  while(t--){
    sum=0;
    cin>>m>>n;
    int a[n];
    ll TO=pow(2,n)-1;
    f(i,0,n) cin>>a[i];
     
    f1(i,0,TO){
      ll lcm=1,c=0;
      f1(j,0,n-1){
        if(i&(1<<j)){
          lcm=LCM(lcm,a[j]);
          c++;
        }
      }
      if(c%2==0) sum-=(m/lcm);
      else sum+=(m/lcm);
    }

    printf("Case %lld: %lld\n",d++,abs(sum));
    sum=0;
  }
 

  return 0;
}
