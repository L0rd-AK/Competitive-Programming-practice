#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

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
        cin >> n;
        int a[n];
        f(i, 0, n) cin >> a[i];
        vector<int> v({a[n - 1]});
        for (int i = n - 2; i >= 0; --i)
        {
            if (a[i] > v.back())
            {
                v.push_back(a[i] % 10);
                v.push_back(a[i] / 10);
            }
            else
            {
                v.push_back(a[i]);
            }
        }

        if (is_sorted(v.rbegin(), v.rend()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}