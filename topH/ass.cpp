#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    ll x,y;
    cin>>x>>y;
    ll n=y-x;
    if(n/32) n=n%32;
    if(n==2){cout<<"Yes\n";return 0;}
    else if(n<2){cout<<"No\n";return 0;}
    if(n/16) n=n%16;
    if(n==2){cout<<"Yes\n";return 0;}
    else if(n<2){cout<<"No\n";return 0;}
    if(n/8) n=n%8;
    if(n==2){cout<<"Yes\n";return 0;}
    else if(n<2){cout<<"No\n";return 0;}
    if(n/4) n=n%4;
    if(n>=2){cout<<"Yes\n";return 0;}
    else if(n<2){cout<<"No\n";return 0;}
    
    return 0;
}