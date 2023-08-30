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
    cout<<"Case "<<index++<<": "<<a[n-1]<<endl; 
  }     
        
    
  return 0;
}


