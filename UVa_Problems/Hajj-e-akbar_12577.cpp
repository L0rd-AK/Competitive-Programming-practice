#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t,x,y,ok,ans=1;
  string s;char s1;
  while(1){
    cin>>s;
    if(s[0]=='*') break;
    if(s[0]=='H') cout<<"Case "<<ans<<": Hajj-e-Akbar"<<endl;
    if(s[0]=='U') cout<<"Case "<<ans<<": Hajj-e-Asghar"<<endl;
    ans++;
  }
  
  
  return 0;
}