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
		ll n,c=0;
		cin>>n;cin.ignore();
		string s;
		cin>>s;
		set<char> st;
		for(int i=0;i<n;i++){
			st.insert(s[i]);
			c+=st.size();
		}
		cout<<c<<'\n';
	}
	return 0;
}
