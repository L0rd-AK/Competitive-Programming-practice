#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);

  int n,x;
  cin>>n>>x;
  int a[x];
  for(int i=0;i<x;i++)cin>>a[i];
  for(int i=1,j=0;i<=n;i++){
    if(i==a[j]){cout<<0<<'\n';j++;}
    else if(i<a[j]) cout<<a[j]-i<<'\n';
    else if(i>a[j]){cout<<i-a[j]<<'\n';j++;}
  }


    
  return 0;
}
