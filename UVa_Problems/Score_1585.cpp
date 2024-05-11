#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() 
{
  ll t=0,n,c,ans,index=0;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    ans=0;c=1;
      for(int i=0;i<s.length();i++){
        if(s[i]=='O'){ ans+=c;c++;}
        else if(s[i]=='X')c=1;
      }
      cout<<ans<<endl;
    }
    
  return 0;
}