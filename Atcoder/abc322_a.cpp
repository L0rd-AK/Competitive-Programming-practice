#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  string s;
  int n;
  cin>>n>>s;
  int ans=0;
  for(int i=0;i<n-2;i++){
    if(s[i]=='A' and s[i+1]=='B' and s[i+2]=='C'){
        ans=i+1;
        break;
    }
  }
  if(ans)cout<<ans<<'\n';
  else cout<<-1<<'\n';

    
  return 0;
}
