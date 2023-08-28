#include <bits/stdc++.h>
using namespace std;
#define ll long long int

#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)


int main() 
{
  ll t=0,x=1,c,z,x1,y,x2,y2,n,ans=1,tru,sum=0,index=1;
  
  cin>>t;
  while(t--){
    cin>>n;   c=0;
    while(n>0){
        if(n%2==1) c++;
        n/=2;
    }
    if(c%2==0) cout<<"Case "<<index++<<": "<<"even"<<endl; 
    else cout<<"Case "<<index++<<": "<<"odd"<<endl; 
    
  }      
    
  return 0;
}


