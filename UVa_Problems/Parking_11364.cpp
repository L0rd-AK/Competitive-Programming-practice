#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int t,n,index=1;
  cin>>t;
  while(t--){
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int ans=0;
    for(int i=1;i<n;i++) ans+=a[i]-a[i-1];
    cout<<ans*2<<endl;
    
  }     
        
    
  return 0;
}


