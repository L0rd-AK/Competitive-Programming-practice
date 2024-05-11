#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t,n,tru,sum=0,index=1;
  
  
  cin>>t;
  while(t--){        double ox,oy,ax,ay,bx,by,oa,ob,ab,ans;
    cin>>ox>>oy>>ax>>ay>>bx>>by;
    oa=sqrt(((ax-ox)*(ax-ox))+((ay-oy)*(ay-oy)));
    ob=sqrt(((bx-ox)*(bx-ox))+((by-oy)*(by-oy)));
    ab=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
  
    ans=acos(((oa*oa)+(ob*ob)-(ab*ab))/(2.0*oa*ob));
    
    printf("Case %lld: %.10lf\n",index++,oa*ans);

  }      
    
  return 0;
}