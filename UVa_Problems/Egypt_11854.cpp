#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t,x,y,z,n,c=1,ans;
  string s;
  while(1){
    cin>>x>>y>>z;
    if(x==0 and y==0 and z==0) break;

    if(x*x==y*y+z*z or y*y==x*x+z*z or z*z==y*y+x*x) cout<<"right"<<endl;
    else cout<<"wrong"<<endl;
  }
 
  return 0;
}