#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long T, n, k, x;
    cin >> T;
    while (T--)
    {
        cin >> n >> k >> x;
        cout << ((k * (k + 1) / 2 > x || (n - k + 1 + n) * k / 2 < x) ? "NO\n" : "YES\n");
    }
}