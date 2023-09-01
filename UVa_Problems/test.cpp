#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int ok=0,c=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]=='0' and s[i+1]=='1') ok++;
            if(s[i]=='1' and s[i+1]=='0') ok++;
            if(s[i]=='1') c++;
        }
        if(s[s.length()-1]=='1') c++;
        if(c==s.length()) cout<<"YES"<<endl;
        else{
            if(ok<2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
    return 0;
}