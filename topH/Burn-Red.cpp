#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    int x,z,y,m;
    cin>>x>>z>>y>>m;
    if(x<=y)cout<<x*z-y*m<<'\n';
    else cout<<x*z<<'\n';
    
    
    return 0;
}