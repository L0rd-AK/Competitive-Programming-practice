#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int t,x,y;
  cin>>t;
  while(t--){
    cin>>x>>y;
    if(x-y>0)cout<<x-y<<'\n';
    else cout<<0<<'\n';
  }

    
  return 0;
}
