#include <bits/stdc++.h>
using namespace std;
#define ll long long int

double angle(double a,double b,double c){
  return acos((b*b+c*c-a*a)/(2*b*c));
}
int main() 
{
  ll t,n,ans=1,tru,sum=0,index=1;
  
  cin>>t;
  while(t--){        double A,B,C,a,b,c,s,area;
    cin>>A>>B>>C;
    a=A+B,b=B+C,c=C+A;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    area-=(0.5*A*A*angle(B+C,C+A,A+B));
    area-=(0.5*B*B*angle(C+A,A+B,B+C));
    area-=(0.5*C*C*angle(A+B,B+C,C+A));
    

    printf("Case %lld: %.10lf\n",index++,area);

  }      
    
  return 0;
}