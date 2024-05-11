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
       string s="codeforces";
       while(t--){
            char c;
            cin>>c;
            ll pos=s.find(c);
            if(pos>10)cout<<"NO\n";
            else cout<<"YES\n";

       }
	return 0;
}