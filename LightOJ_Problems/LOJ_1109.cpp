#include <bits/stdc++.h>
using namespace std;

#define ll long long int

#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)
bool compare(pair<int,int>a,pair<int,int>b){
    if(a.first<b.first) return 1;
    if(a.first>b.first) return 0;
    if(a.second>b.second) return 1;

    return 0;
}
int main() 
{
  ll t,n,index=1;
  vector<pair <int,int>> a(1001);
  f1(i,1,1000) {a[i].second=i;a[i].first=0;}
  f1(i,1,1000){
    for(int j=i;j<=1000;j+=i){
        a[j].first++;
    }
  }
  sort(a.begin(),a.end(),compare);
  
  cin>>t;
  while(t--){        ll x,y;
    cin>>n;  
     printf("Case %lld: %lld\n",index++,a[n].second);
     //else printf("Case %lld: not divisible\n",index++);
  }

  return 0;
}