#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t=0,x,y,z,x1,y1,x2,y2,n,c,sum=1,index=0,maxx=-19;
  char s[21];
  while(cin>>x1>>y1){

      if(x1<y1){x=x1;y=y1;}
      else {x=y1;y=x1;}

      for(int i=x;i<=y;i++){
      z=i;index=1;
      while(z!=1){
        index++;
        if(z%2==0) z=z/2;
        else z=((3*z)+1);
      }
    if(maxx<index) maxx=index;
  }
    cout<<x1<<" "<<y1<<" "<<maxx<<endl;maxx=-19;
  }
  
 
  return 0;
}