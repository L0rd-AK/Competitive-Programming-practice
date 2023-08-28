#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi 2*acos(0.0)

int main() 
{
  double t=0,x,y,h,p,c,z,x1,y1,x2,y2,n,ans=1,tru,sum=0;
  int index=1;
  
  cin>>t;
  while(t--){
    cin>>x>>y>>h>>p;  
    double extra=((x-y)*p)/h;
    double newX=y+extra;    
    double v=(pi*p*(newX*newX+y*y+y*newX))/3;
    printf("Case %d: %.9lf\n",index++,v);
  }      
    
  return 0;
}