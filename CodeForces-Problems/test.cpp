#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int n,temp;
  cin>>n;
  while(n!=0){
    temp=n%10;
    n/=10;
    if(9-temp<temp and n!=0)cout<<9-temp;
    else cout<<temp;
    
  }
  // if(9-temp<temp)cout<<9-temp<<endl;
  // else cout<<temp<<endl;
    
  return 0;
}
