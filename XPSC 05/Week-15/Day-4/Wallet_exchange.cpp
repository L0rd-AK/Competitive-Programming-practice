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
		ll a,b;
		cin>>a>>b;
		if((a+b)%2==1)cout<<"Alice\n";
		else cout<<"Bob\n";
	}
	return 0;
}