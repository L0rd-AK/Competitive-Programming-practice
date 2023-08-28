#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t=0,x,y,h,p,c,z,x1,y1,x2,y2,n,ans=1,tru,sum=0,index=1;
  
  cin>>t;
  ll ax,ay,bx,by,cx,cy,dx,dy,area1,area2,area;
  while(t--){
    cin>>ax>>ay>>bx>>by>>cx>>cy;  
    dx=ax+cx-bx;
    dy=ay+cy-by;
    area1=ax * by + bx * cy + cx * dy + dx * ay;
    area2=ay * bx + by * cx + cy * dx + dy * ax;
    area=abs(area1-area2);

    printf("Case %lld: %lld %lld %lld\n",index++,dx,dy,area/2);
  }      
    
  return 0;
}