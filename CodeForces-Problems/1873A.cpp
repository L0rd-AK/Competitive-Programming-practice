#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int n;
  cin>>n;
  string s;
  while(n--){
    int one=0,two=0,three=0;
    cin>>s;
    if(s[0]=='a') one++;
    if(s[1]=='b') two++;
    if(s[2]=='c') three++;

    if(one+two+three>=1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  
    
  return 0;
}
