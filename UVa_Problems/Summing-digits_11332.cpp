#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void recursion(ll n,ll sum){
  if(n<=9) cout<<n<<endl;
  else{
    while(n!=0){
      sum+=n%10;
      n/=10;
    }
    n=sum;
    recursion(n,0);
  }
}

int main() 
{
  ll t=0,x=1,sec,z,x1,y1,x2,y2,n,ans,tru=1,sum=0,index=0,minn_minut=1000,maxx_neg=-1,maxx_pos=1000;
  //cin>>t;
  while(1){
    cin>>n;       
    if(n==0) exit(0);
    recursion(n,0);
  }
  
  return 0;
}