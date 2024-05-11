#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);

  int n,m;
  cin>>n>>m;
  string a,b;
  cin>>a>>b;
  int suff=1,pref=1;
  for(int i=0;i<n;i++){
    if(a[i]==b[i])continue;
    else{ suff=0;break;}
  }
  for(int i=1;i<=n;i++){
    if(a[n-i]==b[m-i])continue;
    else{ pref=0;break;}
  }
  if(suff==1 and pref==1) cout<<0<<'\n';
  else if(suff==1 and pref==0) cout<<1<<'\n';
  else if(suff==0 and pref==1) cout<<2<<'\n';
  else if(suff==0 and pref==0) cout<<3<<'\n';


    
  return 0;
}
