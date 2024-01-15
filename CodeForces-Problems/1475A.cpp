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
        if (n & (n - 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
	}
	return 0;
}