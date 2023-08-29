#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t,x,y,n,i,ans;
  char s[1000];
 cin>>t;
 while(t--){
  cin>>x>>y;

  if(y%x==0) cout<<x<<" "<<y<<endl;
  else cout<<-1<<endl;
 }
  return 0;
}