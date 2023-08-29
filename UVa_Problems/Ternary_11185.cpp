#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t=0,x,y,z,x1,y1,x2,y2,n,c,sum=1,index=0,a[100000];
  char s[21];
  
 while(1){
  cin>>n;
  if(n<0) break;
  if(n==0){
    cout<<0<<endl;
  }else{
    for(int i=0;i<=100000;i++) a[i]=0;
        index=0;
        while(n!=0){
          a[index]=n%3;
          n=n/3;
          index++;
        }
    for(int i=index-1;i>=0;i--) cout<<a[i]; 
    cout<<endl;
  }
 }
  
 
  return 0;
}