#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t=0,x,y,c,z,x1,y1,x2,y2,n,ans=1,tru,sum=0,index=1;
  
  cin>>t;
  while(t--){
    cin>>x1>>y1>>x2>>y2;   c=0;
    x=abs(x1-x2);
    y=abs(y1-y2);

    if(y==x) cout<<"Case "<<index++<<": "<<"1"<<endl; 
    else if((x-y)%2==0) cout<<"Case "<<index++<<": "<<"2"<<endl; 
    else cout<<"Case "<<index++<<": "<<"impossible"<<endl; 
    
  }      
    
  return 0;
}


