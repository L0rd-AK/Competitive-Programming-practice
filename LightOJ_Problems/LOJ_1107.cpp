#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  ll t=0,x,y,x1,y1,x2,y2,n,c=1,ans;
  string s;
  cin>>t;
  while(t--){
      cout<<"Case "<<c<<":"<<endl;c++;
    cin>>x1>>y1>>x2>>y2>>n;
    while(n--){
      cin>>x>>y;
      if(x>=x1 and x<=x2 and y>=y1 and y<=y2) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }

  }
  return 0;
}