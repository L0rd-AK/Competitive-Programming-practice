#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int n,x;
  double z;
  cin>>n>>x;
  int c=0;
  z=n;
  while(z>0){
    z=ceill(n/x);c++;
    n=n/x;
  }
    cout<<c<<endl;
 return 0;
}