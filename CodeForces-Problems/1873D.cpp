#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int t;
  cin>>t;
  
  while(t--){
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;){
        if(s[i]=='B'){
          ans++;
          i+=k;
        }else i++;
    }
    cout<<ans<<endl;
  }
  
    
  return 0;
}
