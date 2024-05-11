#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int n,z,x;
  cin>>n>>z;
  int a[n];
  int c=0;
  for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) {if(a[i]>=a[z-1] and a[i]!=0) c++;}
  cout<<c<<endl;
    
  return 0;
}
