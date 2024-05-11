#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int n;
  cin>>n;
  if(n%7==0 or n%4==0 or n%47==0 or n%44==0 or n%77==0 or n%444==0 or n%447==0 or n%477==0 or n%777==0 or n%774==0 or n%474==0 or n%747==0) {cout<<"YES"<<endl; return 0;}
  while(n!=0){
    int rem=n%10;
    n/=10;
    if(rem==4 or rem==7) continue;
    else{
      cout<<"NO"<<endl; return 0;
    }
  }
  cout<<"YES"<<endl;
  
    
  return 0;
}
