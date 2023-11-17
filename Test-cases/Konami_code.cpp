#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  string s;
  cin>>s;
  int ans=0;
  for(int i=0;i<s.length();i++){
    if(s[i]=='U' and s[i+1]=='U' and s[i+2]=='D' and s[i+3]=='D' and s[i+4]=='L' and s[i+5]=='R' and s[i+6]=='L' and s[i+7]=='R' and s[i+8]=='B' and s[i+9]=='A')
     ans++,i+=10;
  }
  cout<<ans<<'\n';

    
  return 0;
}
