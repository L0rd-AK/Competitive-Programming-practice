#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
        int a,b,ans=0;
        cin>>a>>b;
        if(b<a) {cout<<a-b<<endl;}
        else{
            while(a!=b){
                if(a<b)
                  if(b%2==0){b/=2;ans++;if(a==b)break;}
                  else {b++; ans++;if(a==b)break;}
                if(a>b) {b++;ans++;if(a==b)break;}
            }
            cout<<ans<<endl;
        }
  
  
  
  return 0;
}