#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    #ifndef ONLINE_JUDGE
       freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    #endif

    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       string a,b="";
       a+=s[0];
       int i=1;
       for(;i<s.length();i++){
            if(s[i]=='0')a+=s[i];
            else break;
       }
       for(;i<s.length();i++){
              b+=s[i];
       }
       if(b.length()==0)cout<<"-1\n";
       else if(stoi(a)>=stoi(b))cout<<"-1\n";
       else cout<<a<<" "<<b<<'\n';
       // cout<<a<<" "<<b<<'\n';
    }
	return 0;
}