#include <bits/stdc++.h>
using namespace std;
#define ll long long int

double memoizedArray[1000001];

int main() 
{
  memoizedArray[0]=0;
   for(ll i=1;i<=1000000;i++){
      memoizedArray[i] = memoizedArray[i-1] + log(i);
    }
  ll t,n,index=1;
  cin>>t;
  while(t--){        ll a,b;
    cin>>a>>b;    
     long long digit=memoizedArray[a]/log(b)+1;
     printf("Case %lld: %lld\n",index++,digit);
     //else printf("Case %lld: not divisible\n",index++);
    }

  return 0;
}