#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int t;
  cin>>t;
  int a,b;
  while(t--){
    cin>>a>>b;
    int x=abs(a-b);
    int ans=0;
    for(int i=1;i<=sqrt(x);i++){
        if(x%i==0){
            ans++;
            if(i!=(x/i)) ans++;
        }
    }
    cout<<ans<<'\n';
  }
  

    
  return 0;
}
