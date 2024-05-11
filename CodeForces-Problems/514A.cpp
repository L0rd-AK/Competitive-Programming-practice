#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  string s;
  cin>>s;
  if(s[0]=='9')cout<<9;
  else if((s[0]-'0')>4)cout<<9-(s[0]-'0');
  else cout<<s[0];
  for(int i=1;i<s.length();i++){
    if((s[i]-'0')>4)cout<<9-(s[i]-'0');
    else cout<<s[i];
  }
  
}
