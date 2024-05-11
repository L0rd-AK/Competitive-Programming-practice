#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)

int main() 
{
    ll t,n,index=1;
    ll  cases,a[10009];
    scanf("%lld", &cases);
    for (ll caseno = 1; caseno <= cases; ++caseno) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &n);
        f1(i,6,n){
          a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%10000007;
        }
        printf("Case %d: %d\n", index++, a[n] % 10000007);
    }
   
  return 0;
}