#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t=0,x,y,r,y1,x2,y2,n,c,sum=1,index=1;
  char s[21];
  cin>>t;
  while(t--){
    cin>>x>>y;
    if(y>x)
      cout<<"Case "<<index++<<": "<<19+(y*4)<<endl;
    else
      cout<<"Case "<<index++<<": "<<19+(x*4)+(x-y)*4<<endl;
    
  }
 
  return 0;
}