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
		ll n,pos=0,neg=0;
		cin>>n;cin.ignore();
		string s;
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]=='+')pos++;
			else neg++;
		}
		cout<<abs(pos-neg)<<'\n';
	}
	return 0;
}
