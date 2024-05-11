#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int n,k;
  cin>>n>>k;
  int mx=round(n/2.0);
  int a[n],ok[k]={0};
  for(int i=0;i<n;i++){ 
    cin>>a[i];
    ok[a[i]-1]++;
  }
  int ans=0;
  for(int i=0;i<k;i++){
    int x=ok[i]/2;
    ans+=x*2;
    mx-=x;
  }
  ans+=mx;
    cout<<ans<<endl;
 return 0;
}