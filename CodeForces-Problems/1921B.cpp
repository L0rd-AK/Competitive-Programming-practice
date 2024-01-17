#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
#ifndef ONLINE_JUDGE
	freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
	int t;
	cin >> t;
	while (t--)
	{
       int n;
       cin>>n;cin.ignore();
       string s,ss;
       cin>>s>>ss;
       if(s==ss){cout<<"0\n"; continue;}
       int a1=0,a2=0,ans=0;
       for(int i=0;i<n;i++){
        if(s[i]=='1')a1++;
        if(ss[i]=='1')a2++;
        if(s[i]!=ss[i] and ss[i]=='1')ans++;
       }
       if(a1>a2)ans+=(a1-a2);
       cout<<ans<<'\n';
	}
	return 0;
}