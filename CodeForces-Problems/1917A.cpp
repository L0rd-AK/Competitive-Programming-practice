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
		ll n;
		cin >> n;

		ll x, c = 0,zero=0;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x < 0)
				c++;
			if(x==0)zero++;
		}
		if(zero>0){
			cout<<0<<'\n';
		}
		else if (n == 1)
		{
			if (c == 0 and x != 0)
			{
				cout << 1 << '\n';
				cout << 1 << " " << 0 << '\n';
			}
			else
				cout << 0 << '\n';
		}
		else
		{
			
			if (c % 2 == 0 and c == 0)
			{
				cout << 1 << '\n';
				cout << 1 << " " << 0 << '\n';
			}else if(c>0 and c%2==0){
				cout << 1 << '\n';
				cout << 1 << " " << 0 << '\n';
			}
			else
				cout << 0 << '\n';
		}
	}
	return 0;
}
