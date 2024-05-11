#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n;i++) if(s[i]=='8') c++;
    
    if(c==0) {cout<<0<<endl; return 0;}
    if(c==(n/11)) cout<<c<<endl;
    else if(c>(n/11)) cout<<(n/11)<<endl;
    else cout<<c<<endl;
    
    return 0;
}