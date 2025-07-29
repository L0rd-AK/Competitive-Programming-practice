#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, cnt = 0, m = 1;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        for (auto to : a)
        {
            if (to * m <= c)
                m *= 2;
            else
                cnt++;
        }
        cout << cnt << '\n';
    }
}